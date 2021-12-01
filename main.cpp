#include <iostream>
#include <vector>
#include "time.h"

using namespace std;

void bubble_sort(vector<int> &m)
{
    bool f = true;
    for(int i = 1; i < m.size() && f; i++)
    {
        f = false;
        for(int g = 0; g < m.size() - i; g++)
        {
            if(m[g] > m[g+1])
            {
                swap(m[g], m[g+1]);
                f = true;
            }
        }
    }
}

int main() {
    vector<int> m;
    for(int i = 0; i < 10; i++)
    {
        m.push_back(rand()%100);
        cout << m[i] << " ";
    }
    cout << endl;
    bubble_sort(m);
    for(int i = 0; i < 10; i++)
    {
        cout << m[i] << " ";
    }
    
    
    
    return 0;
}
