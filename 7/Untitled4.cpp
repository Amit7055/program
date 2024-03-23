//write a funtion that return length of string given to it
//do not use string.h
#include <iostream>
using namespace std;
int My_length(string word)
{
	int i;
	for(i=0;word[i]!='\0';i++)//will check untill string[i]='\0'
	{
		//null for loop
	}
	return i;
}



int main()
{
    string word;
    cout<<"\nEnter word:";
    cin>>word;
    cout<<"length of "<<word<<" is "<<My_length(word);
    return 0;
}
