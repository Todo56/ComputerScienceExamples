#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
int main(){
	struct StudentRecord {
		char name[20];
		char classId[2];
		char dateOfBirth[10];
		bool gender;
	};
	
	struct StudentRecord myStudent;
	strcpy(myStudent.name,  "Joe Biden");
	strcpy(myStudent.classId, "5A");
	strcpy(myStudent.dateOfBirth, "2010/03/21");
	myStudent.gender = true;

}
