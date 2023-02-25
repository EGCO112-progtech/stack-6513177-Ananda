#include "node.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checking(int incorrect, int i);

int main(int argc, char **argv) {
  int i, N, j;
  Stack s;
  s.top = NULL;
  s.size = 0;
  int incorrect = 1;
  printf("Checking the parentheses in argv arguments\n");
  for (i = 1; i < argc; i++) {
    incorrect = 1;
    int p = 0;
    for (j = 0; j < strlen(argv[i]); j++) // Home work code
    { // 0 = mis 2 = open 3 = close
      switch (argv[i][j]) {
      case '{':
      case '[':
        push(&s, argv[i][j]);
        p = 1;
        break;
      case '}':
        if (pop(&s) != '{') incorrect = 0;
        else p = 0;
        break;
      case ']':
        if (pop(&s) != '[') incorrect = 0;
        else p = 0;
        break;
      }
    }
    if (p == 0) incorrect = 3;
    if (s.size > 0) incorrect = 2;
    checking(incorrect, i);
    pop_all(&s);
  }
  pop_all(&s);
  return 0;
}

void checking(int incorrect, int i)
{
  if (incorrect == 0) {
    printf("argv %d: InCorrect: mismatch\n", i);
  } else if (incorrect == 2)
    printf("argv %d: InCorrect: too many open parenthesis\n", i);
  else if (incorrect == 3)
    printf("argv %d: InCorrect: too many closed parenthesis\n", i);
  else
    printf("argv %d: correct\n", i);
}