// cat2Question4i.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//declaration of global varaibles

int count1;
float sum1, average;
//function to get input on the total number of students
int countArr() {

	cout << "Enter Number of Students\n";
	cin >> count1;


	return count1;
}

//function get the scores and to calculate the sum of the students entered
int sumArr()
{
	int i, inputArray[7]{}, count;
	count = countArr();

	cout << "Please enter the grades of the " << count << " students\n";


	for (i = 0; i < count; i++) {
		cout << "Student no." << i + 1 << endl;
		cin >> inputArray[i];
	}

	sum1 = 0;
	// Find sum of all array elements
	for (i = 0; i < count; i++) {
		sum1 += inputArray[i];

	}

	return sum1;
}
//function to calculate the class average
float markAverage()
{
	//calling the summation function into the average function
	sumArr();
	average = sum1 / count1;

	return average;
}

int main() {
	//calling the average into the main
	markAverage();
	//giving output to the user
	cout << "\nSum = " << sum1 << "\n";
	cout << "\nAverage = " << average << "\n\n";
}