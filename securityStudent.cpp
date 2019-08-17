#include <iostream>
#include <string>
#include "securityStudent.h"
#include "student.h"
using namespace std;


SecurityStudent::SecurityStudent() :Student()
{
	degreeType = SECURITY;
}
SecurityStudent::SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType)
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = SECURITY;
}
SecurityStudent::~SecurityStudent()
{
	Student::~Student();
}
Degree SecurityStudent::GetDegreeProgram() {
	return SECURITY;
}
void SecurityStudent::Print() {
	this->Student::Print();
	cout << "SECURITY" << endl;
}
