#include <sstream>

using namespace std;

size_t toSize_t(string args) {
    stringstream ss; size_t size = 0;
    ss << args;
    ss >> size;
    return size;
}