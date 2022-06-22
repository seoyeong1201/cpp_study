#include <iostream>
#include "Clinic/Clinic.h"
#include "printer/printer.h"
using namespace std;

int main() {
    GeneralClinic generalClinic;
    HeartClinic heartClinic;
    LungClinic lungClinic;
    PlasticClinic plasticClinic;
    Printer* printer;

    int inputNum;

    do {
        printer->printMainMenu();
        cin >> inputNum;
        if(inputNum == 5)
            printer->Exit();
        else
        {
            switch (inputNum) {
                case 1: generalClinic.clinicHandler(); break;
                case 2: heartClinic.clinicHandler(); break;
                case 3: lungClinic.clinicHandler(); break;
                case 4: plasticClinic.clinicHandler(); break;
            }
        }

    }while(inputNum != 5);
}

