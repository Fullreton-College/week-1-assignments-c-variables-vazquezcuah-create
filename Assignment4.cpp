#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    double ave;
    int mult;
    cout<<"enter the 1st of 4 integers: "<<endl;
    cin>>num1;
    cout<<"enter the 2nd of 4 integers: "<<endl;
    cin>>num2;
    cout<<"enter the 3rd of 4 integers: "<<endl;
    cin>>num3;
    cout<<"enter the 4th of the 4 integers"<<endl;
    cin>>num4;
    mult=num1*num2*num3*num4;
    ave=static_cast<double>(num1+num2+num3+num4)/4;
    cout<<"The product of the 4 numbers is "<<mult<<" and the average of the 4 numbers is "<<ave<<" .";
    return 0;
}

