// Исходный код программы с операторами ветвления С++.

int main() {

  int magick_number = 215;

  // 1. if-else
  if (magick_number > 200) {
    // ветка 1
    magick_number = 200;
  } else if (magick_number > 150 && magick_number < 180) {
    // ветка 2
    magick_number = 150;
  } else {
    // ветка 3
    magick_number = 0;
  }

  return 0;
}
