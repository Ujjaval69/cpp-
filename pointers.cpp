#include<iostream>
using namespace std;
int main(){
    int x=18;
    float y=7.9;
    int *ptr=&x;
    float *py=&y;
    cout<<"Address stored in ptr is "<<ptr<<endl;
    cout<<"Value stored in ptr is "<<*ptr<<endl;

    cout<<"Address stored in py is "<<py<<endl;
    cout<<"Value stored in py is "<<*py<<endl;
    x=23;
    cout<<*ptr<<endl;
    *ptr=50;
    cout<<"New value of x is" <<x<<endl;
    cout<<"New value stored by pointer is"<<*ptr<<endl;
    int Valueatx=*ptr;
    cout<<Valueatx;
    


    // *ptr is used to print the value stored in the address

}