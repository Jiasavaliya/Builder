#include<iostream>
using namespace std;

class data{
	
	public:
		
		~data(){
			
			cout<<"last"<<endl;
		}
		
		data(){
			
			cout<<"default"<<endl;
		}
};

int main(){
	
	data obj;
	
	cout<<"main function"<<endl;
	
	return 0;
}
