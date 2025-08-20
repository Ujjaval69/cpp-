#include<iostream>
using namespace std;
class Student{
public:    
    string name;
    int rno;
    float gpa;
    Student(string s,int r,float g){
       name=s;
       rno=r;
       gpa=g;
    }

};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

int main(){
    Student s1("Ujjaval Goyal",76,8.5);
    // s1.name="Ujjaval";
    // s1.rno=82;
    // s1.gpa=8.5;

    Student s2("Mangla",78,8.0);
//     s2.name="Mangla";
//     s2.rno=83;
//     s2.gpa=8.0;
    print(s1);
    print(s2);

}