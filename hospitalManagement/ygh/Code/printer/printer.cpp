#include <iostream>
#include <string>
#include "printer.h"

using namespace std;

/** Screen Printer **/
Printer::Printer(string pName):printerName(pName){};

void Printer::printTitle()
{
    cout << "==================================" << endl;
    cout << "|-- HOSPITAL MANAGEMENT SYSTEM --|" << endl;
    cout << "==================================" << endl << endl;
}

void Printer::printMainMenu()
{
    system("clear");
    printTitle();

    cout << "1: GENERAL CLINIC" << endl;
    cout << "2: HEART CLINIC" << endl;
    cout << "3: LUNG CLINIC" << endl;
    cout << "4: PLASTIC SURGERY" << endl;
    cout << "5: Exit" << endl << endl;
    cout << "Please enter your choice : ";
}

void Printer::printClinicMenu()
{
    system("clear");
    printTitle();
    cout << printerName << endl << endl;

    cout <<"[1] Add normal patient" << endl;
    cout <<"[2] Add critically ill patient" << endl;
    cout <<"[3] Take patient to Doctor" << endl;
    cout <<"[4] Display list" << endl;
    cout <<"[5] Change department or exit" << endl;
    cout <<"Please enter your choice : ";
}

void Printer::Exit()
{
    system("clear");
    cout << "Thank you!" << endl;
}

/** Screen Printer End **/
