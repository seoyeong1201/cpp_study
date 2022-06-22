//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_NORMALPATIENT_H
#define HOSPITALMANAGEMENT_NORMALPATIENT_H

#include <iostream>
#include <string>
#include "Patient.h"

class NormalPatient : public Patient
{
public:
    string patientState;
    NormalPatient() : patientState("normal"){};
    ~NormalPatient(){};
    virtual string getState() const;
    void showPatientInfo() const;
};


#endif //HOSPITALMANAGEMENT_NORMALPATIENT_H
