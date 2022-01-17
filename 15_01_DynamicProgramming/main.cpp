#include <iostream>
#include <map>
#include <unordered_map>
#include <thread>


using namespace std;
int counter1=0;
int counter2=0;

int fibonacci (int n)
{
    counter1++;
    if(n<2)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int fibonacci_helper(unordered_map<int,int> &my_cache, int n )
{
    counter2++;
    if(my_cache.find(n)!=my_cache.end())
    {
        return my_cache[n];
    }
    else
    {
        if(n<2)
            return n;
        else
            {
                my_cache[n]= fibonacci_helper(my_cache,n-1)+fibonacci_helper(my_cache,n-2);
                return my_cache[n];
            }
    }    
}
    unordered_map<int,int> my_cache{};
    
int fibonacci_Master(int n)
{

    
    return fibonacci_helper(my_cache,n);
}


int main(int argc, char **argv)
{
    
	cout<<"Result without caching :"<<fibonacci(30)<<" using following num of cycles   "<<counter1<<endl;
    
    cout<<"Result using caching :"<<fibonacci_Master(1000)<<" using following num of cycles   "<<counter2<<endl;
    
    cout<<my_cache.size()<<endl;
    cout<<my_cache.max_size()<<endl;
    
    return 0;
}
