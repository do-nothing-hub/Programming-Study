#include<iostream>

using namespace std;

int num[10000];

int binary(int a[],int n,int left,int right)
{
    if (left >= right) return -1;
    int mid = int((left + right)/2);
    if (a[mid] > n) return binary(a,n,left,mid-1);
    if (a[mid] < n) return binary(a,n,mid+1,right);
    if (a[mid] == n) return mid;
    return -1;
}

int main()
{
    int lenth;
    int target;
    int position = 0;
    cout << "Lenth of set" << endl;
    cin >> lenth;
    cout << "set" <<endl;
    for(int i = 0; i < lenth; i++)
    {
        cin >> num[i];
    }
    cout << "search" << endl;
    cin >> target;
    position = binary(num, target,0,(lenth - 1)) + 1;
    if(position == 0)
    {
        cout << "input error" << endl;
    }
    else
    {
        cout << "answer " << position << endl;
    }
    return 0;
}