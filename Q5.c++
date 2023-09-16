#include<iostream>
using namespace std;

int main(){

    char ch1, ch2;
    cout << " Enter two character: " << endl;
    cin >> ch1 >> ch2;

    
    cout << " Enter the ASCII value of two character:" << endl;
    cout << ch1 << " = " << int(ch1) << " " <<  ch2 << " = " << int(ch2);
}