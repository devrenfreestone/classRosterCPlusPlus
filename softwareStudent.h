#pragma once
#include <string>
#include "student.h"
using namespace std;

class  SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType);
	~SoftwareStudent();

	Degree GetDegreeProgram();
	void Print();

private:

};




