#include <iostream>
#include <string>
#include "softwareStudent.h"
#include "student.h"
using namespace std;


SoftwareStudent::SoftwareStudent() :Student()
{
	degreeType = SOFTWARE;
}
SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType)
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = SOFTWARE;
}
SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
}
Degree SoftwareStudent::GetDegreeProgram() {
	return SOFTWARE;
}
void SoftwareStudent::Print() {
	this->Student::Print();
	cout << "SOFTWARE" << endl;
}
