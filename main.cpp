#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int number);
void Eratosthenes(int maximum);

int main(){
	int maximum = 0;
	cout << "Enter a max number to find primes till: ";
	cin >> maximum;
	Eratosthenes(maximum);

	return 0;
}

bool isPrime(int number){
	if(number < 2)
		return false;
	if(number == 2 || number == 3 || number == 5 || number == 7)
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

void Eratosthenes(int maximum){
	bool tempArr[maximum];						//declares an array of bools, default value is 0
	for(int i = 2; i < sqrt(maximum); i++){		//begin at 2, while < sqrt(maximum), perform loop
		if(isPrime(i)){							//check if current i isPrime cout if yes
			cout << i << " " ;				
			for(int j = i * i; j <= maximum; j += i){	//check multiples of i by adding i 
				tempArr[j] = 1;					//mark with 1
			}
		}
	}

	for(int i = sqrt(maximum); i < maximum; i++){
		if(isPrime(i))							//checks if number is prime and prints
			cout << i << " ";
	}
	cout << endl;
}
