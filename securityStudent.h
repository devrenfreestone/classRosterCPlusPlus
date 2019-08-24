#pragma once
#pragma once
#include <string>
#include "student.h"
using namespace std;

class  SecurityStudent : public Student
{
public:
	SecurityStudent();
	SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType);
	~SecurityStudent();

	Degree GetDegreeType();
	void Print();

private:
	Degree degreeType;
};




