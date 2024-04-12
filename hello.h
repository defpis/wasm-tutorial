#ifndef WASM_TUTORIAL_HELLO_H
#define WASM_TUTORIAL_HELLO_H

#include <emscripten/bind.h>

void mounted();
int add(int a, int b);

EMSCRIPTEN_BINDINGS(hello) {
  emscripten::function("mounted", &mounted);
  emscripten::function("add", &add);
}

#endif // WASM_TUTORIAL_HELLO_H
