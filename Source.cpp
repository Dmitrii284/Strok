
#include <string>// Библиотека для работы со строками С++
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


	// Изменение строк Принимают другое значение
	/*new_str = "Hello word";
	std::cout << new_str << std::endl;
	new_str = " Bye world!";
	std::cout << new_str << std::endl;*/


	//Конкатенация Это сложение строк. 
	/*new_str = new_str + " (C) student";
	new_str += "!!!";
	std::cout << new_str << std::endl;
	  */
	//Сравнение строк  
	// Строки сравниваются в 2 этапа 1) Это количество символов 2) Это Какая буква по коду больше. 


	// Ввод строки Чтобы заполнить длинную строку
	std::cout << "Привет как тебя зовут?\n Ввод -> ";
	std::string name;
	std::cin >> name;
	std::cout << "Привет, " << name << "!\n";

	//Чтобы заполнить длинную строку
	std::cout << "Кем ты работаешь?\nВвод -> ";
	std::string job;

	std::cin.ignore();// Это употребляем эту функцию ignore()   для того чтобы обнулить cin Чтобы ввод был корректный и вывод тоже.

	// Для введения несколких строк
	std::getline(std::cin, job);// Откуда берем std::cin  и куда вставляем job
	std::cout << "Ого, " << job << "? Круто!\n";

	// Тут сначало пишем cin а потом getline Тогда работает Ксли наоборот то не будет работать 
	std::cout << "А сколько тебе лет? \nВвод ->";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << " лет/...\n";

	//Методы строк
	std::string str = "Hello world!";
	//// Методы  length  и size возвращающие длинну строки  (.) Показывает на то что это метод

	////std::cout << str.size() << std::endl;
	////std::cout << str.length() << std::endl;

	//Метод insert вставляющий в подстроку строку

	str.insert(3, "00000");
	std::cout << str << std::endl;

	// Метод replace(3,4, "!!!")  Заменяет часть строки Или удаляет.
	str.replace(3, 5, "00000");
	std::cout << str << std::endl;


	// Метод find Поиск с поределенной позиции  Возвращающий позицию первого вхождения подстроки в строку.
	//Начинаем поиск с 6 индекса и находим в прямом порядке букву L  на индексе 9
	std::cout << str.find('l') << std::endl; //2
	std::cout << str.find('l', 6) << std::endl; //9

	// Метод rfind Возвращает индекс последнего вхождения подстроки в строку
	//Начинаем поиск с 6 индекса и находим в обратном порядке букву О на индексе 4
	std::cout << str.find('о') << std::endl; //7
	std::cout << str.find('о', 6) << std::endl; //4


	// Метод substr(3) возвращающий подстроку из строки  С индекса 3 вернула нам остальные символы.
	std::cout << str.substr(3) << std::endl; //lo world!
	std::cout << str.substr(3, 5) << std::endl; //lo wo  Возвращает с индекса 3 пять 5 знаков



	
    // Функции для работы со строками
	// 1  Преобразование числа в строку to _strok
	n = 123;
	std::string num_str = std::to_string(n);
	num_str += "!";
	std::cout << num_str << std::endl;

	// Обратное преобразование Строки в Число   stoi  Фукнкция stoi возвращает 
	std::cout <<"Введите число -> ";
	std::getline(std::cin, num_str);
	n = std::stoi(num_str);
	n++;
	std::cout << n << std::endl;

	// Функции возведения в регистр в Верхний  и Нижний 
	std::string hello = "Hello";

	//Возведение в нижний регистр Нужно перебрать Циклом всю строку и заменить символы с помощью функции
	    for (int i = 0; i < hello.length(); i++)
		hello[i] = std::tolower(hello[i]);	    
		std::cout << hello << std::endl;

		//Возведение в Верхний регистр регистр

		for (int i = 0; i < hello.length(); i++)
			hello[i] = std::toupper(hello[i]);
		std::cout << hello << std::endl;

		



	return 0;
}