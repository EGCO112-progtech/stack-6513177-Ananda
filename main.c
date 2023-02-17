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
    for (j = 0; j < strlen(argv[i]); j++); // Home work code
    {
      switch(argv[i][j])
      {
        case '{':
        case '[':
          push(&s, argv[i]);
          break;
        case '}': 
          if (pop(&s) == '}') printf("correct %d", pop(&s));
        case ']':
          if (pop(&s) == ']') printf("correct %d", pop(&s));
      }
    }
      push(&s, atoi(argv[i]));
  }

  pop_all(&s);

  return 0;
}
