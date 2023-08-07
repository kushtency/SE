#include "../database/storage.cpp"
#include <map>

using namespace std;

// total profit
int calculate_profit(){
    map<string, int> mp = read_shops();
    int profit = 0;
    for(auto it : mp){
        profit += it.second;
    }
    return profit;
}

// add shop
bool add_shop(string shopname, int profit){
    // manupilation of data ...
    return create_shop(shopname, profit);
}

bool add_shop(string shopname, string type, int profit){
    // independent from all the source code.
    return create_shop(shopname, profit);
}