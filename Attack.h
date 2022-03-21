#include "iostream"

using namespace std;
#ifndef KEYS_H_ATTACK_H
#define KEYS_H_ATTACK_H


class Attack {
private:
    pair<int, char> *one_chars;
    pair<int, char *> *tow_chars;
    string cipher;
    char choosed[26];
    string key = "--------------------------";

public:
    Attack(string x);

    pair<int, char> *count_1_char();

    pair<int, char *> *count_2_chars();

    string get_key();

    string decrypt();

    char get_char_from_tows(char target, char twin, bool first);

    char get_char_from_conflicts(char ch, vector<pair<char, bool> > twins);
};


#endif //KEYS_H_ATTACK_H
