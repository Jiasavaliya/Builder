#include <iostream>
using namespace std;

class Student {
   private:
    char name[12];
    int rollNo;
    float marks;

   public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        students[i].getDetails();
    }

    
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
    }

    return 0;
}

