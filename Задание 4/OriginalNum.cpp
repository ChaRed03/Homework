#include<iostream>
using namespace std;
int main(){
    int N, lot, amount;
    float outside;
    cout << "Enter N size array A[N]: ";
    cin >> N;
    float A[N];
    float B[N];
    cout << "Enter array A: "; for ( int i = 0; i < N; i++) cin >> A[i];
    cout << "Output array A: "; for ( int i = 0; i < N; i++) cout << A[i] << " ";
    cout << endl;
    amount = 0;
    outside = -1010010;
    for (int i = 0; i < N; i++){
        lot = 0;
        for (int j = 0; j < N; j++){
            if (A[i] == A[j] && A[i] != outside){
                lot += 1;
            }
        }
        if (lot == 1) B[i] = A[i];
        else if (lot > 1){
            B[i] = A[i];
            outside = A[i];
        }
    }
    cout << "Original elements: ";
    for ( int i = 0; i < N; i++){
        if (A[i] == B[i]){
            amount += 1;
            cout  << A[i] << " ";
        }
    }
    cout << endl;

    cout << "Number of original elements: " << amount;
    return 0;
}
