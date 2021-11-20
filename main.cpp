#include <iostream>

using namespace std;

int *merge_massive(int *a[], int *b[])
{
    int n1 = sizeof(*a), n2 = sizeof(*b);
    int *c = new int[n1+n2];
    int *a_now = a[0], *b_now = b[0];
    for(int i = 0; i < n1+n2; i++)
    {
        if(a_now <= a[n1-1] && (b_now > b[n2-1] || a_now < b_now))
        {
            c[i] = *a_now;
            a_now++;
        }
        else
        {
            c[i] = *b_now;
            b_now++;
        }
    }
    return c;
}

int *merge_sort(int* a, int n0, int n)
{
    return merge_massive(merge_sort(a, n0, n/2),
    merge_sort(a, n0 + (n+1)/2, (n+1)/2));
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    merge_sort();


    
    
    
    return 0;
}
