#include <iostream>
using namespace std;
class IndianState {
public:

    string name, capital;
    
    
    static int stateCount;

    static void printAllStates() {
        
        IndianState andhraPradesh;
        andhraPradesh.name = "Andhra Pradesh :";
        andhraPradesh.capital = "Amaravati";
        cout<<andhraPradesh.name<<andhraPradesh.capital<<endl;

        IndianState arunachalPradesh;
        arunachalPradesh.name = "Arunachal Pradesh : ";
        arunachalPradesh.capital = "Itanagar";
        cout<<arunachalPradesh.name<<arunachalPradesh.capital<<endl;
        
        IndianState Assam;
        Assam.name = "Assam : ";
        Assam.capital = "Dispur";
        cout<<Assam.name<<Assam.capital<<endl;
        
        IndianState Bihar;
        Bihar.name = "Bihar : ";
        Bihar.capital = "Patna";
        cout<<Bihar.name<<Bihar.capital<<endl;
         
        IndianState Chhattisgarh;
        Chhattisgarh.name = "Chhattisgarh : ";
        Chhattisgarh.capital = "Raipur";
        cout<<Chhattisgarh.name<<Chhattisgarh.capital<<endl;

        IndianState Goa;
        Goa.name = "Goa : ";
        Goa.capital = "Panaji";
        cout<<Goa.name<<Goa.capital<<endl;
        
        IndianState Gujarat;
        Assam.name = "Gujarat : ";
        Gujarat.capital = "Gandhinagar";
        cout<<Gujarat.name<<Gujarat.capital<<endl;
        
        IndianState Haryana;
        Haryana.name = "Haryana : ";
        Haryana.capital = "Chandigarh";
        cout<<Haryana.name<<Haryana.capital<<endl;
        
        IndianState Himachal_Pradesh;
        Himachal_Pradesh.name = "Himachal Pradesh : ";
        Himachal_Pradesh.capital = "Shimla";
        cout<<Himachal_Pradesh.name<<Himachal_Pradesh.capital<<endl;
        
        IndianState Jharkhand;
        Jharkhand.name = "Jharkhand : ";
        Jharkhand.capital = "Ranchi";
        cout<<Jharkhand.name<<Jharkhand.capital<<endl;

        IndianState Karnataka;
        Karnataka.name = "Karnataka : ";
        Karnataka.capital = "Bengaluru";
        cout<<Karnataka.name<<Karnataka.capital<<endl;

    }
};

int IndianState::stateCount = 28; 

int main() {
    IndianState::printAllStates();
    return 0;
}

