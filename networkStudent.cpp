#include <iostream>
#include <string>
#include "networkStudent.h"
#include "student.h"
using namespace std;


NetworkStudent::NetworkStudent():Student()
{
	degreeType = NETWORKING;
}
NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType) 
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = NETWORKING;
}
NetworkStudent::~NetworkStudent()
{
	Student::~Student();
}
Degree NetworkStudent::GetDegreeProgram() {
	return NETWORKING;
}
void NetworkStudent::Print() {
	this->Student::Print();
	cout << "NETWORKING" << endl;
}
