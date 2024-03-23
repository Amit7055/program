//write code to alter case of data
//input : This Is A Test
//output: tHIS iS a tEST
#include <iostream>
#include <cstring>
#include<cctype>
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
    getline(cin,word);
    //cout<<"length of "<<word<<" is "<<My_length(word);
    //a=word.length();
    int i;
	for(i=0;i<word.length();i++)
	{
		if(isupper(word[i])>0)
			word[i]=tolower(word[i]);
		else 
		{
			word[i]=toupper(word[i]);
		}
	}
	cout<<word;
    return 0;
}