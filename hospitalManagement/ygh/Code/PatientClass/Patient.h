//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_PATIENT_H
#define HOSPITALMANAGEMENT_PATIENT_H

#include "abstractPatient.h"

class Patient {
private:
    void setFirstName();
    void setLastName();
    void setPatientInfo();
    void setName();
    void setMobileNumber();
    void setBloodGroup();
    void setGender();
    void setAge();

protected:
    string firstName, lastName, mobileNumber, bloodGroup;
    char gender;
    int age;

public:
    /** GETTER **/
    Patient();
    virtual string getName() const;
    virtual string getMobileNumber() const;
    virtual string getBloodGroup() const;
    virtual char getGender() const;
    virtual int getAge() const;
    virtual void showPatientInfo() const;
};


#endif //HOSPITALMANAGEMENT_PATIENT_H


