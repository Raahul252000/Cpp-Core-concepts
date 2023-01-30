#include<iostream>
using namespace std;
 bool find_element(int arr[],int siz, int element)
 {
    for(int i=0; i< siz; i++)
    {
        if(arr[i] == element)
        {
            return true;
        }
    }
    return false;
 }

int main()
{
    int num;
    int arry[10] = {10,12,32,11,6,31,22,99,15,13};
    cout << "Enter an element to find in the array: " << endl;
    cin >> num;

    bool result = find_element(arry, sizeof(arry)/sizeof(int), num);

    if(result == true)
    {
        cout << "yes element is present" << endl;
    }
    else
        cout << "not present" << endl;

    return 0;
}
