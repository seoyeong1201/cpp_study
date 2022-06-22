#include "NormalPatient.h"


void NormalPatient::showPatientInfo() const{
    Patient::showPatientInfo();
    cout << "Patient state : " << getState() << endl;
}

string NormalPatient::getState() const {return this->patientState;}