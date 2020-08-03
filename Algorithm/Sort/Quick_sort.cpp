#include<iostream>

using namespace std;

int num[10000];

void qsort(int arr[], int left, int right)
{
    if(left >= right) return;
    int i,j,tmp,t;
    i = left;
    j = right;
    tmp = arr[left];
    while(i!=j)
    {
        while(arr[j] >= tmp && i < j) j --;
        while(arr[i] <= tmp && i < j) i ++;
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    arr[left] = arr[i];
    arr[i] = tmp;

    qsort(arr, left, i - 1);
    qsort(arr, i + 1, right);
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

    qsort(num,0,lenth - 1);

    cout << "answer" << endl;
    for(int i = 0; i < lenth; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}