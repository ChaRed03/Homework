#include <iostream>
using namespace std;
int main(){
    int i, j, N;
    cout << "Enter size array:";
    cin >> N;
    float A[N];
    cout << "Enter the array: ";
    for (i = 0; i < N; i++){ //enter array
        cin >> A[i];
    }
    for (j = 0; j < N; j++){ //Brute force of numbers
        for (i = 0; i < N; i++){
            if (A[i+1] > A[i]){
                swap(A[i], A[i+1]);
            }
        }
    }
    for (i = 0; i < N; i++){ //output new array
        cout << A[i] << " ";
    }
    return 0;
}
