#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	system("CHCP 1251");
	int a, stor;
	double sum = 0;
	const double PI = 3.141592653589793;
	cout << "¬ведите количество углов фигуры ";
	cin >> stor;
	if (stor > 0)
	{

		for (int i = 1; i <= stor; i++)
		{
			cout << "¬ведите длину стороны фигуры " << i << "= ";
			cin >> a;
			sum = sum + a;
		}
	}
	else
	{
		cout << "ѕоздравл€ю! у вас круг! ¬ведите диаметр круга! = ";
		cin >> a;
		sum = PI * a;
	}
	cout << "ѕериметр = " << sum << endl;
	system("pause");

	return 0;
}