#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  N;
	do
	{
		printf("\t\t----Введите номер задания: ");
		scanf_s("%d", &N);
		cin.get();
		printf("\n");
		switch (N)
		{
		case 1:
			/*1.Составить программу, которая:
			a.	запрашивает имя человека и повторяет его на экране;
			b.	запрашивает имя человека и повторяет его на экране с приветствием.*/
		{
			char name[20];
			printf("Введите имя: \n");
			gets_s(name);
			printf("Вы ввели имя %s\n", name);
			printf("Введите имя: \n");
			gets_s(name);
			printf("Привет!  %s\n", name);
		}
		printf("\n");
		break;

		case 2:
			/*2.Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это
			чемпион!".*/
		{
			char team[20];
			printf("Введите название футбольной команды: \n");
			gets_s(team);
			printf("\t%s это - чемпион!\n", team);
		}
		printf("\n");
		break;

		case 3:
			/*3.Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную
			строку.*/
		{
			char name[20];
			char surname[20];
			printf("Введите имя:");
			gets_s(name);
			printf("Введите фамилию:");
			gets_s(surname);
			printf("\t%s %s\n", name, surname);
		}
		printf("\n");
		break;

		case 4:
			/*4.Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение:
			"Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).*/
		{
			char state[20];
			char city[20];
			printf("Введите название государства и его столицы:\n");
			gets_s(state);
			gets_s(city);
			printf("\tСтолица государства %s — город %s\n", state, city);
		}
		printf("\n");
		break;

		case 5:
			/*5.Дано название футбольного клуба. Определить количество символов в нем.*/
		{
			char team[] = "Manchester United";
			int	quantity = strlen(team), cnt = 0;
			for (int i = 0; i < strlen(team); i++)
			{
				if (team[i] == ' ')
				{
					cnt++;
				}
			}
			printf("Количество символов в '%s' - %d\n", team, quantity - cnt);
		}
		printf("\n");
		break;

		case 6:
			/*6.Дано название города. Определить, четно или нет количество символов в нем*/
		{
			char city[] = "Сыктывкар";
			if (strlen(city) % 2 == 0)
			{
				printf("Количество символов в '%s' - ЧЕТНОЕ\n", city);
			}
			else
			{
				printf("Количество символов в '%s' - НЕЧЕТНОЕ\n", city);
			}


		}
		printf("\n");
		break;


		case 7:
			/*7.Даны две фамилии. Определить, какая из них длиннее.*/
		{
			char surname1[] = "Иванов";
			char surname2[] = "Иванченко";
			printf("\t1-я фамилия: \t 2-я фамилия:\n");
			printf("\t  %s\t   %s\n", surname1, surname2);

			if (strlen(surname1) > strlen(surname2))
			{
				printf("1-я фамилия длиннее 2-й\n");
			}
			else
			{
				printf("2-я фамилия длиннее 1-й\n");
			}
		}
		printf("\n");
		break;


		case 8:
			/*8.Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.*/
		{
			char city1[] = "Сыктывкар";
			char city2[] = "Петропавловск";
			char city3[] = "Джибути";
			if (strlen(city1) > strlen(city2) && strlen(city1) > strlen(city3))
			{
				printf("Самое длинное название - %s\n", city1);
			}
			else if (strlen(city2) > strlen(city1) && strlen(city2) > strlen(city3))
			{
				printf("Самое длинное название - %s\n", city2);
			}
			else
			{
				printf("Самое длинное название - %s\n", city3);
			}

			if (strlen(city1) < strlen(city2) && strlen(city1) < strlen(city3))
			{
				printf("Самое короткое название - %s\n", city1);
			}
			else if (strlen(city2) < strlen(city1) && strlen(city2) < strlen(city3))
			{
				printf("Самое короткое название - %s\n", city2);
			}
			else
			{
				printf("Самое короткое название - %s\n", city3);
			}
		}
		printf("\n");
		break;

		case 9:
			/*9.Дано слово. Вывести на экран его третий символ*/
		{
			char word[] = "слово";
			printf("Третий символ слова %s - %c\n", word, word[2]);
		}
		printf("\n");
		break;

		case 10:
			/*10.Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'*/
		{
			//48-57
			char simbols[] = "a1a2a3a4a5a6";
			printf("Блыо: %s\n", simbols);
			for (int i = 0; i < strlen(simbols); i++)
			{
				if ((int)simbols[i] >= 48 && (int)simbols[i] <= 57)
				{
					simbols[i] = '!';
				}
			}
			printf("Стало: %s\n", simbols);

		}
		printf("\n");
		break;

		case 11:
			//11.Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.
		{
			char matrix[2][6] = { { '22', '+', '15', '*', '77','!' },{ '-', '*', '-', '5', 'x', '*' } };
			int cnt = 0;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
					printf("%c ", matrix[i][j]);
				printf("\n");
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
					if (matrix[i][j] == '+' || matrix[i][j] == '-' || matrix[i][j] == '*')
						cnt++;
			}
			printf("\nСимволы +, - и * встречаются %d раз\n", cnt);
		}

		printf("\n");
		break;

		case 12:
			/*12.Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.*/
		{
			char a[15];
			char vowel[] = "аоиеёэыуюя";
			int cnt = 0;
			printf("Введите массив символов:\n");
			gets_s(a);
			for (int i = 0; i < strlen(vowel); i++)
			{
				for (int j = 0; j < strlen(a); j++)
				{
					if (a[j] == vowel[i])
						cnt++;
				}
			}
			printf("Количество гласных русских букв в массиве = %d", cnt);
		}
		printf("\n");
		break;

		case 13:
			/*13.Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.*/
		{
			char a[20];
			int i = 0;
			int cnt = 0;
			printf("Введите массив символов:\n");
			gets_s(a);
			while (a[i++] != ':')
				cnt++;
			printf("\t%d символов предшествуют двоеточию", cnt);
		}
		printf("\n");
		break;

		case 14:
			/*14.Дан массив символов. Определить, сколько раз входит в него группа букв abc.*/
		{
			char *a = "abctyuabctyuabc";
			int cnt = 0;
			printf("Массив символов: \n\t%s\n", a);
			while (a = strstr(a, "abc"))
			{
				cnt++;
				a += 3;
			}
			printf("Группа букв 'abc' встречается %d раза", cnt);
		}
		printf("\n");
		break;
				

		default: {printf("Задания с таким номером не существует\n"); }
		}
	} while (N > 0 && N < 15);
	printf("\t\t\t\t\tКОНЕЦ.\n");
	system("pause");
}
