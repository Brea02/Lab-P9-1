// Lab Problem P9-1
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	
	const int CAPACITY = 10;
	int randInt[CAPACITY];
	int current_size = 0;

	//making array
	while (current_size < CAPACITY) {
		randInt[current_size] = rand() % 9000 + 1000;
		current_size++;
	}
	//display array
	cout << "The random integers: ";
	for (int i = 0; i < current_size; i++) {
		cout << randInt[i] << " ";
	}
	//even index
	cout << endl;
	cout << "Even indices: ";
	for (int i = 0; i < current_size; i++) {
		cout << randInt[i] << " ";
		i++;
	}
	//even values
	cout << endl;
	cout << "Even values: ";
	for (int i = 0; i < current_size; i++) {
		int evens = randInt[i] % 2;
		if (evens == 0) {
			cout << randInt[i] << " ";
		}
	}
	//reverse order
	cout << endl;
	cout << "Reversed order: ";
	for (int i = 9; i >= 0; i--) {
		cout << randInt[i] << " ";
	}


}

