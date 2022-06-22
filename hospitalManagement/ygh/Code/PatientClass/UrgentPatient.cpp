#include "UrgentPatient.h"

void UrgentPatient::showPatientInfo() const {
    Patient::showPatientInfo();
    cout << "Patient state : " << getState() << endl;
}

string UrgentPatient::getState() const { return patientState; }