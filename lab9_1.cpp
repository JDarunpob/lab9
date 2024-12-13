#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double Loan,Rate,Pay,New,Sum;
	cout << "Enter initial loan: ";
	cin >> Loan;
	cout << "Enter interest rate per year (%): ";
	cin >> Rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	cout << fixed << setprecision(2); 
	for(int Y=1;Y<99999; Y++){
		cout << setw(13) << left << Y; 
		cout << setw(13) << left << Loan;
		cout << setw(13) << left << Loan*Rate/100;
		Sum = Loan+(Loan*Rate/100);
		cout << setw(13) << left << Sum;
		if(Sum<=Pay){
			Pay=Sum;
		}
		cout << setw(13) << left << Pay;
		New = Sum - Pay;
		cout << setw(13) << left << New;
		cout << "\n";
		Loan = New;
		if(New<=0) break;
	}
	return 0;
}
