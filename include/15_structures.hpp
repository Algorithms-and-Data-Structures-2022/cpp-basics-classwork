#pragma once

#include <iostream>

namespace classwork {

  struct Student {
   public:
    // конструктор по-умолчанию (без аргументов)
    Student() {
      id_ = 0;
      age_ = 0;

      // выделили память в куче (не забыть высвободить)
      pointer_ = new int{0};

      std::cout << "Student()\n";
    }

    // "объявление" конструктора от 2 аргументов
    Student(int id, int age);

    // деструктор
    ~Student() {
      delete pointer_;
      pointer_ = nullptr;

      std::cout << "~Student()\n";
    }

    // getter - метод, который возвращает копию значения поля id
    int id() const {
      return id_;
    }

    // setter - метод, который изменяет значение поля id
    void SetId(int new_id) {
      private_function();  // вызов приватной функции возможен внутри структуры
      id_ = new_id;
    }

   private:
    // приватные переменные принято называть с суффиксом _
    int id_;
    int age_;

    int* pointer_;

    // приватные методы
    void private_function() {
      std::cout << "Student::private_function()\n";
    }
  };

}  // namespace classwork
