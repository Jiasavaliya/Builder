#include<iostream>
#include<string.h>

using namespace std;

class SBS{
	
	 private :
   	
   	int Item_Number;
	char Item_Name[33];
	char Quantity[22];
    int Tax;
    int Discount;
    
     public :
    
    void setter(int Item_Number , char Item_Name[], char Quantity[], int Tax, int  Discount){
    	
    	this->Item_Number=Item_Number; 
    	strcpy(  this->Item_Name,Item_Name );
    	strcpy(  this->Quantity,Quantity );
    	this->Tax=Tax;
    	this->Discount=Discount;	
}

void getter(){
		
		cout<<Item_Number<<endl;
		cout<<Item_Name<<endl;
		cout<<Quantity<<endl;
	    cout<<Tax<<endl;
	    cout<<Discount<<endl;
}
	    	int cheak_itemnumber(){
			
			return Item_Number;
}

};
int main(){
	
	char email[50];
    char password[20];
    
    char correctEmail[] = "abc22@gmail.com";
    char correctPassword[] = "123456";
    
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>password;
    
    if(strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) {
        cout<<"Login successful!"<<endl;
    } else {
        cout<<"Login failed. Please try again"<<endl;
}
	
	SBS obj1,obj2, obj3, obj4, obj5; 
	
    char Item_Name[50];	
	char Quantity[50];
	
	obj1.setter(12,"Item Name: bag","Quantity : 1",10,30);
	obj1.getter();
	cout<<endl<<endl;
	
	obj2.setter(21,"Item Name: clothes","Quantity : 3",5,20);
	obj2.getter();
	cout<<endl<<endl;

	obj3.setter(4,"Item Name: mobail","Quantity : 4",15,50);
	obj3.getter();
	cout<<endl<<endl;
	
	obj4.setter(55,"Item Name: t.v","Quantity : 1",20,30);
	obj4.getter();
	cout<<endl<<endl;
	
	obj5.setter(100,"Item Name: watch","Quantity : 3",5,40);
	obj5.getter();
	cout<<endl<<endl;
	
			

}
   
   
