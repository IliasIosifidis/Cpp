#ifndef UNTITLED_LANGUAGETRANS_H
#define UNTITLED_LANGUAGETRANS_H
#include <map>
#include <string>
using namespace std;

class LanguageTrans {
public:
    void addTranslation(const string &english, const string &greek);
    string getTranslation(string &english) const;
    void printAll() const;
private:
    map<string, string> translations;
};



#endif //UNTITLED_LANGUAGETRANS_H
