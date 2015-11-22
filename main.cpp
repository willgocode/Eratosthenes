#include <iostream>

using namespace std;

bool isPrime(int number){
	if(number < 2)
		return false;
	if(number = 2)
		return true;
	if(number % 2 == 0)
		return false;
	if(number % 3 == 0)
		return false;
	if(number % 5 == 0)
		return false;
	if(number % 7 == 0)
		return false;
	return true;
}
int main(){
	int maximum = 0;
	cout << "Enter a max number to find primes till: ";
	cin >> maximum;

	return 0;
}
