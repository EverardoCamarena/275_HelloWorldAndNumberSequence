/*
* Program will produce a sequence of numbers based on the following recursive relation: x/2 if x is even or 3x+1 if x is odd
* CECS 275 - Spring 2022
* @Everardo Camarena
* @Calvin Veith
* version 1.0.0
*/

#include <iostream>

using namespace std;

int main(){

	//declared an s counter variale to track the sequence of numbers
	int s = 1;

	//declared n variable which grabs input from user
	int n;
	cout << "n = ";
	cin >> n;

	//while loop that checks wether our number is even or odd
	while(n > 1){

		cout << n << ", ";
		//if number is even divide by 2
		if(n % 2 == 0){
			n = n / 2;
		}
		//number is odd so compute second equation, 3n+1
		else{
			n = 3 * n + 1;
		}
		//counter is increased keeping track of how many time we went though the loop
		s++;
	}
	//since the while loop doesnt take into account 1, we return a 1 once we hit it
	if(n == 1){
		cout << "1" << endl;
	}
	//displays how many numbers in the sequence
	cout << "There are " << s << " numbers" << endl;
	return 0;
}