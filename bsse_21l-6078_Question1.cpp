#include<iostream>
#include<fstream>
#include<ctype.h>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
char grid[10][10];
string inputWords[10];
string ch;
int randomNumber;
char randomLetter;
void file_read()
{
	ifstream fin;
	fin.open("input.txt");
		for (int i=0; i<10; i++){
	fin>>ch;
	inputWords[i]=ch;
	cout<<inputWords[i];
	cout<<endl;}
	fin.close();
    
}
gridarrangement()
{
	
	//firstly initializing every letter in the word search puzzle with 'spaces'
	for (int i=0; i<10; i++){
	for (int j=0; j<10; j++){
	grid[i][j]=' ';}}
	//inserting the input words randomly in different directions in the grid
	for (int word=0; word<10; word++){
	if (word==0){						//inserts vertically from up to down
	int row=3;
	int col=1;
	for (int i=0; inputWords[word][i]!='\0'; i++,row++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==1){					//inserts diagonally from top left to bottom right
	int row=1;
	int col=4;
	for (int i=0; inputWords[word][i]!='\0'; i++,row++,col++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==2){					//inserts vertically from up to down
	int row=1;
	int col=0;
	for (int i=0; inputWords[word][i]!='\0'; i++,row++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==3){					//inserts horizontally from left to right
	int row=9;
	int col=4;
	for (int i=0; inputWords[word][i]!='\0'; i++,col++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==4){					//inserts vertically from up to down
	int row=1;
	int col=9;
	for (int i=0; inputWords[word][i]!='\0'; i++,row++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==5){					//inserts horizontally from left to right
	int row=0;
	int col=1;
	for (int i=0; inputWords[word][i]!='\0'; i++,col++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==6){					//inserts vertically from down to up
	int row=8;
	int col=6;
	for (int i=0; inputWords[word][i]!='\0'; i++,row--){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==7){					//inserts vertically from down to up
	int row=9;
	int col=3;
	for (int i=0; inputWords[word][i]!='\0'; i++,row--){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==8){					//inserts diagonally from bottom left to top right
	int row=9;
	int col=0;
	for (int i=0; inputWords[word][i]!='\0'; i++,row--,col++){
	grid[row][col]=inputWords[word][i];
	}}
	else if (word==9){					//inserts diagonally from top left to bottom right
	int row=0;
	int col=0;
	for (int i=0; inputWords[word][i]!='\0'; i++,row++,col++){
	grid[row][col]=inputWords[word][i];
	}}}
}
randomize_output(){
/*alloting random letters to the left over 'spaces', generating
	output file and printing the grid on console and in the output file*/
	cout<<"-----------------------------------------------------------"<<endl;
	for (int i=0; i<10; i++){
	for (int j=0; j<10; j++){
	if (grid[i][j] ==' '){
	randomNumber=rand()%26;
	randomLetter='a'+randomNumber;
	grid[i][j]=randomLetter;}
	
	cout<<setw(5)<<grid[i][j]<<" ";}
	
	cout<<endl;}}
  int main()
  {
  	cout<<setw(5)<<"FOLLOWING ARE THE WORDS TO FIND IN GRID"<<endl;
  	file_read();
  	gridarrangement();
  	cout<<"FOLLOWING IS THE GRID"<<endl;
  	randomize_output();
  		cout<<"-----------------------------------------------------------"<<endl;
  	
  	return 0;
  }
