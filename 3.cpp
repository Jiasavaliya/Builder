#include <iostream>
using namespace std;

class highschool{
	
	int stu_name,stu_roll_no,stu_standard, stu_age,stu_contact, stu_edu_institute_name,stu_address;
	
};

class college{
public:

    string stu_name, stu_roll_no,stu_standard, stu_age,stu_contact, stu_edu_institute_name,stu_address;
    
    
   static int infor;
   static void getter() {
   college student;
      
	student.stu_name;
        student.stu_roll_no;
        student.stu_standard;
        student.stu_age;
        student.stu_contact;
        student.stu_edu_institute_name;
        student.stu_address;
}
 

    static void setter() {
        
       college student;
      
      cout<<"student name : ";
      cin>> student.stu_name;
	  
      cout<<"student rollno : ";
      cin>> student.stu_roll_no;
	  
      cout<<"student standard : ";
      cin>> student.stu_standard;
	  
      cout<<"student age : ";
      cin>> student.stu_age;
	  
      cout<<"student contact : ";
      cin>> student.stu_contact;
	  
      cout<<"student contact : ";
      cin>> student.stu_contact;
	  
}
 
};

int college ::infor = 2; 

int main() {
    college::setter();
    return 0;
}
