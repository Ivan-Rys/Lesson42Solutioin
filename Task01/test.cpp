#include "test.h"

void print(string expected) {
	string actual = is_exist_zero_element(matrix);

	string msg = expected == actual ? "PASS (green)" : "FAIL (red)";

	cout << msg << endl;
	cout << "------------------------------------------" << endl;
}

void test01() {
	int matrix[][N]{
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 7, 8},
		{5, 6, 7, 8, 9},
	};

	string expected = "";

	string actual = is_exist_zero_element(matrix);

	string msg = expected == actual ? "PASS (green)" : "FAIL (red)";

	cout << msg << endl;
	cout << "------------------------------------------" << endl;

	string expected = 2,4
		print matrix
}

void test02() {
	int matrix[][N]{
		{1, 0, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 0, 8},
		{5, 6, 7, 8, 9},
	};

	string expected = "";

	string actual = is_exist_zero_element(matrix);

	string msg = expected == actual ? "PASS (green)" : "FAIL (red)";

	cout << msg << endl;
	cout << "------------------------------------------" << endl;
}

void test03() {
	int matrix[][N]{
		{1, 0, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 0, 7},
		{0, 5, 6, 7, 8},
		{5, 0, 7, 8, 9},
	};

	string expected = "1 2 3 4 5";

	string actual = is_exist_zero_element(matrix);

	string msg = expected == actual ? "PASS (green)" : "FAIL (red)";

	cout << msg << endl;
	cout << "------------------------------------------" << endl;
}