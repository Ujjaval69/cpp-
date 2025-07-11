#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for (int i=1;i<a;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max;
    cout<<min;

}