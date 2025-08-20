#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
    //parametrized
    Teacher(string name, string dept, string sub,double salary){
        this->name=name;
        this->dept=dept;
        this->sub=sub;
        this->salary=salary;

    }
    ~Teacher(){
        cout<<"I delete everything";

    }
    
    
    //properties/attributes
    string name;
    string dept;
    string sub;
    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<dept<<endl;
    }
    
    void newDept(string newDept){
        newDept=dept;
    }
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};
class Account{
public:
//data hiding
    string accountID;
    string username;
private:
    double balance;
    string password;

    
        
};



int main(){
    Teacher t1("Ujjaval","CSE","C++",25000);
    // t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    


}

