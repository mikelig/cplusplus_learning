#include <iostream>


using namespace std;

double calculate_tax_money(int brute_money, float tax_rate)
{
    return brute_money * tax_rate;
}

int main()
{
    float sales = 95000;
    const float tax_rate_state = 0.04;
    const float tax_rate_county = 0.02;

    // Print Expected result:
    // Total sales = 95000
    // Total state tax ($) = 95k - 4%   
    // Total  county tax ($) = 95k - 2%
    // Total money in taxes = 
    // Net sales = 

    float money_tax_state = calculate_tax_money(sales, tax_rate_state);
    float money_tax_county = calculate_tax_money(sales, tax_rate_county);
    float money_tax_total = money_tax_county + money_tax_state;

    cout << "Brute sales = " << sales << endl
         << "Total state tax ($) = " << money_tax_state << endl
         << "Total county tax ($) = " << money_tax_county << endl
         << "Total taxes ($) = " << money_tax_total << endl
         << "Net sales = "  << (sales - money_tax_total) << endl;
    
    return 0;
}