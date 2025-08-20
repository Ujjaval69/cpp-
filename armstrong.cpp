#include<iostream>
using namespace std;
int Power(int base, int exponent){
    int result=1;
    for (int i=1;i<=exponent;i++){
        result=result*base;
    }
    return result;
}
int main(){
    int x,original,remainder,result=0;
    int count=0;

    cout<<"Enter the number:"<<endl;
    cin>>x;
    while(x!=0){
        x=x/10;
        count++;
    }
    original=x;
    while(original!=0){
        remainder=original%10;
        result=result+Power(remainder,count);
        original=original/10;
    }
    if (result==x){
        cout<<"Armstrong";

    }else{
        cout<<"no";
    }


}