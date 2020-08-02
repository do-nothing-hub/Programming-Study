#include<iostream>

using namespace std;

int num[10000];

void insert(int a[],int n)
{
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            int j = i - 1;
            int tar = a[i];
            a[i] = a[i-1];
            while(tar < a [j] && j >= 0)
            {
                a[j+1] = a[j];
                j --;
            }
            a[j + 1] = tar;
        }
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

    insert(num,lenth);

    cout << "answer" << endl;
    for(int i = 0; i < lenth; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}