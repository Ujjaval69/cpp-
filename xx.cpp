#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;


}
int main(){
    int x=10;
    int y=20;
    Swap(x,y);
    cout<<x<<endl;
    cout<<y;

}