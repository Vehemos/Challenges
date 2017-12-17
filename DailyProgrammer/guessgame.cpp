//Challenge: https://www.reddit.com/r/dailyprogrammer/comments/pii6j/difficult_challenge_1/

#include <iostream>

using namespace std;

int main()
{
	int low = 1, high = 101;
	int steps = 0, guess = (high+low)/2, ans;
	while(ans != 5)
		{
			cout<<"My Guess is: "<<guess<<"\nIs it correct or too High/Low? (5 or 1/0)\n";
			cin>>ans;
			if(ans == 1)
				guess = (guess+low)/2;
			else
				guess = (guess+high)/2;
			steps++;
		}
	cout<<"I guessed your number in "<<steps<<" steps!";
}
