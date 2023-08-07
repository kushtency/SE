#include <map>
#include <string>

using namespace std;

// storage data structure
map<string, int> store;

// crud
bool create_shop(string shop, int profit){
    if(store.find(shop) != store.end()){
        return false;
    }
    store[shop] = profit;
    return true;
}

bool update_shop(string shop, int updated_profit) {
    if(store.find(shop) != store.end()){
        store[shop] = updated_profit;
        return true;
    }
    return false;
}

map<string, int> read_shops(){
    return store;
}

bool delete_shop(string shop) {
    if(store.find(shop) != store.end()){
        store.erase(shop);
        return true;
    }
    return false;
}