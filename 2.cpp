#include <iostream>
#include<string.h>
using namespace std;

class Student {
   private:
   	
      char name[22];
      int age;
      
	  public:
      void setDetails(char n[], int a) {
         
		 strcpy(name,n);
         age = a;
         }
         
      void printDetails() {
         
		 cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl;
         
      }
};

class College {
   
   private:
      char collegeName[22];
      Student student;
   
   public:
   	
      void setCollegeName(char c[]) {
         strcpy(collegeName,c);
      }
      
      void setStudentDetails(char n[], int a) {
         student.setDetails(n, a);
      }
      
      void printCollegeDetails() {
         cout << "College Name: " << collegeName << endl;
         student.printDetails();
      }
};

int main() {
	
   College obj;
   obj.setCollegeName("XYZ College");
   obj.setStudentDetails("shresha Doe", 20);
   obj.printCollegeDetails();

   return 0;
}
