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
        
        IndianState Kerala;
        Kerala.name = "Kerala : ";
        Kerala.capital = "Thiruvananthapuram";
        cout<<Kerala.name<<Kerala.capital<<endl;
        
        IndianState Madhya_Pradesh;
        Madhya_Pradesh.name = "Madhya_Pradesh : ";
        Madhya_Pradesh.capital = "Bhopal";
        cout<<Madhya_Pradesh.name<<Madhya_Pradesh.capital<<endl;
        
        IndianState Maharashtra;
        Maharashtra.name = "Maharashtra : ";
        Maharashtra.capital = "mumbai";
        cout<<Maharashtra.name<<Maharashtra.capital<<endl;
            
        IndianState Manipur;
        Manipur.name = "Karnataka : ";
        Manipur.capital = "Imphal";
        cout<<Manipur.name<<Manipur.capital<<endl;

        IndianState Meghalaya;
        Meghalaya.name = "Meghalaya : ";
        Meghalaya.capital = "Shillong";
        cout<<Meghalaya.name<<Meghalaya.capital<<endl;
    
        IndianState Mizoram;
        Mizoram.name = "Mizoram : ";
        Mizoram.capital = "Mizoram";
        cout<<Mizoram.name<<Mizoram.capital<<endl;
    
        IndianState karnataka;
        Karnataka.name = "Karnataka : ";
        Karnataka.capital = "Shillong";
        cout<<Karnataka.name<<Karnataka.capital<<endl;
    
        IndianState Nagaland;
        Nagaland.name = "Nagaland : ";
        Nagaland.capital = "Aizawl";
        cout<<Nagaland.name<<Nagaland.capital<<endl;
    
        IndianState Odisha;
        Odisha.name = "Odisha : ";
        Odisha.capital = "Bhubaneswar";
        cout<<Odisha.name<<Odisha.capital<<endl;
        
        IndianState Punjab;
        Punjab.name = "Punjab : ";
        Punjab.capital = "Chandigarh";
        cout<<Punjab.name<<Punjab.capital<<endl;
    
        IndianState odisha;
        Odisha.name = "Odisha : ";
        Odisha.capital = "Bhubaneswar";
        cout<<Odisha.name<<Odisha.capital<<endl;
    
        IndianState Rajasthan;
        Rajasthan.name = "Rajasthan : ";
        Rajasthan.capital ="jaipur";
        cout<<Rajasthan.name<<Rajasthan.capital<<endl;
    
        IndianState Sikkim;
        Sikkim.name = "Sikkim : ";
        Sikkim.capital = "Gangtok";
        cout<<Sikkim.name<<Sikkim.capital<<endl;
    
        IndianState Tamil_Nadu;
        Tamil_Nadu.name = "Tamil_Nadu : ";
        Tamil_Nadu.capital = "Chennai";
        cout<<Tamil_Nadu.name<<Tamil_Nadu.capital<<endl;
    
        IndianState Telangana;
        Telangana.name = "Telangana : ";
        Telangana.capital = "Hyderabad";
        cout<<Telangana.name<<Telangana.capital<<endl;
        
        IndianState Tripura;
        Tripura.name = "Tripura : ";
        Tripura.capital = "Agartala";
        cout<<Tripura.name<<Tripura.capital<<endl;
        
        IndianState Uttar_Pradesh;
        Uttar_Pradesh.name = "Uttar_Pradesh : ";
        Uttar_Pradesh.capital = "Lucknow";
        cout<<Uttar_Pradesh.name<<Uttar_Pradesh.capital<<endl;
        
        IndianState Uttarakhand;
        Uttarakhand.name = "Uttarakhand : ";
        Uttarakhand.capital = "Dehradun (Winter),Gairsain (Summer)";
        cout<<Uttarakhand.name<<Uttarakhand.capital<<endl;
    
        IndianState West_Bengal;
        West_Bengal.name = "West_Bengal : ";
        West_Bengal.capital = "Kolkata";
        cout<<West_Bengal.name<<West_Bengal.capital<<endl;
    
    }
};

int IndianState::stateCount = 28; 

int main() {
    IndianState::printAllStates();
    return 0;
}
