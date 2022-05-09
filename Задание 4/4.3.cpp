#include <iostream>
using namespace std;
int main(){
    int deg, rate, z; //rate == deg + 1
    cout << "Enter number(degree): ";
    cin >> deg;
    rate = deg + 1;
    int A[rate];
    cout << "Enter the coefficients: ";
    for (int i = 0; i < rate; i++){
        cin >> A[i];
    }
    for (int i = 0; i < rate - 2; i++){ //find factorial coefficients
        for (z = deg-i; z > 0; z--){
            while (z > 1){
                A[i] *= z;
                z--;
            }
        }
    }
    cout << "Coefficients of the second derivative: ";
    for (int i = 0; i < rate - 2; i++){ //output this array - new rate
        cout << A[i] << " ";
    }
    return 0;
}
