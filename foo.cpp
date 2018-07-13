#include <regex>
#include <string>

using namespace std;

regex reg_in_foo(".*");
smatch result_in_foo;

extern "C" int get_val() { return 1; }
