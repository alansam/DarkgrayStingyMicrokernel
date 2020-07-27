#include <cstdio>

struct test_s { char name[0x10]; };
class test_c { char name[0x10]; };

int main() {

  int ry[5] = { 3, 4, };
  for (size_t r = 0; r < 5; ++r) {
    printf("%d ", ry[r]);
  }
  putchar('\n');

  test_s st;
  test_c ct;

  printf("%p %zx\n", &st, sizeof(st));
  printf("%p %zx\n", &ct, sizeof(ct));

  return 0;
}
