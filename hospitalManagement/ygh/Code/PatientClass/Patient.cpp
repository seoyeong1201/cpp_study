#include "Patient.h"
void Patient::setPatientInfo()
{
    //setName();
    setFirstName();
    setLastName();
    setAge();
    setMobileNumber();
    setGender();
    setBloodGroup();
    cout<<endl<<endl;
}
/*
void Patient::setName()
{
    cout << "First name : ";
    getline(cin, this->firstName);
    cout <<endl;
    cout << "Last name : ";
    getline(cin, this->lastName);
}
 */

void Patient::setFirstName()
{
    cout << "First name : ";
    string FirstName;
    cin >> FirstName;
    firstName = FirstName;
    //getline(cin, this->firstName);
}
void Patient::setLastName()
{
    cout << "Last name : ";
    string LastName;
    cin >> LastName;
    lastName = LastName;
   // getline(cin, this->lastName);
}






void Patient::setMobileNumber()
{
    cout << "Mobile Number : ";
    getline(cin, this->mobileNumber);
}

void Patient::setBloodGroup()
{
    cout << "Blood Group [A/B/O/AB][+/-] : ";
    getline(cin, this->bloodGroup);
    cin.clear();
    cout << endl;
}

void Patient::setGender()
{
    char tempGender;
    cout << "gender [M/F] : ";
    cin >> tempGender;
    toupper(tempGender);
    //Exeption
    this -> gender = toupper(tempGender);
    cin.ignore();
}

void Patient::setAge()
{
    cout << "age : ";
    cin >> this->age;
    cin.ignore();
}

/** CONSTRUCTOR **/
Patient::Patient() {setPatientInfo();}
/** GETTER **/
void Patient::showPatientInfo() const
{
    cout << "Name : " << getName() << endl;
    cout << "Age : " << getMobileNumber() << endl;
    cout << "Mobile Number : " << getMobileNumber() << endl;
    cout << "Blood Group : " << getBloodGroup() << endl;
    cout << "Gender : " << getGender() << endl;
}
string Patient::getName() const {return this->lastName + this->firstName;}
string Patient::getMobileNumber() const {return this->mobileNumber;}
string Patient::getBloodGroup() const {return this->bloodGroup;}
char Patient::getGender() const {return this->gender;}
int Patient::getAge() const {return this->age;}

