#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_password_generator(int n)
{
	int i = 0;
	int random_num = 0;

	srand((unsigned int)(time(NULL)));

	char numbers_[] = "0123456789";
	char small_letters[] = "a..z";
	char caps[] = "A..Z";
	char symbols[] = "!@#$%^&*-_";

	char _password[n];

	for (i = 0; i < n; i++)
	{
		if (random_num == 1)
		{
			_password[i] = numbers_[rand() % 10];
			random_num = rand() % 4;
			printf("%c", _password[i]);
		}
		else if (random_num == 2)
		{
			_password[i] = small_letters[rand() % 26];
			random_num = rand() % 4;
			printf("%c", _password[i]);
		}
		else if (random_num == 3)
		{
			_password[i] = caps[rand() % 26];
			random_num = rand() % 4;
			printf("%c", _password[i]);
		}
		else
		{
			_password[i] = symbols[rand() % 10];
			random_num = rand() % 4;
			printf("%c", _password[i]);
		}
	}
}

int main (void)
{
	int n = 10;

	random_password_generator(n);

	return (0);
}
