#include <dlfcn.h>
#include <iostream>
#include <regex>
#include <stdlib.h>
#include <string>

#include "middle.hpp"

using namespace std;

regex reg_middle(".*");
smatch smatch_middle;

void ask_middle_to_dlopen_final() {
  string lib_path = "libfinal.so";
  void* handle = dlopen(lib_path.c_str(), RTLD_NOW | RTLD_LOCAL);
  if (handle) {
    function<int()> get_val =
        reinterpret_cast<int (*)()>(dlsym(handle, "get_val"));
    cout << "middle dlopen final success and retrived value: " << get_val()
         << endl;
    ;
  }
}
