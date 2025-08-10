#include<iostream>
using namespace std;
int Sum(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        if (i%2==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main(){
    int a;
    cin>>a;
    cout<<Sum(a);
}