#include <cstdio>

typedef void (*FuncType)();

static void Print() { std::printf("%s", "Hello, World!\n"); }

int main() {
  FuncType const ft = &Print;
  ft();
  (*ft)();
  (**ft)();
  /* ... */
}