#include<iostream>
#include<cstring>

using namespace std;

int num[10000];

void bubble(int a[], int n)
{
    for(int i = 0; i < (n - 1); i++)
    {
        for(int j = 0; j < (n - 1 - i); j++)
        {
            if (a[j] > a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
}

void bubble1(int a[], int n)
{
    bool exchange;
    for(int i = 0; i < (n - 1); i++)
    {
        for(int j= 0; j < (n - i -1); j++)
        {
            exchange = false;
            if(a[j] > a[j+1])
            {
                exchange = true;
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
            if (exchange = true ) break;
        }
        
    }
}

void bubble2(int a[], int n)
{
    int left = 0;
    int right = n - 1;
    while(left < right)
    {
        for(int j = left; j < right; j++)
        {
            if(a[j] > a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
        for(int j = right; j > left; j--)
        {
            if(a[j] < a[j-1])
            {
                a[j] = a[j] + a[j-1];
                a[j-1] = a[j] - a[j-1];
                a[j] = a[j] - a[j-1];
            }
        }
        left ++;
        right --;
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

    cout << "Select sort method. Type 0 to 2 for selection." << endl;
    int selection;
    cin >> selection;
    
    switch(selection)
    {
        case 0:
            bubble(num,lenth);
            break;
        case 1:
            bubble1(num,lenth);
            break;
        case 2:
            bubble2(num,lenth);
            break;
    }

    for(int i = 0; i < lenth; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}