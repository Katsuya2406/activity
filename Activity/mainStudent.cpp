#include "Student.h"
#include <string>
#include <iostream>

using namespace std;



int main() {
    Student s1;

    // Use "set" functions to assign values
    s1.setName("Nate Javier");
    s1.setStudentID("2023-04567");
    s1.setYearLevel(3);

    // Added missing semicolons below
    s1.displayInfo();
    s1.isSenior();

    // To see the years until graduation, you must print the return value
    cout << "Years until graduation: " << s1.yearsUntilGraduation() << endl;

    return 0;
}
