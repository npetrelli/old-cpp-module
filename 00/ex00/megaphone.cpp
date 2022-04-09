#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i;
	int j;
	char temp;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else if (argc > 1)
	{
		j = 0;
		while (++j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				temp = argv[j][i++];
				if (temp > 96 && temp < 123)
					temp -= 32;
				cout << temp;
			}
		}
		cout << endl;
	}
	return (0);
}
