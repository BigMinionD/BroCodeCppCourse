#include <iostream>
#include <vector>

/*
Reserved keyword used to create an additional name for another data type
New data type usually ends with _t
*/
typedef std::vector<std::pair<std::string, int>> pairlist_t;

int main(){
    // This works because pairlist_t was defined earlier
    pairlist_t pairlist;
    
    return 0;
}
