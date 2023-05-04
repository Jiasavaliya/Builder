#include<iostream>
#include<string.h>
using namespace std;

class student{

   private :
   	
    int id;
    char name[33];
    char role[22];
    int salary;
    char experience[22];
    char address[52];
    char email[50];
    char contact[40];
    
    public :
    
    void setter(int id, char name[], char role[], int salary, char  experience[], char address[], char email[],char contact[]){
    	
    	this->id=id; 
    	strcpy(  this->name,name );
    	strcpy(  this->role,role );
    	this->salary=salary;
    	strcpy(  this->experience,experience );
    	strcpy(  this->address,address );
    	strcpy(  this->email,email );
       	strcpy(  this->contact,contact );	 
	}

	void getter(){
		
	    cout<<id<<endl;
	    cout<<name<<endl;
	    cout<<role<<endl;
	    cout<<salary<<endl;
	    cout<<experience<<endl;
	    cout<<address<<endl;
	    cout<<email<<endl;
	    cout<<contact;
	    
	}
};

int main(){
	
	student obj1,obj2, obj3, obj4, obj5; 
	
        char name[50];	
	char experience[50];
	char address[50];
	char email[50];		
	char contact[50];	
		
	obj1.setter(1,"name : vishal","engineer",22000,"1 year","address : surat","email : abc33@gmail.com","contact : 5685644444");
	obj1.getter();
	cout<<endl<<endl;
	
 	obj2.setter(2,"name : manish","doctor",14000,"2 year","address : mumbai","email : abc55@gmail.com","contact : 3456543456");
	obj2.getter();
	cout<<endl<<endl;
	
	obj3.setter(3,"name : rahul","manager",23000,"3 year","address : adajan","email : abc44@gmail.com","contact : 6543456544");
	obj3.getter();
	cout<<endl<<endl;
	
	obj4.setter(4,"name : mohan","driver",56000,"4 year","address : delhi","email : abc66@gmail.com","contact : 98754354555");
	obj4.getter();
	cout<<endl<<endl;
	
	obj5.setter(5,"name : mehul","loyar",56000,"5 year","address : madras","email : abc88@gmail.com","contact : 5444556666");
	obj5.getter();
	cout<<endl<<endl;
}
