#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int r, h;
    cout << " Enter radius & height: " << endl;
    cin >>r >>h;

   int volume_of_radius = 3.14 *pow(r,2)* h;

   cout << "volume of radius: " << volume_of_radius << endl;
}