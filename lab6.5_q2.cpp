/*
Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) 
*/

#include<iostream>
using namespace std;

//function for Just a salary of Rs 600 per week
int salaryType1(){
	int x = 600;
	return (x);
}

//function for A salary of Rs7.00 per hour plus a 10% commission on sales Assuming 40 hours of work a week
int salaryType2(int n){
	int y = (7*40) + (0.1*225*n);
	return (y);
}

//function for No salary, but 20% commissions and Rs20 for each pair of shoes sold
int salaryType3(int n){
	int z = (20*n) + (0.2*225*n);
	return (z);
}

//function for asking the user for weekly sales input
int weeklySales(){
	int n;
	cout<<"Please input the total number of shoes sold this week \n";
	cin>>n;
	return (n);
}

//Driver function
int main(){
	int shoesSold= weeklySales();
	cout<<"The total number of shoes sold this week is "<< shoesSold << endl;
	int type1 =  salaryType1();
	int type2 =  salaryType2(shoesSold);
	int type3 =  salaryType3(shoesSold);	

	//conditions to check which is the best salary type for the week
	if (type1>type2 && type1>type3){
	cout << "Type 1 salary is best for you this week under which You are awarded Rs. " << type1 << " this week \n";
	}
	else if (type2>type1 && type2>type3){
	cout << "Type 2 salary is best for you this week under which You are awarded Rs. " << type2 << " this week \n";
	}
	else {
	cout << "Type 3 salary is best for you this week under which You are awarded Rs. " << type3 << " this week \n";
	}
 
	return 2;
}
