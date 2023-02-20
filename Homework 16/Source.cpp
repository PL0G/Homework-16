#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	setlocale(LC_ALL, "Russian");

	//Task 1
	int sum = 0, counter = 0;
	double avg;
	const int size1 = 10;
	srand(time(NULL));
	int arr1[size1];
	std::cout << "Task 1.\nArray:\n";
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 101;
		std::cout << arr1[i] << " ";
		sum += arr1[i];
	}
	avg = (double)sum / size1;
	std::cout << "\nAverage of all the elements = " << avg << "\n";
	for (int i = 0; i < size1; i++)
		if (arr1[i] < avg)
			counter++;
	std::cout << "Number of elements that are lower than average: " << counter;

	//Task 2

	std::cout << "\nTask 2.\nArray ¹1\n";
	const int size2 = 5;
	int arr2_1[size2][size2], arr2_2[size2][size2];
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			arr2_1[i][j] = rand() % 10;
			std::cout << arr2_1[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << "\nArray ¹2 :\n";
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			arr2_2[i][j] = rand() % 10;
			std::cout << arr2_2[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << "\nSum of arrays :\n";
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			std::cout << arr2_1[i][j] + arr2_2[i][j] << "\t";
		}
		std::cout << '\n';
	}
	std::cout << "\n\n";

	//Task 3
	std::cout << "Task 3.\nEnter 6-digit number->";
	int n, m;
	std::cin >> n;
	const int size3 = 6;
	int arr3[size3];
	m = 100000;
	if (n > 99999 && n < 1000000) {
		for (int i = 0; i < size3; i++) {
			arr3[i] = n / m % 10;
			m /= 10;
			std::cout << arr3[i] << "  ";

		}std::cout << "\n";
	}
	else
		std::cout << "You entered not a 6-digit number!\n";
	return 0;
}