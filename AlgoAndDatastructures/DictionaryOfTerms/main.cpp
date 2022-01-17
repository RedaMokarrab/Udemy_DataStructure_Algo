#include <iostream>
#include "Dictionary.h"
using namespace std;

int main()
{
   Dictionary house;
   Dictionary work;
   
   Dictionary all;
      
   house.addDefinition("chair","we use it to sit");
   house.addDefinition("fork","we use it to eat");

   work.addDefinition("computer","we use it to program");
   work.addDefinition("id","we use it to enter");
   
   house.printAll();
   work.printAll();
   
   
   cout<<"Adding and print all"<<endl<<endl;
   
   all= house+work;
   all.printAll();
   

	return 0;
}
