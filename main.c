#include "node.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  int i, N, j;
  Stack s;
  s.top = NULL;
  s.size = 0;

  printf("Checking the parentheses in argv arguments\n");
  for (i = 1; i < argc; i++) {
    int incorrect = 1;
    for (j = 0; j < strlen(argv[i]); j++) // Home work code
    {
      switch (argv[i][j]) {
      case '{':
      case '[':
        push(&s, argv[i][j]);
        break;
      case '}':
        incorrect = (pop(&s) != '{') ? 0 : 1;
        break;
      case ']':
        incorrect = (pop(&s) != '[') ? 0 : 1;
        break;
      }
    }
    if (s.size > 0)
      incorrect = 0;
    if (incorrect == 0)
      printf("argv %d: InCorrect\n", i);
    else
      printf("argv %d: correct\n", i);

    pop_all(&s);
  }

  pop_all(&s);

  return 0;
}
