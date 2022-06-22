//
// Created by ongDD on 2022/06/01.
//

#include "Clinic.h"

void Clinic::addNormalPatient(Patient* patient)
{
    patientList->add(patient);
}

void Clinic::addCriticallyIllPatient(Patient* patient)
{
    patientList->addFirst(patient);
}
void Clinic::displayList()
{
    if(!patientList->isEmpty()) {
        patientList->showAllElement();
    }
    else
        cout << "No patient to operate" << endl;
}

int Clinic::getPatientNum()
{
    return patientList->size();
}

void Clinic::removePatient()
{
    if(!patientList->isEmpty())
        patientList -> removeFirst();
    else
        cout << "No patient!" << endl;
}


void Clinic::clinicHandler()
{
    int inputNum;
    bool goBackMainMenu = false;
    do{
        printer->printClinicMenu();
        cin >> inputNum;

        if(inputNum == 5)
            goBackMainMenu = true;
        else{
            switch (inputNum) {
                case 1: // clear Screen 해도 될듯
                    system("clear");
                    addNormalPatient(new NormalPatient());
                    break;
                case 2:// clear Screen 해도 될듯
                    system("clear");
                    addCriticallyIllPatient(new UrgentPatient());
                    break;
                case 3:
                    removePatient();
                    break;
                case 4:
                    system("clear");
                    displayList();
                    break;
            }
        }
    } while(!goBackMainMenu);
}




/** GENERAL CLINIC **/
GeneralClinic::GeneralClinic()
{
    clinicName = "GENERAL CLINIC";
    patientList = new LinkedList();
    printer = new Printer(clinicName);
}

/** HEART CLINIC **/
HeartClinic::HeartClinic()
{
    clinicName = "HEART CLINIC";
    patientList = new LinkedList();
    printer = new Printer(clinicName);
}

/** LUNG CLINIC **/
LungClinic::LungClinic()
{
    clinicName = "LUNG CLINIC";
    patientList = new LinkedList();
    printer = new Printer(clinicName);
}


/** PLASTIC CLINIC **/
PlasticClinic::PlasticClinic()
{
    clinicName = "PLASTIC CLINIC";
    patientList = new LinkedList();
    printer = new Printer(clinicName);
}

