#include "hello.h"
#include <emscripten.h>
#include <iostream>

EM_JS(int, multiply, (int a, int b), { return Module.multiply(a, b); })

void mounted() {
  std::cout << "call multiply: " << multiply(2, 2) << std::endl;
}

int add(int a, int b) { return a + b; }

int main() {
  std::cout << "wasm init" << std::endl;
  return 0;
}
