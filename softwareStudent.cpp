#include <iostream>
#include <string>
#include <iomanip>
#include "softwareStudent.h"
#include "student.h"
using namespace std;


SoftwareStudent::SoftwareStudent() : Student()
{
	degreeType = SOFTWARE;
}
SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree d)
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = d;
}
SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
}
Degree SoftwareStudent::GetDegreeType() {
	return degreeType;
}
void SoftwareStudent::Print() {
	cout << GetStudentId() << '\t';
	cout << "First Name: " << GetFirstName() << '\t';
	cout << "Last Name: " << GetLastName() << '\t';
	cout << "Email Address: " << GetEmailAddress() << '\t';
	cout << "Age: " << GetAge() << '\t';
	cout << GetNumDaysToCompleteEachCourse()[0] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[1] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[2] << '\t';
	cout << "Degree Program: " << degreeTypeStrings[GetDegreeType()] << endl;
}