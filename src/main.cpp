#include <iostream>

using namespace std;

#define size(array, type) sizeof(array)/sizeof(type)

extern "C" int ArrayMaximum_(
	int array[], int length
);
extern "C" int ArrayMinimum_(
	int array[], int length
);

static void PrintResult(
	const char* msg,
	int maximum, int minimum
) {
	cout << msg << '\n';

	cout << "Максимальное значение: " << maximum << '\n';
	cout << "Минимальное значение: " << minimum << '\n';

	cout << std::endl;
}

int main() {
	{
		int array[] = {
			6, 58, 53, 70, 74, 89, 25, 90, 34, 26
		};
		int maximum = ArrayMaximum_(array, size(array, int));
		int minimum = ArrayMinimum_(array, size(array, int));
		PrintResult("Пример 1", maximum, minimum);
	}
	{
		int array[] = {
			84, 66, 24, 87, 22, 78, 72, 41, 83, 21
		};
		int maximum = ArrayMaximum_(array, size(array, int));
		int minimum = ArrayMinimum_(array, size(array, int));
		PrintResult("Пример 2", maximum, minimum);
	}
	{
		int array[] = {
			52, 40, 65, 62, 1, 39, 10, 18, 30, 98
		};
		int maximum = ArrayMaximum_(array, size(array, int));
		int minimum = ArrayMinimum_(array, size(array, int));
		PrintResult("Пример 3", maximum, minimum);
	}
}