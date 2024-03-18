#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
using namespace std;

template <typename T>
void Massborm(T arr, int size);
template <typename T>
void Massarm(T arr, int size);
template <typename T>
void Mass(T arr, int size);

bool NoWay(int menu2);
template <typename T>
void SortArr(T arrin, int size, T arr, bool NoWay);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int size = 10;
	int numbers[size]{};
	int numbers2[size]{};
	int ran;
	int menu;
	int menu2;
	while (true)
	{


		do
		{
			system("cls");
			cout << "\n\t\tКак ввести?";
			cout << "\n\t1) Ручками";
			cout << "\n\t2) Лапками Робота";
			cout << "\n\t0) Выйти\n";
			cin >> menu;
		} while (menu < 0 || menu > 2);
		if (menu == 0)
		{
			break;
		}
		else if (menu == 1)
		{
			 system("cls");
			 cout << "\n\tВведите свои значения:\n";
			 Massarm(numbers, size);
			 cout << "\n\tВаш Массив:\n";
			 Mass(numbers, size);
			 cout << "\n";
			 system("pause");
		}
		else if (menu == 2)
		{
			system("cls");
			Massborm(numbers, size);
			cout << "\n\tВаш Массив:\n";
			Mass(numbers, size);
			cout << "\n";
			system("pause");
		}

		if (menu == 1 || menu == 2)
		{
			
			do
			{
				system("cls");
				cout << "\n\t\tКак сортировать??";
				cout << "\n\t1) По возрастанию";
				cout << "\n\t2) По убыванию";
				cout << "\n\t3) Не трощь!!!\n";
				cin >> menu2;

			} while (menu2 < 1 || menu2 > 3);

			if (menu2 == 3)
			{
				Mass(numbers, size);
			}
			else 
			{
				SortArr(numbers2, size, numbers, NoWay(menu2));
	
			}
 

		}






		return 0;
	}
}

template <typename T>
void Massborm(T arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
template <typename T>
void Massarm(T arr, int size)
{
	int ran;
	for (int i = 0; i < size; i++)
	{
		cout << "Знач. " << i + 1 << " ";
		cin >> arr[i] ;
	}
}
template <typename T>
void Mass(T arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
bool NoWay(int menu2)
{
	if (menu2 == 1)
	{
		return false;
	}
	else if (menu2 == 2)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
template <typename T>
void SortArr(T arrin, int size , T arr, bool NoWay)
{
	if (NoWay == true)
	{

	}
	else if (NoWay == false)
	{
		
	}

}
