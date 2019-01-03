#include <iostream>
using namespace std;

int char1=20,char2=20,char3=10,char4=15;

 linechar(int char1){
	for(int i=0; i<char1; i++)
	{
		cout << "*";
	}
	cout << endl << endl;}
void linechar(int char1, int char2){
	for(int i=0; i<char2; i++)
	{
		cout << "@";
	}
	cout << endl << endl;}
void linechar(int char1, int char2, int char3){
	for(int i=0; i<char3; i++)
	{
		cout << "*";
	}
	cout << endl << endl;}
void linechar(int char1, int char2, int char3, int char4){
	for(int i=0; i<char4; i++)
	{
		cout << "#";
	}
	cout << endl << endl;}
int main(){
	linechar(char1);
	linechar(char1,char2);
	linechar(char1,char2,char3);
	linechar(char1,char2,char3,char4);
	
	system ("pause > 0");
	return 0;
}
