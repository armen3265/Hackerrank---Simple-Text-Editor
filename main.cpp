#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    stack<string> lastValue;
    string S;
    int query;
    string text;
    for (int i = 0; i < N; i++)
    {
        cin >> query;
        try{
            switch (query)
            {
            case 1:
                lastValue.push(S);
                cin >> text;
                S.append(text);
                break;
            case 2:
                int count;
                cin >> count;
                lastValue.push(S);
                S.erase(S.end() - count, S.end());
                break;
            case 3:
                int index;
                cin >> index;
                cout << S[index-1] << endl;
                break;
            case 4:
                S = lastValue.top();
                lastValue.pop();
                break;
            default:
                throw runtime_error("Invalid Value for query");
            }
        }
        catch (const exception& ex)
        {
            ex.what();
        }
    }
    return 0;
}
