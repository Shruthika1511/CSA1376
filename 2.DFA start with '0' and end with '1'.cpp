#include <stdio.h>
#include <string.h>

int is_accepted(char* str) {
  int len = strlen(str);
  if (str[0] == '0' && str[len - 1] == '1') {
    return 1;
  }
  return 0;
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  if (is_accepted(str)) {
    printf("The string is accepted by the DFA.\n");
  } else {
    printf("The string is not accepted by the DFA.\n");
  }
  return 0;
}
