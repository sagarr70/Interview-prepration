#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool isvalid(int a[], int n, int c, int mid)
{
    int total_prata = 0;
    for (int i = 0; i < c; i++)
    {
       int x=1;
       while (a[i]*((x)*(x+1))<=2*mid)
       {
           x++;
       }
       total_prata+=x-1;
    }
    return total_prata >= n;
}
bool isvalid2(int a[], int n, int c, int mid)
{
    int total_prata = 0;
    for (int i = 0; i < c; i++)
    {
        int time = 0;
        int count = 1;
        while (time <= mid)
        {
            time += a[i] * count;
            if(time<=mid){total_prata++;}
            count++;
        }
        
    }
    return total_prata >= n;
}
int main()
{
    int t;
    cin >> t;
    int n, c;
    while (t--)
    {
        cin >> n;
        cin >> c;
        int a[c];
        for (int i = 0; i < c; i++)
        {
            cin >> a[i];
        }
        int minn=*min_element(a,a+c);
        
        int start = 1;
        int end = 0;
        for (int i = 1; i <= n; i++)
        {
            end += minn * i;
        }
        int ans = INT_MAX;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (isvalid2(a, n, c, mid))
            {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}