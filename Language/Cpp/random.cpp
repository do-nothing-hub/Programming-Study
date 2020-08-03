#include<iostream>
#include<stdlib.h>
#define random(x) (rand()%x)

using namespace std;

int num[10000];

int main()
{
    int lenth =0;
    int range = 0;
    cout << "Lenth" << endl;
    cin >> lenth;
    cout << "range" << endl;
    cin >> range;
    for(int i = 0; i < lenth ;i ++) num[i] = random(range);
    
    cout << "answer" << endl;
    for(int i = 0; i < lenth; i ++) cout << num[i] << " ";

    cout << endl;
    return 0;
}