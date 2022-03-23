/***************************************************************************************************

** Program: assign1.cpp
** Author: Doug Lloyd
** Date: 10/11/2019
** Description: Takes user inputs and calculates tax owed based on equations that were provided

****************************************************************************************************/

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <cmath> 


// declares all variables needed for the program
 int main() { 
	float grossincome;
	float  monthsal;
	int monthsworked;
	int carcost;
	int carsSold;
	int misconducts;
	int taxyear;
	float taxpaid;
	char state; 
	
//takes user inputs to store in variables above
		std::cout << "Please enter your monthly salary. Do not include '$' or commas. "; 
		std::cin >> monthsal;
		std::cout <<  "Monthly salary is " << monthsal << "." << std::endl;

		std::cout << "Please enter how many months you worked this year. ";
		std::cin >> monthsworked;
		std::cout << "Okay. You worked " << monthsworked << " months this year." << std::endl;

		std::cout << "What is the price of the cars you sell? ";
		std::cin >> carcost; 
		std::cout << "The cars cost " << carcost << " each." << std::endl;

		std::cout << "How many cars did you sell this year? ";
		std::cin >> carsSold;
		std::cout << carsSold << " cars sold." << std::endl;

		std::cout << "How many misconducts did you have? ";
		std::cin >> misconducts;
		std::cout <<  "Got it, " << misconducts << " misconducts." << std::endl;

		std::cout << "What tax year are we calculating for? Enter 1 for 2017, or 2 for 2018. ";
		std::cin >> taxyear;
		std::cout <<  "We will calculate your taxes owed for the " << taxyear << " tax year."  << std::endl;

		std::cout << "Last question! Are you in state A, B, or C? ";
		std::cin >> state;
		std::cout <<  "Thanks! We'll calculate your taxes now." << std::endl;

	
	float annualSalary = monthsal*monthsworked;
	float carcost2 = carcost + (carcost*.05);


//takes a random value 5-10% above the carcost variable and stores it in markUp
	srand(time(NULL)) ;
	float markUp = (rand()% carcost*.05 + carcost2) - carcost;


	float profit = carsSold*markUp;
	float pocketProfit = profit*.02;


	std::cout << "The total profit earned from selling cars is " << markUp * carsSold  << ". You will earn 2 percent of this as profit, which is " << pocketProfit << "."  << std::endl;



//calculates dollar value of misconducts
	float misconducts2;

	if(misconducts != 0){
	misconducts2 = 100*(pow(2,(misconducts-1)));
}


	grossincome = annualSalary + pocketProfit - misconducts2;



// if/else statements to use the correct code depending on tax year and state user input
	if(taxyear == 1){
		if(state == 'A') {
			taxpaid = grossincome*.06;
		}else if(state == 'B'){
			if(grossincome <2000){
				taxpaid = 0;
			}else if(grossincome >=2000 && grossincome <=10000){
				taxpaid = 100;
			}else if(grossincome >10000){
				taxpaid = grossincome*.10 + 100;
			}
		}else{
			if(grossincome < 3500){
				taxpaid = grossincome*.05;
			}else if(grossincome > 3500 && grossincome < 9000){
				taxpaid = grossincome*.07 + 175;
			}else if(grossincome > 9000 && grossincome < 125000){
				taxpaid = grossincome*.09 + 560;
			}else{ 
				taxpaid == grossincome*.099 + 11000;
			}
		}
	}	
	else{
		if(state == 'A') {
			taxpaid = grossincome*.08;
		}else if(state == 'B'){
			if(grossincome <2500){
				taxpaid = 0;
			}else if(grossincome >=2500 && grossincome <=10000){
				taxpaid = 115;
			}else if(grossincome >10000){
				taxpaid = grossincome*.105 + 115;
			}
		}else{
			if(grossincome < 3450){
				taxpaid = grossincome*.05;
			}else if(grossincome > 3450 && grossincome < 8700){
				taxpaid = grossincome*.07 + 172.5;
			}else if(grossincome > 8700 && grossincome < 125000){
				taxpaid = grossincome*.09 + 540;
			}else{ 
				taxpaid == grossincome*.099 + 11007;
			}	
		}
	}

//final outputs

	std::cout << "Your gross income is " << grossincome << " dollars." << std::endl;
	std::cout << "The tax you need to pay is " << taxpaid << " dollars." << std::endl;
	std::cout << "Your remaining money is " << grossincome - taxpaid << " dollars." <<std::endl;

	

	return 0;

}
