// Исходный код программы на С++.

int main() {

  // Операторы: (1) арифметические, (2) сравнения, (3) логические, (4) побитовые ...

  // 1. =, +, -, *, /, % (mod), ++, --
  int age;

  age = 18;        // оператор "присваивания"
  age = age + 12;  // "сложение"
  age++;           // "age = age + 1"

  // 2. ==, !=, >, <, >=, <=
  bool can_drink_alcohol = age >= 18;  // "сравнение" больше или равно
  bool is_eighteen = age == 18;        // "равно"
  bool is_not_twenty = age != 20;      // "неравно"

  // 3. ! (not), && (and), || (or)
  bool am_I_crazy = false;

  am_I_crazy = !am_I_crazy;                   // "отрицание"
  bool multiple_and = true && true && false;  // "логическое и"

  // 4. ~ (inverse), &, |, ^ (XOR), <<, >>
  int number = 3;
  number = number << 1;  // "3 * 2^1"

  // Есть и другие операторы, но о них позже ...

  return 0;
}

/*
 * Задания:
 * 1. Как составить выражение из последовательности операторов: сложить, умножить и вычесть?
 * 2. Как вычислить установлен ли бит на определенной позиции числа?
 * 3. Что будет при превышении значения типа данных?
 * 4. Как создать беззнаковый тип данных?
 */