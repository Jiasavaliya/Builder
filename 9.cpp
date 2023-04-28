#include<iostream>
using namespace std;

class RRS{
	
	private:
		
		int t_n;
		char t_name[20];
	
	
	public:
		
		void set(){
			
			cout<<"enter train number : ";
			cin>>t_n;
			cout<<"enter train name : ";
			cin>>t_name;
		
		}
		
		void get(){
			
			cout<<"train number : "<<t_n<<endl;
			cout<<"train name : "<<t_name<<endl;
		}
		
		int cheak_Trainnumber(){
			
			return t_n;
		} 
};

int main(){
	
	RRS obj[3];
	int i;
	
	for(i=0; i<=2; i++)
{
	obj[i].set();
	
}

   int train_number;
   
   cout<<"enter your train number : ";
   cin>>train_number;
   
   for(i=0; i<=2; i++){
   	
   	
   	if(train_number==obj[i].cheak_Trainnumber()){
   		
   		obj[i].get();
	   }
   }
   
   
   
   
   
   
   
   
   
   
   
   

}
