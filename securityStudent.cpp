#include <iostream>
#include <string>
#include <iomanip>
#include "securityStudent.h"
#include "student.h"
using namespace std;


SecurityStudent::SecurityStudent() :Student()
{
	degreeType = SECURITY;
}
SecurityStudent::SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree d)
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = d;
}
SecurityStudent::~SecurityStudent()
{
	Student::~Student();
}
Degree SecurityStudent::GetDegreeType() {
	return SECURITY;
}
void SecurityStudent::Print() {
	cout << GetStudentId() << '\t';
	cout << "First Name: " << GetFirstName() << '\t';
	cout << "Last Name: " << GetLastName() << '\t';
	cout << "Email Address: " << GetEmailAddress() << '\t';
	cout << "Age: " << GetAge() << '\t';
	cout << GetNumDaysToCompleteEachCourse()[0] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[1] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[2] << '\t';
	cout << "Degree Program: " << "SECURITY" << endl;
}