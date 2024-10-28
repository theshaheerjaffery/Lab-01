#include <iostream>
using namespace std;
int main() {
    
int rent=1500;
int salaries=3000;
int utilities=400;
int other_expenses=300;
int revenue=10000;
int total_expenses=rent+salaries+utilities+other_expenses;
int profit=revenue-total_expenses;
int annual_profit=profit*12;

cout<<"Total Monthly Expenses: $"<<total_expenses<<endl;
cout<<"Remaining Profit: $"<<profit<<endl;
cout<<"Yearly Savings: $"<<annual_profit;

return 0;
}