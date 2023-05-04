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
    
    void setter(){
    	
    	cout<<"Enter Item Number : ";
    	cin>>Item_Number;
    	cout<<"Enter Item Name : ";
    	cin>>Item_Name;
    	cout<<"Enter Quantity : ";
    	cin>>Quantity;
    	cout<<"Tax : ";
    	cin>>Tax;
    	cout<<"Discount : ";
    	cin>>Discount;
    	
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
	
	SBS obj[8];
	int i;

	for(i=0; i<=2; i++)
{

	
	obj[i].setter();
	
}

   int item_number;
   
   cout<<"enter (check) your item number : ";
   cin>>item_number;
   
   for(i=0; i<=2; i++){
   	
   	
   	if(item_number==obj[i].cheak_itemnumber()){
   		
   		obj[i].getter();
	   }
   }

}
   
