//Challenge: https://www.reddit.com/r/dailyprogrammer/comments/pjsdx/difficult_challenge_2/
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
	int laps = 1, i = 0;
	char response;
	high_resolution_clock::time_point t[100];
	cout<<"Do you want to start the stopwatch?";
	cin>>response;
	t[0] = high_resolution_clock::now();
	cout<<"\nIf you want to Lap stopwatch press enter \"l\". If you want to stop it, enter \"s\" \n";
	while(response != 's')
	{
		cin>>response;
		if(response == 'l')
		{
			t[++i] = high_resolution_clock::now();
			laps++;
			duration<double> time_span = duration_cast<duration<double>>(t[i] - t[i-1]);
			cout<<"Lap "<<i<<": "<<time_span.count()<<" seconds\n";
		}
	}
	t[++i] = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t[i] - t[0]);
	cout<<"Total run time was: "<<time_span.count()<<" seconds\n";
	return 0;
}
