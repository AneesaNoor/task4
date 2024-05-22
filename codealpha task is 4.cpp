#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int finalResult=0;
	int playQuiz();
	char playAgain;
	finalResult=playQuiz();
	cout<<"your score is \n"<<finalResult<<endl;
	cout<<"do you want to play quiz again (y or n)) ?\n";
	cin>>playAgain;
	if(playAgain=='y'||playAgain=='Y'){
	playQuiz();	
	}
	else{
		cout<<"THANK YOU \n";
	}
	if(finalResult >=6){
		cout<<"your are pass \n";
	}
	else{
		cout<<"your are fail \n";
	}
	
}
int playQuiz(){
	char c;
		char option;
		int score=0;
	cout<<"----------Welcome to Quiz Game---------------"<<endl;
	cout<<"---------Please follow the instructions -----"<<endl;
	cout<<"Step 1:   quiz contains total 10 questions---"<<endl;
	cout<<"Step 2:   you will given 1 marks for each right ans---"<<endl;
	cout<<"Step 3:   there will be no negative marking---"<<endl;
	cout<<"Step 4:   please press s to start quiz--------"<<endl;
	cout<<"Step 5:   please select one option a,b,c,d -------"<<endl;
	cin>>c;
	if(c=='s' || c=='S'){
		cout<<"Q1. What is capital of PAKISTAN "<<endl;
		cout<<"(a) LAHORE (b) KARACHI (c) ISLAMABAD (d) RAWALPINDI"<<endl;
	cin>>option;
	if(option=='C' || option=='c'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q2. Who is prime minister of  PAKISTAN "<<endl;
		cout<<"(a)IMRAN KHAN (b) NAWAZ SHARIF (c) BILALWL BUTTO (d) SHAHBAZ SHARIF"<<endl;
	cin>>option;
	if(option=='D' || option=='d'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q3. What is the national bird of  PAKISTAN "<<endl;
		cout<<"(a) PARROT (b) CHUKAR PARTRIDGE (c) SPARROW (d) PEACOCK"<<endl;
	cin>>option;
	if(option=='b' || option=='B'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q4. What is capital of PUNJAB PAKISTAN "<<endl;
		cout<<"(a) LAHORE (b) KARACHI (c) ISLAMABAD (d) RAWALPINDI"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q5. What is capital of SINDH PAKISTAN "<<endl;
		cout<<"(a) LAHORE (b) KARACHI (c) ISLAMABAD (d) RAWALPINDI"<<endl;
	cin>>option;
	if(option=='B' || option=='b'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q6. What is capital of BALOCHISTAN PAKISTAN "<<endl;
		cout<<"(a) QUETTA (b) KARACHI (c) ISLAMABAD (d) RAWALPINDI"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q7. What is capital of KHABER PAKHTUNKHWA PAKISTAN "<<endl;
		cout<<"(a) PESHAWAR (b) KARACHI (c) ISLAMABAD (d) RAWALPINDI"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q8. What is capital of JAPAN"<<endl;
		cout<<"(a) TOKYO (b) BEIJING (c) PARIS (d) SEOUL"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q9. Who is founder of PAKISTAN "<<endl;
		cout<<"(a) QUAID AZAM (b) ALLAMA IQBAL (c) NAWAZ SHARIF  (d) IMRAN KHAN"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	cout<<"Q1. What is QUAID AZAM date of death "<<endl;
		cout<<"(a) 1948 (b) 1947 (c) 1946 (d) 1945"<<endl;
	cin>>option;
	if(option=='a' || option=='A'){
		score=score+1;
	}
	else{
		score=score+0;
	}
	}
	else{
		cout<<"you have entered wronge value, please enter correct answer\n";
		
	}
}
