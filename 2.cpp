#include<iostream>
using namespace std;

class Student {
   public:
      char name[10];
      int rollNumber;
      float marks;
};

class Student_Details {
   public:
      void Details(Student& s) {

         cout<<"Enter student name: ";
         cin>>s.name;
         cout<<"Enter student roll number: ";
         cin>>s.rollNumber;
         cout<<"Enter student marks: ";
         cin>>s.marks;
      }

      void printDetails(Student& s) {
         cout<<"Name: "<<s.name<<endl;
         cout<<"Roll Number: "<<s.rollNumber<<endl;
         cout<<"Marks: "<<s.marks<<endl;
      }
};

int main() {
   Student obj;
   Student_Details obj1;
   obj1.Details(obj);
   details.printDetails(obj);
   return 0;
}

