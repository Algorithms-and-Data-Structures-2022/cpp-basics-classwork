#include <iostream>

void pass_by_value(int value) {
  // Что здесь происходит?
  // 1. value - это локальная переменная функции
  // 2. при вызове функции в value копируется значение переданного аргумента

  value = 10;  // меняем значение локальной переменной
}

void pass_by_pointer(int* pointer) {
  // Что здесь происходит?
  // 1. pointer - это локальная переменная функции
  // 2. при вызове функции в pointer устанавливается значение адреса переданного аргумента

  *pointer = 11;  // меняем значение по адресу участка памяти
}

void pass_by_reference(int& reference) {
  // Что здесь происходит?
  // 1. reference - это локальная переменная функции
  // 2. при вызове функции в reference устанавливается значение адреса переданного аргумента

  reference = 12;  // меняем значение по адресу участка памяти (как и в случае с указателем)
}

void pass_array(int* arr, int length) {
  // Что здесь происходит?
  // 1. arr и length - это локальные переменные функции
  // 2. при вызове функции:
  //  - в arr устанавливается значение адреса первого элемента массива
  //  - в length копируется значение длины массива

  arr[0] = 1;  // меняем значение элементов массива по адресу участка памяти

  std::cout << "Pass array: ";
  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}

int main() {

  int variable = 0;

  pass_by_value(variable);
  std::cout << "Pass by value: " << variable << '\n';

  pass_by_pointer(&variable);
  std::cout << "Pass by pointer: " << variable << '\n';

  pass_by_reference(variable);
  std::cout << "Pass by references: " << variable << '\n';

  int arr[] = {0, 1, 1};
  pass_array(arr, 3);  // эквивалентно: pass_array(&arr[0], 3);

  return 0;
}

/*
 * Задания:
 * 1. Можно ли запретить изменение данных при передаче аргументов по указателю/ссылке?
 * 2. Как передать массив в функцию по значению (копию)?
 */
