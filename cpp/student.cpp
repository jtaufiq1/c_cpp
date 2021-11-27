#include <iostream>
using namespace std;

/* Student information sing structure
 *
 *
 */

#define D 7 // number of dimensions

struct student{

	unsigned id;
	unsigned indexNumber;
	string fname , lname;
	string courseName;
	int classScore;
	int examScore;
};

void getStudentData(student &st){

	cout <<"Student ID: ";
	cin >> st.id;
	cout <<"Index Number: ";
	cin >> st.indexNumber;

	cout <<"Full Name: ";
	scanf("%s", &st.courseName);
//	cin >> st.fname >> st.lname;

	printf("Course Name: ");
	scanf("%s",&st.courseName);
	//while(st.courseName != "."){
	//	cin >> st.courseName;
	//}

/* Get Class Score
	cout <<"Class Scores: Put a (.) after input\n";
	int sum = 0, counter = 0;

	while(cin >> st.classScore){

		sum += st.classScore;
		counter++;
	}

// Average of Class Score
	double average;
	average = sum / counter;
	st.classScore = average;
	
// Exam Score
	cout <<"Exam Score: ";
	cin >> st.examScore;
	*/
}


void showStudentInfo(student &st){

	cout <<"ID: " << st.id << endl
	     <<"Index Number: " << st.indexNumber << endl
	     <<"Full Name: " << st.fname  << " " << st.lname << endl
	     <<"Course Name: " << st.courseName << endl
	     <<"Class Score: " << st.classScore << endl
	     <<"Exam Score: " << st.examScore << endl
	     << endl;
	printf("Course Name: %d \n",st.courseName);
}

// Main 
int main(int argc, char* argv[]){

	// Accessing Members and assigning values
	student st1;
	
	getStudentData(st1);
	showStudentInfo(st1);
	return 0;
}
	
