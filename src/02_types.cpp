// Исходный код программы на С++.

int main() {  // argc и argv являются не обязательными параметрами функции main

  // 1. "объявляем" и "инициализируем" переменные ...

  // int = integer - целые числа
  int num_students = 68;
  int degrees_celsius = -10;

  // float, double - вещественные числа
  float pi = 3.14f;
  double e = 2.71828182846;  // больше места для хранения значения числа

  // char = character - символы
  char a_caps = 'A';
  char new_line = '\n';  // специальный символ (перенос на новую строку)

  // bool = boolean - логический тип
  bool yes = true;
  bool no = false;  // имеет всего 2 значения

  // 2. В чем разница между "объявлением" и "инициализацией"?

  int variable;  // только "объявили", хранит в себе "мусор" (иногда 0)

  variable = 100;  // "инициализировали", хранит в себе значение 100

  return 0;
}

/*
 * Вопросы:
 * 1. Какие специальные символы вы знаете (за исключением '\n')?
 * 2. Что будет в себе хранить переменная типа bool при ее "объявлении"?
 * 3. Что из себя представляет переменная - имя, значение, адрес в памяти?
 */