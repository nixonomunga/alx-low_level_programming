#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_password_generator(int n)
{
	int i = 0;

	srand((unsigned int)(time(NULL)));

	char num[] = "0123456789";
	char small_letters[] = "a..z";
	char caps[] = "A..Z";
	char symbols[] = "!@#$%^&*-_";

	char password[n];

	for (i = 0; i < N; i++)
	{
		if (random_num == 1)
		{
			password[i] = num[rand() % 10];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random_num == 2)
		{
			password[i] = small_letter[rand() % 26];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random_num == 3)
		{
			password[i] = caps[rand() % 26];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = symbols[rand() % 10];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main (void)
{
	int n = 10;

	random_password_generator(n);

	return (0);
}
