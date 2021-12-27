#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Finding percentage of a number
 

// Global Variables

const double fortyPercent = 40;
const double sixtyPercent = 60;
const double seventyPercent = 70;
const double hundredPercent = 100;
double forty, sixty, seventy, hundred;
double totalSum = 0, sum = 0;
int counter = 0;

double classScore(){

	cout <<"Class Score: ";
	cin >> totalSum;
	cout <<"Enter Your Class score :" << endl;
	
// 	Get Scores
	int input;
	while(cin >> input) {
		sum += input;
		counter++;
	}

	if(sum > totalSum){
		cout <<"Invalid Score\n";
		sum = -1;
		return sum;
	}
	else {
//	Compute Percentage (%) of class Score 
		hundred = (sum / totalSum) * hundredPercent; 
		seventy = (sum / totalSum) * seventyPercent;
		sixty= (sum / totalSum) * sixtyPercent;
		forty = (sum / totalSum) * fortyPercent;

		return sum;
	}

}

double examPercentage(){

	double examScore, exam = 0;
	unsigned int ex;
	
//	Examination Score and percentage
	cout <<"Exam Score: ";
	cin >> examScore; 

	printf("Over (40, 60, 70 or 100): ", examScore);
	cin >> ex;

	switch(ex){
		case 40:
			exam = (examScore / ex) * fortyPercent;
			break;
		case 60:
			exam = (examScore / ex) * sixtyPercent;
			break;
		case 70:
			exam = (examScore / ex) * seventyPercent;
			break;
		case 100:
			exam = (examScore / ex) * hundredPercent;
			break;
		default:
			cout <<"\nInvalid Exam Score" << endl;
	}

//	printf("Examination Score: %.1f = %.1f", examScore, exam);
	cout << endl;

	return exam;
 }

// Main Program
int main(int argc, char* argv[]) {
	
//	Examination Percentage
	double exam;
	exam = examPercentage();

//	Class Score	
	double score;
	score = classScore();
	if(score < 0) 
		return 1;
	
// 	Average of Class Score
	double average;
	average = sum /counter;	

//	Print Percentage of Class score
//	printf("Overall Score: %.1f ", totalSum);

	cout << endl;
	printf("CA = %.1f / %.1f ", sum, totalSum);
	printf("Average Score: ", average);
	cout << endl;
	printf("\t100% : %.2f%%\n\t70%  : %.2f%%\n\t60%  : %.2f%%\n\t40%  : %.2f%%\n", hundred, seventy, sixty, forty);
	cout << endl;

	printf("Class Score: %.1f", forty);
	cout << endl;
	printf("Exam Score: %.1f%%",exam);
	cout << endl;

	return 0;
}
