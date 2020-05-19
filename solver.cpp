/******************************************************
    Note:
        2020.05.19 added struct hash<vector<int>>

*******************************************************/

#include <iostream>
#include <functional>
#include <vector>
#include <string>

using namespace std;

namespace std
{
    template<> struct hash<vector<int>>
    {
        std::size_t operator()( vector<int> const& v) const noexcept
        {
            std::size_t h1= std::hash<int>{}(1208279);
            for( int i: v)
            {
                h1 = std::hash<int>{}(i) ^ (h1<<1);
            }
            return h1;
        }

    };
}

void main( void)
{


}