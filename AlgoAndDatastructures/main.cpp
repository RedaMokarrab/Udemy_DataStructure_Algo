/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <memory>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;


int firstRecurringCharacter(vector<int> &input) 
{
    unordered_map<int, int> umap;
    
    for (int i =0; i<input.size();i++)
    {
        umap[input[i]]++;
        
        if(umap[input[i]]==2)
            return input[i];
        
    }
    return 0;
}


int main()
{
    vector <int> data{2,5,3,2,7,9,2};
    
    
    cout<<"First occurance : "<< firstRecurringCharacter(data)<<endl;
    

    return 0;
}
