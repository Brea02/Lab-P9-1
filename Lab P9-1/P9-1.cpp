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

	while (current_size < CAPACITY) {
		randInt[current_size] = rand() % 9000 + 1000;
		current_size++;
	}

	cout << "The random integers: ";
	for (int i = 0; i < current_size; i++) {
		cout << randInt[i] << " ";
	}


	//int randInt = rand();
	//int integers[] = { randInt, randInt, randInt, randInt, randInt, randInt, randInt, randInt, randInt, randInt };
}

