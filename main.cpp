#include<iostream>

using namespace std;


class Stos
{
public:
	// If STOS is FULL func. return true 
	bool isStosFull(void) {
		if (index == 9)  return true; else return false;
	}

	// If STOS is EMPTY func. return true 
	bool isStosEmpty(void) {
		if (index == -1)  return true; else return false;
	}

	// Add the number in STOS
	void addInStos(int number) {
		if (!isStosFull()) {
			container[++index] = number;
			cout << "Success!" << endl;
		}
		else cout << "Stos is full" << endl;
	}

	// Take the number from stos
	int takeFromStos() {
		if (!isStosEmpty()) return container[index--]; else cout << "Stos is empty" << endl; return false;
	}

private:
	int container[10];
	int index = -1;
};



//_________________________MAIN_______________________
int main() {

	Stos stos;

	cout << stos.isStosFull() << endl;
	cout << stos.isStosEmpty() << endl;

	stos.addInStos(5);

	cout << stos.takeFromStos() << endl;


	return 0;
}