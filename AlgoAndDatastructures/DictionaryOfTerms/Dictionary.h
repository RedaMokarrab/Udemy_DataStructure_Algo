#ifndef DICTIONARY_H
#define DICTIONARY_H


#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Dictionary
{
public:
   Dictionary();
   ~Dictionary();
   void addDefinition(string myword, string definition);
   string getDefinition(string myword);
   void printAll();
   
   //std::ostream& operator<<(const Dictionary& self);
   Dictionary  operator+(const Dictionary  &rhs);

private:
   map<string,string> dic_items{};
   
   
};


void printAll(Dictionary & mydic);
#endif // DICTIONARY_H
