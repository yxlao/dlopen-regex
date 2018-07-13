#include <dlfcn.h>
#include <iostream>
#include <regex>
#include <stdlib.h>
#include <string>

using namespace std;

regex reg(".*");
smatch result;

int main(int argc, char** argv) {
  string lib_path = "libfoo.so";
  void* handle = dlopen(lib_path.c_str(), RTLD_NOW | RTLD_LOCAL);
  cout << "Done" << endl;
  return 0;
}
