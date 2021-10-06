#include "Classroll.h"


// client code
// By: Gianluca Venditti 
//Date: October 1st, 2021

int main()
{
	ClassRoll students("student.dat", 10);

	cout << students.getNoStudents() << endl; 

	system("pause");
}