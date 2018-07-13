#include <regex>
#include <string>

using namespace std;

regex regex_final(".*");
smatch smatch_final;

extern "C" int get_val() {
  regex_search("hello", regex_final);
  return 100;
}
