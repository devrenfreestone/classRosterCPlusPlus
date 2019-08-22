#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "degree.h"
using namespace std;
/*
Create the base class Student in the files student.h and student.cpp, which includes each  of the following variables :
•   degree types (populated only by subclasses)
*/

class Student
{
	public:

		const static int numDaysArraySize = 3;
		int i = 0;

		//Mutators
		void SetStudentId(string studentId);
		void SetFirstName(string firstName);
		void SetLastName(string lastName);
		void SetEmailAddress(string emailAddress);
		void SetAge(int age);
		void SetNumDaysToCompleteEachCourse(int course[]);
		void SetDegreeType(Degree degreeType);

		//Accessors
		string GetStudentId();
		string GetFirstName();
		string GetLastName();
		string GetEmailAddress();
		int GetAge();
		int* GetNumDaysToCompleteEachCourse();

		//Constructors and Destructors
		Student();
		Student(string studentId, string firstName, string lastName, string emailAddress, int age, int course[]);
		~Student();

		//Virtual

		virtual void Print() = 0;
		virtual Degree GetDegreeType() = 0;

	protected:
		string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age = 0;
		int numDaysToCompleteEachCourse[numDaysArraySize];
		Degree degreeType;
};


#endif