#include<iostream>
using namespace std;
int Sum(int a){
    int sum=0;
    while(a!=0){
        int ld=a%10;
        sum=sum+ld;
        a=a/10;
    }
    return sum;
}
int main(){
    int a;
    cin>>a;
    cout<<Sum(a);
}