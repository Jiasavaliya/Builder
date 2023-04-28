#include<iostream>
using namespace std;

class employee{
	
	public:

	employee(int a){
		
		cout<<"A : "<<a<<endl;
		
	}
	
     employee(int a, int b){
		
			cout<<"A : "<<a<<endl;
		    cout<<"B : "<<b<<endl;
		
	}	
};

int main(){
	
	employee obj1(12,22),obj2(77);
	return 0;
}

