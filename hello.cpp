#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_items{};

    cout << "How many items do u have?" << endl;
    cin >> num_items;

    vector<int> data{};

    for (int i{1}; i <= num_items; i++)
    {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\n Histogram" << endl;
    for (auto val : data)
    {
        for (int i{1}; i <= val; i++)
        {
            cout << "-";
        }
        cout << endl;
    }

    cout << endl;
}