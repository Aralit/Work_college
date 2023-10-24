#include <iostream>
#include <string>
#include <cstdlib>
#include<algorithm>

using namespace std;
int main()
{
	setlocale(0, "");
	//Программа
	bool work = true;
	int input_task;
	char input_resume;
	bool resume;
	//1
	int a = 0;
	int number_1;
	//2
	string number_2;
	bool is_num_2 = true;
	//3
	string year;
	bool is_num_3 = true;
	int year_int;
	//4
	string input_str;
	bool palindrome = true;
	int half_str;
	//5
	int num_5;
	//6
	int num_6;
	//7
	int num_7;
	//8
	string input_str_1_8;
	string input_str_2_8;
	//9
	int num_9;
	int sum_9 = 0;
	//10
	int num_10;

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
		cout << "0. Выход." << endl;
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
			year_int = atoi(year.c_str());
			if (is_num_3) {
				if ((year_int % 400 == 0 || year_int % 4 == 0) && year_int != 0) {
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
			cout << "Введите год: ";
			cin >> num_7;
			if (num_7 % 100 == 0) {
				cout << "Год является веком";
			}
			else {
				cout << "Год не является веком";
			}
			break;
		case 8:
			cout << "Введите 2 строки: ";
			cin >> input_str_1_8;
			cin >> input_str_2_8;
			sort(input_str_1_8.begin(), input_str_1_8.end());
			sort(input_str_2_8.begin(), input_str_2_8.end());
			if (input_str_1_8 == input_str_2_8) {
				cout << "Строки являются анаграммми";
			}
			else {
				cout << "Строки не являются анаграммми";
			}
			break;
		case 9:
			cout << "Введите числo: ";
			cin >> num_9;
			for (int i = 1; i < num_9; i++) {
				if (num_9 % i == 0) {
					sum_9 += i;
				}
			}
			num_9 == sum_9 ? cout << "Чило является совершенным" : cout << "Число не является совершенным";
			break;
		case 10:
			cout << "Введите числo: ";
			cin >> num_10;
			for (int i = 1; i < 13; i++) {
				if (num_10 == 1) {
					cout << "Число является факториалом какого - то числа";
					break;
				}
				else if (num_10 % i >= 1) {
					cout << "Число не является факториалом какого-то числа";
					break;
				}
				else {
					num_10 /= i;
				}
			}
			break;
		case 0:
			system("cls");
			work = false;
			cout << "Программа завершина";
			break;
		default:
			break;
		}
		while (1) {
			cout << "\nПродолжить(y/n)";
			cin >> input_resume;
			if (input_resume == 'y') {
				system("cls");
				break;
			}
			else if (input_resume == 'n') {
				work = false;
				break;
			}
			else {
				system("cls");
				continue;
			}
		}

	}
}