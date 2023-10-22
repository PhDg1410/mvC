#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Student {
    public: 
        //Constructor
        Student(const std::string& name, int id, double gpa) : name(name),id(id),gpa(gpa) {}

        //member function 
        void display() {
            cout<<"Name: "<<name<<"\n";
            cout<<"ID: "<<id<<"\n";
            cout<<"GPA: "<<gpa<<"\n";
        }
}
