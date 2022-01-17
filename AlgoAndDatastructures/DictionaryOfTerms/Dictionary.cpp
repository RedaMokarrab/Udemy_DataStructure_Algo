#include "Dictionary.h"


Dictionary::Dictionary()
{

   
}

Dictionary::~Dictionary()
{
}

void Dictionary::addDefinition(string myword, string definition)
{
   this->dic_items[myword] = definition;
}
string Dictionary::getDefinition(string myword)
{
   if( this->dic_items.find(myword) != this->dic_items.end())
      return dic_items[myword];
   else
      return "NOT FOUND";
}


Dictionary Dictionary::operator+(const Dictionary &rhs)
{
   Dictionary temp;
   
   temp.dic_items.insert(dic_items.begin(),dic_items.end());
   temp.dic_items.insert(rhs.dic_items.begin(),rhs.dic_items.end());
   
   return temp;
}



void Dictionary::printAll()
{
   cout<<"Item"<<"\t\t"<<"definition"<<endl;
   
   for(auto const&[key,value] : this->dic_items)
   {
      cout<<key<<"\t"<<value<<endl;
   }
}