#include"Student.h"
#include<iostream>
using namespace std;


Student::Student(int rollno,string name){
    this->rollno = rollno;
    this->name = name;
    cout<<"enter marks1 marks2 marks3"<<endl;
    cin>>marks1>>marks2>>marks3;
    this->m1=marks1;
    this->m2= marks2;
    this->m3 = marks3;

}

void Student::display(){
    cout<<"Roll no : "<<rollno<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks1 :"<<marks1<<endl;
    cout<<"Marks2 :"<<marks2<<endl;
   cout<<"Marks3 :"<<marks3<<endl;
   cout<<"Totle marks : "<<marks1+marks2+marks3<<endl;
    cout<<"Percentage :"<<((marks1+marks2+marks3)/3)<<endl;
}





