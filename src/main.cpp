
#include "brother/brother.h"
#include "sister/sister.h"

int main(int, char **) {
  Sister sister;
  sister.SayHi();

  Brother brother;
  brother.SayHi();
  return 0;
}
