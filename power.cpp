#include<iostream>
using namespace std;
int main(){
    int x,y,result=1;
    cout<<"Enter base"<<endl;
    cin>>x;
    cout<<"Enter power"<<endl;
    cin>>y;
    for (int i=1;i<=y;i++){
        result=result*x;
    }
    cout<<result;

}