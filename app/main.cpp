#include <iostream>
#include <stdlib.h>

#include "uri.h"
#include "excaliBurConfig.h""

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {
  Dummy d = Dummy();
  
  return d.doSomething() ? 0 : -1;
}
