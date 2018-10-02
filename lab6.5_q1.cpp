/*
Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 
*/

#include<iostream>
using namespace std;

int main(){
	cout<<"You might have brought:- \n";
	for(int i=0; i<=100; i++){	//loop for counting apples
		for(int j=0; j<=100; j++){	//loop for counting mangoes
			for(int k=0; k<=100; k++){	//loop for counting bananas
				if(i+j+k==100 && (i*1 + j*3 + k*0.5)==100){
					cout<<"  "<< i <<" apples, "<< j <<" mangoes and "<< k <<" bananas\nor";
				}
			}
		}
	}
	return 1;
}
