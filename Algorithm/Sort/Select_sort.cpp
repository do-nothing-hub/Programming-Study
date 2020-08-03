#include<iostream>

using namespace std;

int tmp = 0;
int num[10000];

void select(int a[], int n)
{
    for(int i = 0; i < (n/2); i++)
    {
        int max = 0;
        int maxn = 0;
        int min = 0;
        int minn = 30000;
        for(int j = i; j < (n - i); j++)
        {
            if(a[j] > maxn)
            {
                max = j;
                maxn = a[j];
            }
            if(a[j] < minn)
            {
                min = j;
                minn = a[j];
            }
        }
        tmp = a[max];
        a[max] = a[n - i - 1];
        a[n - i - 1] = tmp;
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
}

int main()
{
    int lenth = 0;
    cout << "lenth of set" << endl;
    cin >> lenth;
    cout << "input your set" << endl;
    
    for (int i = 0; i < lenth; i++)
    {
        cin >> num[i];
    }

    select(num,lenth);

    cout << "answer" << endl;
    for(int i = 0; i < lenth; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}