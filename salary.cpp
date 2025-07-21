#include<iostream>
using namespace std;
int main(){
    int a;
    char b[100];
    double basic;
    int years;
    cout<<"Enter Employee ID"<<endl;
    cin>>a;
    cout<<"Enter Employee Name:"<<endl;
    cin>>b;
    cout<<"Enter Basic Salary:"<<endl;
    cin>>basic;
    cout<<"Enter Years of Experience:"<<endl;
    cin>>years;
    if (years<2){
        basic=basic*1.05;
    }else if (years>2 && years<5){
        basic=basic*1.1;
    }else{
        basic=basic*1.15;
    }
    cout<<basic;



}