#include <regex>
#include <string>

using namespace std;

regex regex_foo(".*");
smatch result_in_foo;

extern "C" int get_val() {
  regex_search("hello", regex_foo);
  return 1;
}
