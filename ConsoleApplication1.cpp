#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int const size = 10;
    int arr[size] ;
    srand(time(NULL));
    int maxRandom = 10;
    int max;
    int min = maxRandom;
    
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % maxRandom;
		cout << arr[i] << " ";
		if(max <= arr[i])
		{
		    max = arr[i];
		}
		if(min >= arr[i])
		{
		    min = arr[i];
		}
	}
	cout << "\nМакс: " << max;
	cout << "\nМин: " << min;

	int sum;
    int diap;
    cout << "\nВведите диапазон для поиска числа ";
    cin >> diap;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < diap) 
        {
            sum += arr[i];
        }
    }
    cout << sum;

    int max2;
    int min2 = 9000000;
    int startmount;
    int finishmount;
    int const size2 = 13;
    int arr2[size2] ;
    for (int i = 1; i < size2; i++)
    {
        cout << "\nВведите прибыль за " << i << " Месяц";
        cin >> arr2[i];
    }
    cout << "\nВведите от какого месяца расчитать прибыль ";
    cin >> startmount;
    cout << "\nВведите до какого месяца расчитать прибыль ";
    cin >> finishmount;
    for (int i = startmount; i < finishmount+1; i++)
    {
        if(max2 <= arr2[i])
		{
		    max2 = arr2[i];
		}
		if(min2 >= arr2[i])
		{
		    min2 = arr2[i];
		}
    }
    cout << "\nМакс: " << max2;
	cout << "\nМин: " << min2;
}
