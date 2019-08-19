#include <iostream>
#include "roster.h"
#include "student.h"
using namespace std;
/*
Create a Roster class (roster.cpp) by doing the following :
1.  Create an array of pointers, classRosterArray, to hold the data provided in the studentData table.
2.  Create a student object for each  student in the data table by using the subclasses NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.
	a.Apply pointer operations when parsing each  set of data identified in the studentData table.
	b.Add each student object to classRosterArray.
3.  Define the following functions :
	a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, < degree program >) that sets the instance variables from part D1 and updates the roster.
	b.  public void remove(string studentID) that removes students from the roster by student ID.If the student ID does not exist, the function prints an error message indicating that the student was not found.
	c.  public void printAll() that prints a complete tab - separated list of student data using accessor functions with the provided format : 1[tab] First Name : John[tab] Last Name : Smith[tab] Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : Security.The printAll() function should loop through all  the students in classRosterArrayand call the print() function for each student.
	d.  public void printDaysInCourse(string studentID) that correctly prints a student’s average number of days in the three courses.The student is identified by the studentID parameter.
	e.  public void printInvalidEmails() that verifies student email addressesand displays all invalid email addresses to the user
Note : A valid email should include an at sign('@') and period('.') and should not include a space(' ').
	f.  public void printByDegreeProgram(int degreeProgram) that prints out student information for a degree program specified by an enumerated type
*/

//constructors
Roster::Roster() {
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;
}
Roster::Roster(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Student* [capacity];
}

void Roster::parse(string row) {
	if (lastIndex < capacity) {
		lastIndex++;
		Degree degreeType;

		//Set right-hand side index (rhsi) and left-hand side index (lhsi) for string parsing
		int rhsi = row.find(",");
		int lhsi = 0;

		//Parse Student ID
		string studentID = row.substr(lhsi, rhsi);

		//Parse First Name
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		string firstName = row.substr(lhsi, rhsi);

		//Parse Last Name
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		string lastName = row.substr(lhsi, rhsi);

		//Parse Email Address
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		string emailAddress = row.substr(lhsi, rhsi);

		//Parse Age, convert to int
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		int age = stoi(row.substr(lhsi, rhsi));

		//Parse Each Days In Course, convert to int
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		int daysInCourse1 = stoi(row.substr(lhsi, rhsi));

		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		int daysInCourse2 = stoi(row.substr(lhsi, rhsi));

		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		int daysInCourse3 = stoi(row.substr(lhsi, rhsi));

		//Parse Degree Type
		lhsi = rhsi + 1;
		rhsi = row.find(",", lhsi);
		string rowDegreeType = row.substr(lhsi, rhsi);
		if (rowDegreeType == "NETWORK") {
			degreeType = NETWORK;
		}
		else if (rowDegreeType == "SECURITY") {
			degreeType = SECURITY;
		}
		else if (rowDegreeType == "SOFTWARE") {
			degreeType = SOFTWARE;
		}
		else {
			cout << "Invalid Degree Type" << endl;
		}

		add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeType);
	}
}
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType) {
	int course[Student::numDaysArraySize];
	course[0] = daysInCourse1;
	course[1] = daysInCourse2;
	course[2] = daysInCourse3;
	if (degreeType == NETWORK) classRosterArray[lastIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, course, degreeType);
	else if (degreeType == SECURITY) classRosterArray[lastIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, course, degreeType);
	else if (degreeType == SOFTWARE) classRosterArray[lastIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, course, degreeType);
	else cout << "Invalid Degree Type" << endl;
}

bool Roster::remove(string studentID) {
	bool found = false;
	for (int i = 0; i <= lastIndex; i++) {
		if (this->classRosterArray[i]->GetStudentId() == studentID) {
			found = true;
			delete this->classRosterArray[i];
			this->classRosterArray[i] = this->classRosterArray[lastIndex];
			lastIndex--;
		}
	}
	return found;
}
void Roster::printAll() {
	for (int i = 0; i <= this->lastIndex; i++) (this->classRosterArray)[i]->Print();
}
void Roster::printDaysInCourse(string studentID, int numDaysArray) {
	bool found = false;
	for (int i = 0; i <= lastIndex; i++) {
		if (this->classRosterArray[i]->GetStudentId() == studentID) {
			found = true;
			int* days = classRosterArray[i]->GetNumDaysToCompleteEachCourse();
			for (int i = 0; i <= numDaysArray;) {
				numDaysSum = numDaysSum + days[i];
			}
			numDaysAverage = numDaysSum / numDaysArray;
			cout << "Student's average number of days in each course is " << numDaysAverage << endl;
		}
	}
	if (!found) cout << "Student not found" << endl;
}
void Roster::printInvalidEmails() {

}
void Roster::printByDegreeProgram(int degreeProgram) {

}

int main() {
	int numStudents = 5;

	const string studentData[5] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Devren,Freestone,dfreest@wgu.edu,32,14,21,28,SOFTWARE" };

	Roster * roster = new Roster(numStudents);

	for (int i = 0; i < numStudents; i++) {
		roster->parse(studentData[i]);


	}
}
