#include <iostream>
#include <string>

using namespace std;

// 1000 -> 0 + 100 -> 0 + 10 -> 0 + 1 -> 1 + 0
int sum_of_digits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
}

int main()
{
    int num{};
    cout << "Enter a number to calculate sum of digits :" << endl;
    cin >> num;
    cout << sum_of_digits(num) << endl;
}