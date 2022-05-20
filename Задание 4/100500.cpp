#include<iostream>
using namespace std;
int main(){
    int N, lot, amount, kol;
    cout << "Enter N size array A[N]: ";
    cin >> N;
    float A[N];
    amount = N;
    cout << "Enter array A: ";
    for ( int i = 0; i < N; i++) cin >> A[i];
    cout << endl;
    amount = N;
    kol = 0;
    for (int i = 0; i < N; i++){
        lot = 0;
        for(int j = 0; j < N; j++){
            if (A[i] == A[j]) lot += 1;
        }
        if (lot > 1) kol += 1;
    }
    if (kol%2 == 0) amount -= (kol/2);
    else if (kol%2==1) amount -= (kol/2+1);
    cout << endl << "Number of original elements: " << amount ;
    return 0;
}
