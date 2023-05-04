#include <iostream>
using namespace std;

class highschool{
	
	public:
	
	char stu_name[22];
	int stu_roll_no;
	int stu_standard;
	int stu_age;
	
   static int infor;
   
   
    static void setter() {
        
       highschool student;
      
      cout<<"student name : ";
      cin>> student.stu_name;
	  
      cout<<"student rollno : ";
      cin>> student.stu_roll_no;
	  
      cout<<"student standard : ";
      cin>> student.stu_standard;
	  
      cout<<"student age : ";
      cin>> student.stu_age;
	 
}
   
   static void getter() {
   highschool student;
      
	    student.stu_name;
        student.stu_roll_no;
        student.stu_standard;
        student.stu_age;
        
}

};

class collage{
	
	public:
	

	char stu_contact[44];
	char stu_edu_institute_name[55];
	char stu_address[55];
	
	 
   static int infor;
   
   
    static void setter() {
        
       collage student;
      
     
      cout<<"student contact : ";
      cin>> student.stu_contact;
	  
      cout<<"student edu institute name : ";
      cin>> student.stu_edu_institute_name;
      
      cout<<"student stu address : ";
      cin>> student.stu_address;
	
}
   
   static void getter() {
   collage student;
      
	  
        student.stu_contact;
        student.stu_edu_institute_name;
        student.stu_address;
}

};




int highschool ::infor = 2; 
int collage ::infor = 2; 

int main() {
	
    highschool::setter();
    collage::setter();
    return 0;
}
