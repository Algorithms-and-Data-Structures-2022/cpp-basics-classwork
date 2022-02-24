// Исходный код программы на С++.

int main() {

  int magick_number = 215;

  // 1. if
  if (magick_number > 200) {
    // ветка 1
    magick_number = 200;
  }

  // 2. if-else
  if (magick_number == 200) {
    // ветка 1
    magick_number = 210;
  } else {
    // ветка 2
    magick_number = 310;
  }

  // 3. if-else-if-else
  if (magick_number == 210) {
    // ветка 1
    magick_number = 1;
  } else if (magick_number == 310) {
    // ветка 2
    magick_number = 2;
  } else {
    // ветка 3
    magick_number = 3;
  }

  // еще есть switch-case ... он нам особо не понадобится

  return 0;
}

/*
 * Задания:
 * 1. Как проверять более сложные (составные) условия?
 */
