#include <iostream>

using namespace std;

int main(){

int number = 42;
int guess;

cout << "What number am I thinking of?" << endl;
cin >> guess;

if(guess == number){
cout << "Nice job you guessed it correctly!" << endl;
}else{
cout << "Nice try but you lose!" << endl;
}

}
