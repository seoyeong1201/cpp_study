//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_ABSTRACTPATIENT_H
#define HOSPITALMANAGEMENT_ABSTRACTPATIENT_H

#include <iostream>
#include <string>
using namespace std;

class abstractPatient {
//Abstract class
public:
    /** SETTER **/
    virtual void setPatientInfo() = 0;
    //virtual void setName() = 0;
    virtual void setFirstName() = 0;
    virtual void setLastName() = 0;
    virtual void setMobileNumber() = 0;
    virtual void setBloodGroup() = 0;
    virtual void setGender() = 0;
    virtual void setAge() = 0;
    /** GETTER **/
    virtual string getName() const = 0;
    virtual string getMobileNumber() const = 0;
    virtual string getBloodGroup() const = 0;
    virtual char getGender()const = 0;
    virtual int getAge()const = 0;
};


#endif //HOSPITALMANAGEMENT_ABSTRACTPATIENT_H
