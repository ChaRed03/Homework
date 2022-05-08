#include <iostream>
using namespace std;
int main(){
    long int i, num, summ;
    cout << "Enter a number: ";
    cin >> num;
    summ = 0;
    if ( num > 9 || num < -9){
        if (num < 0){ //convert a negative number to a non-negative one
            num = num * -1;
        }
        while (num > 9 || num < -9){ //looking for the sum of digits
            while (num !=0){
                summ += num%10;
                num = num / 10;
            }
            num = summ;
            summ = 0;
        }
    }
    else{
        cout << num;
        return 0;
    }
    cout << num;
    return 0;
}
