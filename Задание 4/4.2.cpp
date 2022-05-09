#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the diamond: ";
    cin >> n;
    if (n > 0){
        cout << setw(n) << '*' << endl; //setw - setting the field width
    }
    for (int i = 1; i < n; i++){ //The output of the top
        cout << setw(n - i) << '*' << setw(i * 2) << '*' << endl;
    }
    for (int i = n - 2; i >= 1; i--){ //Output of the lower part
        cout << setw(n - i) << '*' << setw(i * 2) << '*' << endl;
    }
    if (n > 1){ //output last space
        cout << setw(n) << '*' << endl;
    }
    return 0;
}
