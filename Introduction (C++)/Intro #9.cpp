// Variable Sized Arrays
// Made by - Utpal

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    int rows, queries;
    cin >> rows >> queries;

    vector<vector<int>> numArray(rows);
    for (int i = 0; i < rows; i++)
    {
        int cols;
        cin >> cols;
        for (int j = 0; j < cols; j++)
        {
            int num;
            cin >> num;
            numArray[i].push_back(num);
        }
    }

    vector<vector<int>> queryArray(queries);
    for (int i = 0; i < queries; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int qry;
            cin >> qry;
            queryArray[i].push_back(qry);
        }
    }

    for (int i = 0; i < queryArray.size(); i++)
    {
        cout << numArray[queryArray[i][0]][queryArray[i][1]] << endl;
    }


    return 0;
}