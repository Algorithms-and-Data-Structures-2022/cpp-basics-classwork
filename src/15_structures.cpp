#include <iostream>

// Подключаем свой заголовочный файл (он находится в папке include).
#include "15_structures.hpp"

// Заголовочные файлы хранят в себе функции, структуры и т.д., которые можно использовать.

using namespace classwork;  // чтобы постоянно не дописывать в названиях 'classwork::'

int main() {

  {
    // 1. Создание объекта структуры на стеке.

    Student student;  // вызывается конструктор по-умолчанию

    // вызов метода через оператор . (точка)
    student.SetId(1);

    std::cout << "Id: " << student.id() << "\n";
  }

  std::cout << std::endl;

  {
    // 2. Создание объекта структуры на куче.

    // выделяем участок памяти при помощи оператора new
    auto* student_heap = new Student(1, 19);

    // Пояснение: auto - ключевое слово, которое позволяет не писать тип данных слева от знака равно.

    // вызов метода через оператор -> (стрелка)
    student_heap->SetId(2);

    // Пояснение: оператор -> используется для указателей.

    std::cout << "Id: " << student_heap->id() << '\n';

    delete student_heap;  // высвобождаем участок памяти
  }

  return 0;
}

// "определение" конструктора от 2 аргументов из файла 15_structures.hpp
classwork::Student::Student(int id, int age) {
  id_ = id;
  age_ = age;
  pointer_ = nullptr;

  std::cout << "Student(id, age)\n";
}
