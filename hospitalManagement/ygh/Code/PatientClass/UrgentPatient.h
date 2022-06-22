//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_URGENTPATIENT_H
#define HOSPITALMANAGEMENT_URGENTPATIENT_H

#include <iostream>
#include <string>
#include "Patient.h"

class UrgentPatient : public Patient
{
private:
    string patientState;
public:
    UrgentPatient():patientState("urgent"){};
    ~UrgentPatient(){}
    virtual string getState() const;
    virtual void showPatientInfo() const;
};

#endif //HOSPITALMANAGEMENT_URGENTPATIENT_H
