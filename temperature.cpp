#include<iostream>
using namespace std;
int main(){
    double temp,unit,celsius,fah,kelvin;
    cout<<"Enter temperature:"<<endl;
    cin>>temp;
    cout<<"Enter unit:"<<endl;
    cin>>unit;
    if (unit=='C'){
        celsius=temp;
    }else if (unit=='F'){
        celsius=((temp-32)*5)/9;
    }else if (unit=='K'){
        celsius=temp-273.15;
    }else{
        cout<<"Invalid input";
    }
    
}