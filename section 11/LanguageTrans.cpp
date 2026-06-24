#include "LanguageTrans.h"
#include <iostream>

void LanguageTrans::addTranslation(const string &english, const string &greek) {
    translations[english] = greek;
}

string LanguageTrans::getTranslation(string &english) const {
    auto it = translations.find(english);
    if (it != translations.end()) {
        return it->second;
    } else {
        return "not found";
    }
}

void LanguageTrans::printAll() const{
    for (const auto &pair : translations) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}
