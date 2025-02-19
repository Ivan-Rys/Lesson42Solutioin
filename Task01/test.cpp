#include "test.h"
void print(int matrix[N][N], string expected) {
	string actual = is_exist_zero_element(matrix);
	string msg = expected == actual ? "PASS (green)" : "FAIL(red)";

	cout << msg << endl;
	cout << "----------------------------------" << endl;
}



void test01() {


	int matrix[][N]{
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 7, 8},
		{5, 6, 7, 8, 9}
	};


	string expected = "";
	print(matrix, expected);
}
void test02() {


	int matrix[][N]{
		{1, 2, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 0, 8},
		{5, 6, 7, 8, 9}
	};


	string expected = "2 4 ";

	print(matrix, expected);
}
void test03() {


	int matrix[][N]{
		{1, 0, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 0, 7},
		{4, 5, 6, 0, 8},
		{1, 6, 7, 8, 0}
	};


	string expected = "1 2 3 4 5 ";

	print(matrix, expected);
}