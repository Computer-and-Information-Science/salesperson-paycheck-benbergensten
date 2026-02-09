#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;


int main() {
  
string filename;
ifstream inData;
//prompt for file
cout << "Enter File Name: ";
cin >> filename;



string firstName;
string lastName;
double baseSalary;
double commPercent;
double totalSales;
double totalExpenses;


inData.open (filename);

inData >> firstName >> lastName;
inData >> baseSalary >> commPercent;
inData >> totalSales;
inData >> totalExpenses;

inData.close ();

//calculations
double commission = totalSales * (commPercent/100);
double finalPay = baseSalary + commission - totalExpenses;

//output 
cout << fixed << setprecision(2);
cout << "Payroll data for " << firstName << " " << lastName << endl;
cout << endl;
cout << "Base Salary: " << setw(9) << baseSalary << endl;
cout << "Commission: " << setw(9) << commission;
  cout << " (" << commPercent << "% of " << totalSales << ")" << endl;


cout << "Expenses: " << setw(11) << totalExpenses << endl;
cout << setw(22) << "--------" << endl;
cout << "Total: " << setw(15) << finalPay << endl;


}
