#include <iostream>
using namespace std;
float sum();
float dif();
float multiply();
float div();
float degree();
int sumMatrix();
int difMatrix();
float a = 0.0;
float b = 0.0;


int main() {
	setlocale(LC_ALL, "Rus");
	while (true) {
		cout << "\nОперации, осуществляемые калькулятором: \n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Возведение в степень\n6. Сложение матриц\n7. Вычитание матриц\n8. Выйти из программы \nВведите номер выбранной операции..." << "\n";
		int opNumber;
		cin >> opNumber; // Считываем номер операции
		switch (opNumber) {
		case 1: sum(); break;
		case 2: dif(); break;
		case 3: multiply(); break;
		case 4: div(); break;
		case 5: degree(); break;
		case 6: sumMatrix(); break;
		case 7: difMatrix(); break;
		case 8: exit(EXIT_SUCCESS);

		default:  cout << "Операция с указанным номером не существует\n" << "\n";
			break;
		}

	}
}
// операция сложения
float sum() {
	cout << "Введите первое значение" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> a;
	}
    cout << "Введите второе значение" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> b;
	}
	float sumOf;
	sumOf = (a + b);
	cout <<"Ответ: " << a << "+" << b << "=" << sumOf << "\n";
	return 0;
}
// операция вычитания
float dif() {
	cout << "Введите первое значение" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> a;
	}
	cout << "Введите второе значение" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> b;
	}
	float difOf;
	difOf = (a - b);
	cout << "Ответ: " << a << "-" << b << "=" << difOf << "\n";
	return 0;
}
// операция умножения
float multiply() {
	cout << "Введите первое значение" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> a;
	}
	cout << "Введите второе значение" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> b;
	}
	float multiplyOf;
	multiplyOf = a * b;
	cout << "Ответ: " << a << "*" << b << "=" << multiplyOf << "\n";
	return 0;
}
// операция деления
float div() {
	cout << "Введите первое значение" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> a;
	}
	cout << "Введите второе значение" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> b;
	}
	if (b == 0) { cout << "Введённое значение недопустимо" << "\n";}
	float divOf;
	divOf = a / b;
	cout << "Ответ: " << a << ":" << b << "=" << divOf << "\n";
	return 0;
}
// операция возведения в степень
float degree() {
	cout << "Введите число, которое нужно возвести в степень" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> a;
	}
	cout << "Введите степень" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы ввели не число!" << endl;
		cout << "Вы ввели не число! Попробуйте снова!" << endl;
		cin >> b;
	}
	float degreeOf = a;
	int i;
	for (i = 1; i < b; i++) { degreeOf = degreeOf * a; };
	cout << "Ответ: " << a << "^" << b << "=" << degreeOf << "\n";
	return 0;
}
// операция сложения матриц
int sumMatrix() {
	int matrix1[3][3]{};
	int matrix2[3][3]{};
	int sumMatrix[3][3]{};
	cout << "Калькулятор работает с матрицами размера 3 на 3" << "\n";
	cout << "Введите поочерёдно значения первой матрицы" << "\n";

	// заполняем первую матрицу
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix1[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Вы ввели не число!" << endl;
				cout << "Вы ввели не число! Попробуйте снова!" << endl;
				cin >> matrix1[i][j];
			}
		}
	}

	cout << "\nВведите поочерёдно значения второй матрицы" << "\n";
	// заполняем вторую матрицу
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix2[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Вы ввели не число!" << endl;
				cout << "Вы ввели не число! Попробуйте снова!" << endl;
				cin >> matrix2[i][j];
			}
		}
	}
	cout << "\n";

	// вывод первой матрицы
	cout << "\nПервая матрица:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix1[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// вывод второй матрицы
	cout << "\nВторая матрица" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// складываем матрицы
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	// вывод суммы матриц
	cout << "\nРезультат сложения матриц:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << sumMatrix[i][j] << "     ";
		}
		cout << "\n";
	}
	return 0;
}

// операция вычитания матриц
int difMatrix() {
	int matrix1[3][3]{};
	int matrix2[3][3]{};
	int difMatrix[3][3]{};
	cout << "Калькулятор работает с матрицами размера 3 на 3" << "\n";
	cout << "Введите поочерёдно значения первой матрицы" << "\n";

	// заполняем первую матрицу
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix1[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Вы ввели не число!" << endl;
				cout << "Вы ввели не число! Попробуйте снова!" << endl;
				cin >> matrix1[i][j];
			}
		}
	}

	cout << "\nВведите поочерёдно значения второй матрицы" << "\n";
	// заполняем вторую матрицу
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix2[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Вы ввели не число!" << endl;
				cout << "Вы ввели не число! Попробуйте снова!" << endl;
				cin >> matrix2[i][j];
			}
		}
	}
	cout << "\n";

	// вывод первой матрицы
	cout << "\nПервая матрица:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix1[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// вывод второй матрицы
	cout << "\nВторая матрица:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// вычитаем матрицы
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			difMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}

	// вывод разницы матриц
	cout << "\nРезультат вычитания матриц:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << difMatrix[i][j] << "     ";
		}
		cout << "\n";
	}
	return 0;
}