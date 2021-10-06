#include "Classroll.h"
#include <algorithm>

// Implemnetation file
// By: Gianluca Venditti 
//Date: October 1st, 2021

ClassRoll::ClassRoll(string initialName, int initialMaxStudents)
{


	//noStudents = std::max(0, std::min(SIZE, initialNoStudents));
	// returns the biggest and smallest number 
	//std::min(SIZE, initialNoStudents) ensures initial number of students is less than size
	
	if (initialMaxStudents > SIZE || initialMaxStudents < 0)
	{
		maxStudents = 25; // setting a default value

		cout << "Error, wrong input"; 
	}
	else
	{
		maxStudents = initialMaxStudents; 
	}
		ifstream fin(initialName);
		if (!fin.is_open())
		{
			cout << "error opening student.dat file ";
			system("pause");
			exit(-1);
		}
		
		int length;
		for (length = 0; length < maxStudents; length++)
		{
			
			getline(fin, students[length].studentName);
			if (fin.eof())
				break;
			fin >> students[length].assignmentTotal;
			fin >> students[length].testTotal;
			fin >> students[length].letterGrade;
			fin.ignore(80, '\n');
		}
		noStudents = length; 

		fin.close();
}
