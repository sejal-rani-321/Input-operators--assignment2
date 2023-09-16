#include <iostream>
using namespace std;
int main()
{
int x = 2,y = 3;
// cin>>x>>y;
x+=y;   // --> x = 2 + 3 
cout<<x << endl;
x-=y;   // --> x = 5 - 3
cout<<x << endl;
x%=y;   // --> x = 2 % 3  ( a % b = a)
cout<<x << endl;

cout<<x;  //  x = 2
}

