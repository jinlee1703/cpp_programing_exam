#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	int arr[5] = { 0 };
	
	srand(time(NULL));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		
		arr[i] = rand() % 100;
		cout << arr[i] << endl;
	}

	return 0;
}