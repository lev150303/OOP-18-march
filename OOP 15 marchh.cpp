#include"books.h"
int menu() {
	setlocale(LC_ALL, "Russian");
	string title, name, publisher, author;
	unsigned int Day, Month, Year, ID, year, pages, quantity, instances, number;
	vector<string>authors;
	vector<reader>picked;
	Cathalog user;
	int knopka;
	while (true) {
		cout << "1 " << "�������� �����" << endl;
		cout << "2 " << "������� �����" << endl;
		cout << "3 " << "����� ���������� �� ����� � ���������, ������� ����� (�� �������������� �����)" << endl;
		cout << "4 " << "����� ����� � �������� �� �������� � �� ������ � ������� ��������������" << endl;
		cout << "5 " << "������ ����� ��������" << endl;
		cout << "6 " << "������� ����� ���������" << endl;
		cout << "7 " << "����� ������ ���������, �� ��������� ����� � ������� ����" << endl;
		cout << "8 " << "�����" << endl;
		cin >> knopka;
		system("cls");
		switch (knopka)
		{
		case 1:
			cout << "������� ��� ������ � ����������� �����" << endl;
			cout << "��������:";
			cin >> title;
			cout << endl << "�����(�)";
			cout << endl << "������� ���������� �������:";
			cin >> number;
			for (int i = 1; i <= number; i++) {
				cin >> author;
				authors.push_back(author);
			}
			cout << endl << "��� �������:";
			cin >> year;
			cout << endl << "������������:";
			cin >> publisher;
			cout << endl << "���������� �������:";
			cin >> pages;
			cout << endl << "������������� � ��������:";
			cin >> ID;
			cout << endl << "����� ���������� �����������:";
			cin >> quantity;
			cout << endl << "���������� ����������� � �������:";
			cin >> instances;
			cout << endl;
			user.AddBook(title, authors, year, publisher, pages, ID, quantity, instances, picked);
			authors.clear();
			break;
		case 2:
			cout << "������� �������� ��������� �����:";
			cin >> title;
			cout << endl;
			user.DeleteBookCathalog(title);
			break;
		case 3:
			cout << "������� ID �����:";
			cin >> ID;
			cout << endl;
			user.Output_id_and_reader(ID);
			break;
		case 4:
			cout << "������� ��������:";
			cin >> title;
			cout << endl << "������� ������:";
			cin >> author;
			cout << endl;
			user.SearchBook(title, author);
			break;
		case 5:
			cout << "������� ���������� � ���������� ����� � ����������" << endl;
			cout << "������� �������� �����:";
			cin >> title;
			cout << endl << "������� ���:";
			cin >> name;
			cout << endl << "������� �����:";
			cin >> Day;
			cout << endl << "������� �����:";
			cin >> Month;
			cout << endl << "������� ���:";
			cin >> Year;
			cout << endl;
			user.IssuanceBook(title, name, Day, Month, Year);
			break;
		case 6:
			cout << "������� �����" << endl;
			cout << "������� �������� �����:";
			cin >> title;
			cout << endl << "������� ��� ������������� ����� ��������:";
			cin >> name;
			cout << endl;
			user.Return_of_the_book(title, name);
			break;
		case 7:
			cout << "������� ����������� ����" << endl;
			cout << "�����:";
			cin >> Day;
			cout << endl << "�����:";
			cin >> Month;
			cout << endl << "���:";
			cin >> Year;
			cout << endl;
			user.DebtorsReaders(Day, Month, Year);
			break;
		case 8:
			system("pause");
			break;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	menu();
	return 0;
}