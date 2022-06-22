//
// Created by ongDD on 2022/06/01.
//

#ifndef HOSPITALMANAGEMENT_CLINIC_H
#define HOSPITALMANAGEMENT_CLINIC_H

#include "../LinkedList/LinkedList.h"
#include "../PatientClass/PatientClassHeaders.h"
#include "../printer/printer.h"

class Clinic {
protected:
    string clinicName;
    LinkedList* patientList;
    Printer* printer;
public:
    virtual void addNormalPatient(Patient*);
    virtual void addCriticallyIllPatient(Patient*);
    virtual void displayList();
    //virtual int getPatientNum();
    virtual void removePatient();
    virtual void clinicHandler();
};


class GeneralClinic : public Clinic
{
public:
    GeneralClinic();
};



class HeartClinic : public Clinic
{
public:
    HeartClinic();
};


class LungClinic : public Clinic
{
public:
    LungClinic();
};


class PlasticClinic : public Clinic
{
public:
    PlasticClinic();
};

#endif //HOSPITALMANAGEMENT_CLINIC_H
