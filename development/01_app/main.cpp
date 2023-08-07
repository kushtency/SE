#include <iostream>
#include "./backend/manage_shop.cpp"

using namespace std;

int main() {
    // user se input lenge
    add_shop("rahul store", "kirana", 10000);
    int ans = calculate_profit();
    cout << ans;


}