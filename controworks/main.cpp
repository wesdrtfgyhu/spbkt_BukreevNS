#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	cout << "������� ����� � ����: " << asctime(timeinfo) << endl;
	cin.get();
	return 0;
}
