#include "Student.h"
#include <string>
#include <math.h>
#include <iostream>

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
    // Remove 'return' from this line
    cout << "Student Info: \n"; 
    cout << "Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Year Level: " << yearlevel << endl;
}
 

bool Student::isSenior()  {
    return yearlevel >= 4; // Returns true if 4 or higher
}

int Student::yearsUntilGraduation() {
    int remaining = 4 - yearlevel;
    return (remaining < 0) ? 0 : remaining; // Prevents negative years
}

