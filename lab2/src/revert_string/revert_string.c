#include "revert_string.h"

// задумка: не использовать функцию strlen()
// использовать лишь указатели
void RevertString(char *str) {
  // переносим p в конец строки
  char* p = str;
  while (*(p+1) != '\0') {p++;}

  // меняем местами
  char t;
  while (p != str && (str-1) != p) {
    t = *str; *str = *p; *p = t;
    p--;str++;
  }
}
