#include <iostream>
using namespace std;
int main() {
    
float monthly_salary=4000;
float salary_tax=monthly_salary*0.1;
float monthly_AT=monthly_salary-salary_tax;
float annual_salary=monthly_salary*12;
float annual_AT=monthly_AT*12;

cout<<"Monthly Salary: $"<<monthly_salary<<endl;
cout<<"Monthly Salary after tax: $"<<monthly_AT<<endl;
cout<<"Annual Salary before tax: $"<<annual_salary<<endl;
cout<<"Annual Salary after tax: $"<<annual_AT;
    
    return 0;
}