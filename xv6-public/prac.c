#include "types.h"
#include "stat.h"
#include "user.h"

#define VALUE 9

int main() {
  int i;
  for(i=0; i<10; i++) {
#ifdef PRINT1
    printf("1");
#elif PRINT2
    printf("2");

#endif
  }

}
