#include <iostream>
using namespace std;


//Task 1


int main()
{
	setlocale(LC_ALL, "Rus");
	{
		const int a = 10;
		const int b = 2;
		const int c = 9;
		const int d = 4;

		float res = static_cast<float> (c) / d;
		float res1 = b + res;
		float res2 = a * res1;

		cout << res2 << endl;
	}

	// Task 2


	{
		int i_var = 11;
		cout << ((i_var <= 21) ? 21 - i_var : 2 * (i_var - 21)) << endl;

		int i_net = 33;
		cout << ((i_net <= 21) ? 21 - i_net : 2 * (i_net - 21)) << endl;


	}
	// Task 3

	{
		int xd[3][3][3] = { { {1,8,3}, {1,2,3}, {1,2,3} }, { {1,2,3}, {5,6,7}, {1,2,3} },{ {1,2,3}, {1,2,3}, { 4,9,3} } };
		int* dx = nullptr;
		dx = &xd[1][1][1];
		cout << *dx << endl;

	}

	//Task 4

	{
		extern const int a;
		extern const int b;
		extern const int c;
		extern const int d;

		float res = static_cast<float> (c) / d;
		float res1 = b + res;
		float res2 = a * res1;

		cout << res2 << endl;


	}
	return 0;
};