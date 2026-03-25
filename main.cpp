
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;

	cout << "Enter the number of students and number of subjects: " ;
	cin >> N >> M;

	// TODO: declare variables for student name, score, sum, average
	int score;
	string sname;

	for(int i=0; i<N; i++)
	{
		int total = 0;
		cout <<"Enter 5 name ";
		cin >> sname;

		for (int j=0; j<M; j++)
		{
			cout <<"Enter score: ";
			cin >> score;
			total += score;
		}

		double avg = total / (double)M;
		cout << sname <<" \t" << total <<" \t" << avg << endl;
	}

	return 0;
}
