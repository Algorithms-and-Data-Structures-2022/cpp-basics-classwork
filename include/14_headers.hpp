#pragma once

#include <iostream>

// Здесь находится содержимое заголовочного файла.

// "объявление" функции - реализация находится в другом файле
void function();

// "объявление" и "определение" функции
void full_function() {
  std::cout << "full_function()\n";
}
