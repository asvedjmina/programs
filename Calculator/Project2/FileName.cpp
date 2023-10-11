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
		cout << "\n��������, �������������� �������������: \n1. ��������\n2. ���������\n3. ���������\n4. �������\n5. ���������� � �������\n6. �������� ������\n7. ��������� ������\n8. ����� �� ��������� \n������� ����� ��������� ��������..." << "\n";
		int opNumber;
		cin >> opNumber; // ��������� ����� ��������
		switch (opNumber) {
		case 1: sum(); break;
		case 2: dif(); break;
		case 3: multiply(); break;
		case 4: div(); break;
		case 5: degree(); break;
		case 6: sumMatrix(); break;
		case 7: difMatrix(); break;
		case 8: exit(EXIT_SUCCESS);

		default:  cout << "�������� � ��������� ������� �� ����������\n" << "\n";
			break;
		}

	}
}
// �������� ��������
float sum() {
	cout << "������� ������ ��������" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> a;
	}
    cout << "������� ������ ��������" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> b;
	}
	float sumOf;
	sumOf = (a + b);
	cout <<"�����: " << a << "+" << b << "=" << sumOf << "\n";
	return 0;
}
// �������� ���������
float dif() {
	cout << "������� ������ ��������" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> a;
	}
	cout << "������� ������ ��������" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> b;
	}
	float difOf;
	difOf = (a - b);
	cout << "�����: " << a << "-" << b << "=" << difOf << "\n";
	return 0;
}
// �������� ���������
float multiply() {
	cout << "������� ������ ��������" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> a;
	}
	cout << "������� ������ ��������" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> b;
	}
	float multiplyOf;
	multiplyOf = a * b;
	cout << "�����: " << a << "*" << b << "=" << multiplyOf << "\n";
	return 0;
}
// �������� �������
float div() {
	cout << "������� ������ ��������" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> a;
	}
	cout << "������� ������ ��������" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> b;
	}
	if (b == 0) { cout << "�������� �������� �����������" << "\n";}
	float divOf;
	divOf = a / b;
	cout << "�����: " << a << ":" << b << "=" << divOf << "\n";
	return 0;
}
// �������� ���������� � �������
float degree() {
	cout << "������� �����, ������� ����� �������� � �������" << "\n";
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> a;
	}
	cout << "������� �������" << "\n";
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "�� ����� �� �����!" << endl;
		cout << "�� ����� �� �����! ���������� �����!" << endl;
		cin >> b;
	}
	float degreeOf = a;
	int i;
	for (i = 1; i < b; i++) { degreeOf = degreeOf * a; };
	cout << "�����: " << a << "^" << b << "=" << degreeOf << "\n";
	return 0;
}
// �������� �������� ������
int sumMatrix() {
	int matrix1[3][3]{};
	int matrix2[3][3]{};
	int sumMatrix[3][3]{};
	cout << "����������� �������� � ��������� ������� 3 �� 3" << "\n";
	cout << "������� ��������� �������� ������ �������" << "\n";

	// ��������� ������ �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix1[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "�� ����� �� �����!" << endl;
				cout << "�� ����� �� �����! ���������� �����!" << endl;
				cin >> matrix1[i][j];
			}
		}
	}

	cout << "\n������� ��������� �������� ������ �������" << "\n";
	// ��������� ������ �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix2[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "�� ����� �� �����!" << endl;
				cout << "�� ����� �� �����! ���������� �����!" << endl;
				cin >> matrix2[i][j];
			}
		}
	}
	cout << "\n";

	// ����� ������ �������
	cout << "\n������ �������:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix1[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// ����� ������ �������
	cout << "\n������ �������" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// ���������� �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	// ����� ����� ������
	cout << "\n��������� �������� ������:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << sumMatrix[i][j] << "     ";
		}
		cout << "\n";
	}
	return 0;
}

// �������� ��������� ������
int difMatrix() {
	int matrix1[3][3]{};
	int matrix2[3][3]{};
	int difMatrix[3][3]{};
	cout << "����������� �������� � ��������� ������� 3 �� 3" << "\n";
	cout << "������� ��������� �������� ������ �������" << "\n";

	// ��������� ������ �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix1[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "�� ����� �� �����!" << endl;
				cout << "�� ����� �� �����! ���������� �����!" << endl;
				cin >> matrix1[i][j];
			}
		}
	}

	cout << "\n������� ��������� �������� ������ �������" << "\n";
	// ��������� ������ �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix2[i][j];
			while (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "�� ����� �� �����!" << endl;
				cout << "�� ����� �� �����! ���������� �����!" << endl;
				cin >> matrix2[i][j];
			}
		}
	}
	cout << "\n";

	// ����� ������ �������
	cout << "\n������ �������:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix1[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// ����� ������ �������
	cout << "\n������ �������:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << "     ";
		}
		cout << "\n";
	}
	cout << "\n";

	// �������� �������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			difMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}

	// ����� ������� ������
	cout << "\n��������� ��������� ������:" << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << difMatrix[i][j] << "     ";
		}
		cout << "\n";
	}
	return 0;
}