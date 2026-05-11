#include "Student.h"
#include <string>
#include <math.h>

using namespace std;
Student::Student(){
	name ="None";
	studentID="none";
	yearlevel=1;
}

Student::Student(string n, string ID, int ylvl){
	name=n;
	studentID=ID;
	yearlevel=ylvl;
}


void Student::setName(string n) {
    name = n;
}

void Student::setStudentID(string ID){
	studentID=ID;
}

void Student::setYearLevel(int ylvl){
	yearlevel=ylvl;
}

string Student::getName(){
	return name;
}

string Student::getStudentID(){
	return studentID;
}

int Student::getYearLevel(){
	return yearlevel;
}


void Student::displayInfo() {
    cout << "Student Info: \n";
    
    // Use the member functions directly with parentheses
    cout << "Name: " << getName() << endl;
    cout << "Student ID: " << getStudentID() << endl;
    cout << "Year Level: " << getYearlevel() << endl;
    
    // If you prefer accessing member variables directly (assuming they exist):
    // cout << "Name: " << name << endl;
}

bool Student::isSenior() {
    if (ylvl == 4) {
        cout << "This student is a Senior" << endl;
        return true;  
    }
    else {
        cout << "This student is not yet a senior" << endl;
        return false; 
    }
}


int Student::yearsUntilGraduation() {
    return 4 - ylvl;
}


