#pragma once
#include <string>
#include "student.h"
using namespace std;

class  NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType);
	~ NetworkStudent();

	Degree GetDegreeType();
	void Print();

private:
	Degree degreeType;
};




