#include <iostream>
#include <iomanip>
using namespace std;

double a_penny_doubled_everyday(int, double amount = 0.01);

void amount_accumulated()
{
    int num;
    cout << "Enter a number of days you want to save money:" << endl;
    cin >> num;
    double total_amount = a_penny_doubled_everyday(num);
    cout << "If I start with a penny and doubled it every day for " << num << " days, I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int n, double amount)
{
    if (n <= 1)
        return amount;
    return a_penny_doubled_everyday(--n, amount * 2);
}

int main()
{
    amount_accumulated();
}
