#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Specification file for Lab 3 Week 4
// By: Gianluca Venditti 
//Date: October 1st, 2021

const int SIZE = 25;

struct StudentRec
{
	string studentName;
	int assignmentTotal;
	int testTotal;
	char letterGrade;
};


class ClassRoll
{
public:
	void showGrade(string/*students grade*/) const;
	int getNoStudents() { return noStudents; };
	string getCourseName() { return courseName; }; 
	void changeGrade(string /*student name*/, char /*student grade*/);
	void writeStudents(ostream& /*output stream*/) const;
	ClassRoll(string/*name*/, int /*noStudents*/); 

private:
	string courseName;
	int maxStudents;
	int noStudents;
	StudentRec students[SIZE]; // able to access student rec variables, as defined in the class ClassRoll class.
	int searchStudent(string/*student name*/) const;
};