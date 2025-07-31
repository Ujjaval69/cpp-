#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
float product(float a,float b){
    return a*b;
}
int avg(int a,int b,int c){
    return (a+b+c)/3;

}

int main(){
    cout<<"Sum of 4 and 5:"<<sum(4,5)<<endl;
    cout<<"Product of 2.5 and 3.5:"<<product(2.5,3.5)<<endl;
    cout<<"Average of 5 10 15:"<<avg(5,10,15);


}