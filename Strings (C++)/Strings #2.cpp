// Stringstream
// Made by - Utpal

#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream sttr(str);
    vector<int> nums;
    int num;
    char ch;

    while (sttr >> num)
    {
        nums.push_back(num);
        sttr >> ch;
    }

    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
