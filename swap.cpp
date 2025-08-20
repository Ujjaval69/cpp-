#include<iostream>
using namespace std;
void Swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    Swap(x,y);
    cout<<x<<endl;
    cout<<y; 
}