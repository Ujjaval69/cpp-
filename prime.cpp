#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x=0;
    if (a==1){
        x=1;
    }else{
        for (int i=2;i<a;i++){
            if (a%i==0){
                x=1;
                break;
            }
        }
    }
    if (x==0){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not prime"<<endl;
    }


}