#include <stdio.h>
#include <stdlib.h>

typedef struct p_node {
  int rule;
  int min;
  int max;
} p_node;

void patternPrint(p_node* p, int len) {
  for (int i = 0; i < len; i++) {
    printf("rule: %d\n", p[i].rule);
    printf("min: %d\n", p[i].min);
    printf("max: %d\n", p[i].max);
  }
}

int main (int argc, char** argv)
{
  int len = 2;
  p_node* p = (p_node*)malloc(sizeof(p_node)*2);

  p[0] = (struct p_node){0,0,0};
  p[1] = (struct p_node){1,1,3};

  patternPrint(p, len);

  free(p);

  return 0;
}
