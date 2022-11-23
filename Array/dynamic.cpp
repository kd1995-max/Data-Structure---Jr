#include<bits/stdc++.h>

using namespace std;

//dynamic sized array
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    int n = vec.size();
    
    // std::cout << n << std::endl;
    
    // for (int i = 0; i < n; i++) 
    // {
    //     std::cout << vec[i] << std::endl;
    // }
    
    for(auto it : vec)// iterate to every element in the container of vector
    {
        std::cout << it << std::endl;
    }
    
    vec.pop_back();
    
    std::cout  << std::endl;

    for(auto it : vec)// iterate to every element in the container of vector
    {
        std::cout << it << std::endl;
    }
    
    vec.push_front(4);
}
