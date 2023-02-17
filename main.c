#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
#include "stack.h"

int main(int argc, char **argv){
  
  int i,N,j;
  Stack s;
  s.top = NULL;
  s.size = 0;
 
  printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++)
  {
    int incorrect = 1;
    for (j = 0; j < strlen(argv[i]); j++); // Home work code
    {
      switch(argv[i][j])
      {
        case '{':
        case '[':
          push(&s, argv[i][j]);
          break;
        case '}': incorrect = (pop(&s) != '}') ? 0 : 1; break;
        case ']': incorrect = (pop(&s) != ']') ? 0 : 1; break;
        // correct = (pop(&s) == ']') ? 1 : 0; break;
      }
    }
    if (incorrect == 0) printf("argv %d: InCorrect\n", i);
    else printf("argv %d: correct\n", i);
    // push(&s, atoi(argv[i]));
  }

  pop_all(&s);

  return 0;
}
