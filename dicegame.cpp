#include<iostream>
using namespace std;
int main(){
    int rounds;
    int score=0;
    cout<<"===== DICE GAME ====="<<endl;
    cout<<"Enter the number of rounds :";
    cin>>rounds;
    for (int i=1;i<=rounds;i++){
        int dice1,dice2;
        cout<<"Round"<<i<<endl;
        cout<<"Dice 1:";
        cin>>dice1;
        cout<<"Dice 2:";
        cin>>dice2;
        int sum=dice1+dice2;
        cout<<"Sum:"<<sum;
        
        if (sum==7){
            cout<<"LUCKY SEVEN! Double points!"<<endl;
            sum=sum*2;
            score=score+sum;
           
        }else if (dice1==dice2){
            cout<<"DOUBLE! Bonus points!"<<endl;
            sum=sum+10;
            score=score+sum;
            
        }else if (dice1==1 && dice2==1){
            cout<<" SNAKE EYES! All points lost!"<<endl;
            score=0;
          

        }else{
            cout<<"Normal Roll"<<endl;
            score=score+sum;
           
        }
        cout<<"Score:"<<score<<endl;


    }
    cout<<"Final score:"<<score;

}