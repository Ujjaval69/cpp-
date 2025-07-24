#include<iostream>
using namespace std;
int fact(int n){
    int p=1;
    for (int i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int ncr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);
    return fact(n)/(fact(r)*fact(n-r));

}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    cout<<ncr(n,r);
}