#pragma once
#include <string>
#include "degree.h"
#include "student.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "networkStudent.h"
using namespace std;


/*
Create a Roster class (roster.cpp) by doing the following :
	a.Apply pointer operations when parsing each  set of data identified in the studentData table.
	b.Add each student object to classRosterArray.
*/


class Roster
{
	public:
		Student** classRosterArray;
		int lastIndex;
		int capacity;

		Roster();
		Roster(int capacity);
		~Roster();

		Student* getStudentAt(int index);
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeprogram);
		void remove(string studentID);
		void printAll();
		void printDaysInCourse(string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);

	private:

};

Roster::Roster()
{
}

Roster::~Roster()
{
}