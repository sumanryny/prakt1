#include <iostream>
using namespace std;

void foo(const char* string)
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < strlen(string);)
	{
		if (string[i] != '\0')
		{
			i++;
		}
		if (i == 11)
		{
			cout << "количество символов в строке больше 10" << endl;
			break;
		}
		if (string[i] == '\0' && i < 11)
		{
			cout << "введеная строка содержит меньше 10 символов" << endl;
			break;
		}
	}
	system("pause");
}
void main()
{
	char r;
	cin >> r;
	const char* string =& r;
	foo(string);
}
