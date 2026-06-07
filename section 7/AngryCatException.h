#ifndef UNTITLED_ANGRYCATEXCEPTION_H
#define UNTITLED_ANGRYCATEXCEPTION_H

#include <stdexcept>
using namespace std;

class AngryCatException : public runtime_error {
public:
    AngryCatException() : runtime_error("Made kitty angry") {}
    AngryCatException(const string &err) : runtime_error(err){}
};

#endif //UNTITLED_ANGRYCATEXCEPTION_H
