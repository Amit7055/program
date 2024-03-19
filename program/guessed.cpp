#include<iostream>
using namespace std;

main()
{
	int guess,age;
	cout<<"enter age: ";
	cin>>age;
	do
	{
		cout<<"Enter your guess: ";
		cin>>guess;
		
		//age1=age-guess;
		
		if(guess == age)
		{
			cout<<"You have guessed right\n";
			break;
		}
		else if(guess>age)
		{
			cout<<"You have guessed more\n";
		}
		else if(guess<age)
		{
			cout<<"You have guessed less\n";
		}
	}
	while(true);
	
}