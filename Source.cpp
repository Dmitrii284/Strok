
#include <string>// ���������� ��� ������ �� �������� �++
#include <iostream>

int main() {
	setlocale(LC_ALL, "Rus");
	int n =0;

	/*char c_str[]{ 'H', 'e', 'l', 'l', 'o', '\0' };
	for (int i = 0; i < 5; i++)
		std::cout << c_str[i];
	std::cout << std::endl;
	std::cout<<c_str<< std::endl;

	std::string new_str;
	std::cout << new_str << std::endl;*/


	// ��������� ����� ��������� ������ ��������
	/*new_str = "Hello word";
	std::cout << new_str << std::endl;
	new_str = " Bye world!";
	std::cout << new_str << std::endl;*/


	//������������ ��� �������� �����. 
	/*new_str = new_str + " (C) student";
	new_str += "!!!";
	std::cout << new_str << std::endl;
	  */
	//��������� �����  
	// ������ ������������ � 2 ����� 1) ��� ���������� �������� 2) ��� ����� ����� �� ���� ������. 


	// ���� ������ ����� ��������� ������� ������
	std::cout << "������ ��� ���� �����?\n ���� -> ";
	std::string name;
	std::cin >> name;
	std::cout << "������, " << name << "!\n";

	//����� ��������� ������� ������
	std::cout << "��� �� ���������?\n���� -> ";
	std::string job;

	std::cin.ignore();// ��� ����������� ��� ������� ignore()   ��� ���� ����� �������� cin ����� ���� ��� ���������� � ����� ����.

	// ��� �������� ��������� �����
	std::getline(std::cin, job);// ������ ����� std::cin  � ���� ��������� job
	std::cout << "���, " << job << "? �����!\n";

	// ��� ������� ����� cin � ����� getline ����� �������� ���� �������� �� �� ����� �������� 
	std::cout << "� ������� ���� ���? \n���� ->";
	int age;
	std::cin >> age;
	std::cout << "����� �� � ��� ���� " << age << " ���/...\n";

	//������ �����
	std::string str = "Hello world!";
	//// ������  length  � size ������������ ������ ������  (.) ���������� �� �� ��� ��� �����

	////std::cout << str.size() << std::endl;
	////std::cout << str.length() << std::endl;

	//����� insert ����������� � ��������� ������

	str.insert(3, "00000");
	std::cout << str << std::endl;

	// ����� replace(3,4, "!!!")  �������� ����� ������ ��� �������.
	str.replace(3, 5, "00000");
	std::cout << str << std::endl;


	// ����� find ����� � ������������ �������  ������������ ������� ������� ��������� ��������� � ������.
	//�������� ����� � 6 ������� � ������� � ������ ������� ����� L  �� ������� 9
	std::cout << str.find('l') << std::endl; //2
	std::cout << str.find('l', 6) << std::endl; //9

	// ����� rfind ���������� ������ ���������� ��������� ��������� � ������
	//�������� ����� � 6 ������� � ������� � �������� ������� ����� � �� ������� 4
	std::cout << str.find('�') << std::endl; //7
	std::cout << str.find('�', 6) << std::endl; //4


	// ����� substr(3) ������������ ��������� �� ������  � ������� 3 ������� ��� ��������� �������.
	std::cout << str.substr(3) << std::endl; //lo world!
	std::cout << str.substr(3, 5) << std::endl; //lo wo  ���������� � ������� 3 ���� 5 ������



	
    // ������� ��� ������ �� ��������
	// 1  �������������� ����� � ������ to _strok
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;

	// �������� �������������� ������ � �����   stoi  �������� stoi ���������� 
	std::cout <<"������� ����� -> ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	n++;
	std::cout << n << std::endl;

	// ������� ���������� � ������� � �������  � ������ 
	std::string hello = "Hello";

	//���������� � ������ ������� ����� ��������� ������ ��� ������ � �������� ������� � ������� �������
	    for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);	    
		std::cout << hello << std::endl;

		//���������� � ������� ������� �������

		for (int i = 0; i < hello.length(); i++)
			hello[i] = std::toupper(hello[i]);
		std::cout << hello << std::endl;

		



	return 0;
}