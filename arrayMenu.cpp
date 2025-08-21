#include <bits/stdc++.h>
using namespace std;

vector<int> create(int n)
{
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

void display(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << endl;
    }
}

vector<int> insertElement(vector<int> &arr, int index, int target)
{
    arr.push_back(0);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (i >= index)
        {
            arr[i] = arr[i - 1];
        }
    }
    arr[index] = target;

    return arr;
}

vector<int> delElement(vector<int> &arr, int index)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (i >= index)
        {
            arr[i] = arr[i + 1];
        }
    }
    arr.pop_back();

    return arr;
}

void search(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            cout << "Found at index: " << i << endl;
        }
    }
}

int main()
{
    char ch;
    vector<int> arr;

    while (true)
    {
        cout << "Enter 'c' for create, 'i' for insert, 'd' for delete, 'f' to display,  'l' for linear search, 'q' to quit: ";
        cin >> ch;
        switch (ch)
        {
        case 'c':
            int n;
            cout << "Enter number of elements: ";
            cin >> n;
            arr = create(n);
            display(arr);
            break;

        case 'i':
            int index;
            int target;
            cout << "Enter index to insert at and value to insert: ";
            cin >> index >> target;
            arr = insertElement(arr, index, target);
            display(arr);
            break;

        case 'd':
            int ind;
            cout << "Enter index to delete: ";
            cin >> ind;
            arr = delElement(arr, ind);
            display(arr);
            break;

        case 'f':
            display(arr);
            break;

        case 'l':
            int tar;
            cout << "Enter value to find: ";
            cin >> tar;
            search(arr, tar);
            break;

        case 'q':
            cout << "Exiting program...";
            return 0;

        default:
            cout << "Invalid command";
        }
    }
}