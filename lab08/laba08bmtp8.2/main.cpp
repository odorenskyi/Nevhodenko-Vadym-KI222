#include <iostream>
#include <iomanip>
#include "ModulesMySurname.h"
using namespace std;
bool logical_expression(char a, char b){
    return a+52==b;
    }
    void print_hex(int num){
        cout <<hex<<num<<" ";
    }
    void print_dec(int num) {
        cout<<dec<<num<<" ";
    }
    int s_calculation(int x, int y, int z){
        return x*y+z;
    }
    int main(){
    char a,b;
    int x,y,z;

    cout<<"Developed by Vadym Nevhodenko" << endl;
    cout << "Enter x,y,z:";
    cin>>x>>y>>z;

    cout <<"Enter a,b:";
    cin >>a>>b;

    cout <<"Logical expression:" <<boolalpha<<logical_expression(a,b)<< endl;

    cout <<"x(dec):";
    print_dec(x);
    cout << "x (hex):";
    print_hex(x);

    cout <<"y(dec):";
    print_dec(y);
    cout<<"y(hex):";
    print_hex(y);

    cout <<"z (dec):";
    print_dec(z);
    cout << "z (hex):";
    print_hex(z);

    cout <<"s_calculation:" <<s_calculation(x,y,z)<<endl;

    return 0;
    }
