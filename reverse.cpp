#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ld;
    int r=0;
    while(a!=0){
        ld=a%10;
        r=r+ld;
        r=r*10;
        a=a/10;

    }
    r=r/10;
    cout<<r;

}