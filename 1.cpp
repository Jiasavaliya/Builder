
#include<iostream>
int main(){
	
	using namespace std;
     char e[22],b[55],c[66],d[66];
    

	cout<<"-: Bank managment system :-"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"-: Designed n Programed by :-"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"\tjiya savaliya"<<endl<<endl<<endl;
	
	cout<<"\t-: Trainer :-"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"Shivam jadav"<<endl;
	cout<<"press any key n enter to continue.."<<endl<<endl<<endl;
    
    char infor;
	cout<<"-: press A to long in as aministrator or S to log in as staff"<<endl;
    cin>>infor;
    
	switch(infor){
	
    case 'S' : cout<<"\t-: welcome as staff";
    break;
    default : cout<<"no";
    
     
    cout<<"Enter the name of staff :"<<endl;
    cin>>e;
    cout<<"Enter the account number of staff :"<<endl;
    cin>>b;
    cout<<"Enter the phone number of staff :"<<endl;
    cin>>c;
    cout<<"Enter the email of staff :"<<endl;
    cin>>d;
}
    cout<<endl<<"-------------------------"<<endl;
    cout<<"Name : khushi"<<endl;      
    cout<<"Account no : 44477"<<endl;     
    cout<<"phone no : 5445678655"<<endl;     
    cout<<"email : kbelaiya010@gmail.com"<<endl;  
	cout<<"-------------------------"<<endl;   
	
	int money;
	
	cout<<"press [1] to Deposite the money"<<endl<<"press [2] toTransfer the money"<<endl<<"press [3] toTransfer the money"<<endl<<endl;
    cin>>money;
	
	
	switch(money){
		
		
		case 1 : cout<<"Deposite the money :";
		break;
		case 2 : cout<<"Transfer the money :";
		break;
	    case 3 : cout<<endl<<"Withdraw the money : 20000"<<endl;
		break;
}
		cout<<"Your actual account is : 20000"<<endl;
        cout<<"congrates your amount has withdraw successfully"<<endl;
	    cout<<"Your account balance : 180000"<<endl;
        
	    
	}
