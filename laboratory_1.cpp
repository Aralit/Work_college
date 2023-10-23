﻿#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main()
{
	setlocale(0, "");

	bool work = true;
	int input_task;
	int a = 0;
	int number_1;
	string number_2;
	bool is_num_2 = true;
	string year;
	bool is_num_3 = true;
	int year_int = atoi(year.c_str());
	string input_str;
	bool palindrome = true;
	int half_str;
	int num_5;
	int num_6;
	char intput_resume;
	bool resume;
	int num_7;

		while (work) {
			cout << "1. Напишите программу, которая проверяет, является ли число простым." << endl;
			cout << "2. Напишите программу, которая проверяет, является ли введенное число положительным, отрицательным или нулем." << endl;
			cout << "3. Напишите программу, которая проверяет, является ли год високосным." << endl;
			cout << "4. Напишите программу, которая определяет, является ли введенная строка палиндромом." << endl;
			cout << "5. Напишите программу, которая определяет, является ли введенное число кратным 3 и 5 одновременно." << endl;
			cout << "6. Напишите программу, которая определяет, является ли введенное число степенью двойки." << endl;
			cout << "7. Напишите программу, которая определяет, является ли введенный год вековым (кратным 100)." << endl;
			cout << "8. Напишите программу, которая определяет, является ли введенная строка анаграммой другой строки." << endl;
			cout << "9. Напишите программу, которая определяет, является ли введенное число совершенным (сумма всех делителей числа равна самому числу)." << endl;
			cout << "10. Напишите программу, которая определяет, является ли введенное число факториалом другого числа." << endl;
			cout << "\nВведите номер задания, коорое хотите открыть - ";
			cin >> input_task;
			system("cls");

			switch (input_task)
			{
			case 1:
				cout << "Введите число: ";
				cin >> number_1;
				for (int i = 1; i <= number_1 / 2; i++) {
					if (number_1 % i == 0) {
						a++;
					}
				}
				if (a == 1) {
					cout << "Число является простым";
				}
				else {
					cout << "Число не является простым";
				}
				break;
			case 2:
				cout << "Введите число: ";
				cin >> number_2;

				for (int i = 0; i < number_2.length(); i++) {
					if (number_2[i] != '0' && number_2[i] != '1' && number_2[i] != '2' && number_2[i] != '3' && number_2[i] != '4' && number_2[i] != '5' && number_2[i] != '6' && number_2[i] != '7' && number_2[i] != '8' && number_2[i] != '9' && number_2[0] != '-') {
						is_num_2 = false;
						break;
					}
				}

				if (is_num_2) {
					int num = atoi(number_2.c_str());
					if (num > 0) {
						cout << "Число является положительным";
					}
					else if (num < 0) {
						cout << "Число является отрицательным";
					}
					else {
						cout << "Число является нулём";
					}

				}
				else {
					cout << "Неверный символ";
				}
				break;
			case 3:
				cout << "Введите год: ";
				cin >> year;
				for (int i = 0; i < year.length(); i++) {
					if (year[i] != '0' && year[i] != '1' && year[i] != '2' && year[i] != '3' && year[i] != '4' && year[i] != '5' && year[i] != '6' && year[i] != '7' && year[i] != '8' && year[i] != '9') {
						is_num_3 = false;
						break;
					}
				}

				if (is_num_3) {
					if (year_int % 400 == 0 && year_int != 0) {
						cout << "Год является високосным";
					}
					else if (year_int % 100 == 0) {
						cout << "Год не является високосным";
					}
					else if (year_int % 4 == 0) {
						cout << "Год является високосным";
					}
					else {
						cout << "Год не является високосным";
					}
				}
				else {
					cout << "Неверный символ";
				}
				break;
			case 4:
				cout << "Введите строку: ";
				cin >> input_str;
				half_str = input_str.length() / 2;
				for (int i = 1; i <= half_str; i++) {
					if (input_str.length() % 2 == 0) {
						if (input_str[half_str - i] != input_str[half_str + i - 1]) {
							palindrome = false;
						}
					}
					else {
						if (input_str[half_str + i] != input_str[half_str - i]) {
							palindrome = false;
						}
					}
				}
				if (palindrome) {
					cout << "Строка является палиндромом";
				}
				else {
					cout << "Строка не является палиндромом";
				}
				break;
			case 5:
				cout << "Введимте число: ";
				cin >> num_5;

				if (num_5 % 3 == 0 && num_5 % 5 == 0) {
					cout << "Число делиться на 3 и на 5";
				}
				else {
					cout << "Число не делиться на 3 и на 5";
				}
				break;
			case 6:
				cout << "Введите число: ";
				cin >> num_6;

				for (int i = num_6; i >= 1; i /= 2) {
					if (i == 1) {
						cout << "Число является степенью двойки";
					}
					else if (i % 2 == 1) {
						cout << "Число не является степенью двойки";
						break;
					}
				}
				break;
			case 7:
				
				break;
			case 8:
				cout << "Данное задние в разработке";
				break;
			case 9:
				cout << "Данное задние в разработке";
				break;
			case 10:
				cout << "Данное задние в разработке";
				break;
			case 0:
				system("cls");
				work = false;
				cout << "Программа завершина";
				break;
			default:
				break;
			}
			while (1 && work) {
				cout << "\nПродолжить(y/n)";
				cin >> intput_resume;
				if (intput_resume == 'y') {
					system("cls");
				}
				else if (intput_resume == 'n') {
					work = false;
				}	
				else {
					system("cls");
					continue;
				}
			}
			
		}
}