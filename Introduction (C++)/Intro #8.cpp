// Arrays Introduction
// Made by - Utpal

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    vector<int> intLst;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        intLst.push_back(data);
    }

    for (int i = intLst.size() - 1; i >= 0; i--)
    {
        cout << intLst[i] << " ";
    }

    return 0;
}
