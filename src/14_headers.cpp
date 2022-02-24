#include <iostream>

// Подключаем собственный заголовочный файл.
// Python: import numpy
// Java: import java.lang.Math

#include "14_headers.hpp"  // сюда вставляется текст из файла 14_headers.hpp

// "определение" функции из файла 14_headers.hpp
void function() {
  std::cout << "function()\n";
}

int main() {
  function();
  full_function();
  return 0;
}
