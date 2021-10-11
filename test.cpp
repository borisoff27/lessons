#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Func(double v)
{
	if (v == 0)
	{
		throw "Деление на 0";
	}
	cout << 100. / v;
}

int main() {
	setlocale(LC_ALL, "");
    double a = 5, b;

	try
	{
		Func(0);
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}
	catch (const char* e)
	{
		cout << e;
	}
	catch (const char *ex)
	{
		cout << "Атата";
	}
    return 0;
}
