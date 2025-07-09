#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    int ld;
    while(a!=0){
        ld=a%10;
        sum=sum+ld;
        a=a/10;
    }
    cout<<sum;
}