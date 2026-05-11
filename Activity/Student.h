#ifndef STUDNET_H
#define STUDENT_H
#include <string>

using namespace std;
class Student{
	private:
		string name;
		string studentID;
		int yearlevel;
		
	public:
		 Student();
		 Student (string n, string ID, int ylvl);
		 
		void setName(string n);
		void setStudentID(string ID);
		void setYearLevel(int ylvl);
		
		string getName();
		string getStudentID();
		int getYearLevel();
		
		void displayInfo();
		bool isSenior();
		int yearsUntilGraduation();
		
		
	
};

#endif
