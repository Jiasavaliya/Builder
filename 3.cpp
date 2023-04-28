#include<iostream>
using namespace std;

class Z2;
class Z1{
	
	private :
		
	
		int n1=4;
		int n2=1;
	        friend void Z3(Z1,Z2);
};

class Z2{
	
	private :
		
	
		int n1=2;
		int n2=2;
	        
		
		friend void Z3(Z1,Z2);
};

void Z3(Z1 a, Z2 b){
	
    
    int c1=a.n1+b.n1;
	int c2=a.n2+b.n2;
     
    cout<<c1<<endl;
    cout<<c2<<endl;
    
    }

int main(){

    Z1 obj1;
    Z2 obj2;
         
	Z3(obj1, obj2);
	
}

