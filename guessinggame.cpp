//Orrin Oliver
//Test for version

#include <iostream>

using namespace std;

int main(){

int number = 42;
int guess;
bool loop = true;
int count = 0;

cout << "What number am I thinking of?" << endl;
cin >> guess;


while(loop == true){
	if(guess == number){
	count++;
	cout << "Nice job you guessed it correctly! It took " << count << " guesses to get the same number." << endl;
	loop = false;
	}else if (guess < number){
	cout << "Your number is less than the number I am thinking of." << endl;
	count++;
	cin>>guess;
	}else if (guess > number){
	cout << "Your number is greater than the number I am thinking of." << endl;
	cin>>guess;
	count++;
	}
}

}
