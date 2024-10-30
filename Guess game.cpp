# include <iostream>
using namespace std;


int main(){
	int secretNumeber = 10;
	int guess;
	int guessCount = 0;
	int guessLimit = 5;
	bool outOfguesses = false;
	
	cout<<" Wellcome to our Gess Game, true ur best by gesting one number ! \n";
	cout<<"\n";
	cout<<"\n";
	while(secretNumeber != guess && !outOfguesses){
		if(guessCount < guessLimit){
			
		cout<<"Enter guess : ";
		cin>>guess;
		guessCount++;
		
	}
	else{outOfguesses = true;
	}
	
	}
	if(outOfguesses){
		cout<<"\n";
		cout<<"You lose!";
	}else{
		cout<<"\n";
	cout<<"You win !";
}
return 0;
}
	
	

