#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector<int>::const_iterator iter;
	int numbers;
	char response;
	vector<int> inputs;

	cout << "Input the integers you need to sort." << endl;

	do
	{
		cout << "Next integer." << endl;
		cin >> numbers;
		inputs.push_back(numbers);
		cout << "Is there anymore numbers that need to be input? (y or n)" << endl;
		cin >> response;
	} while (response != 'n');
	
	//shows scores you enter
	cout << "These are the scores you entered." << endl;
	for (iter = inputs.begin(); iter != inputs.end(); iter++)
	{
		cout << *iter << endl;
	}

	//shows sorted scores
	cout << "Your inputs sorted." << endl;
	sort(inputs.begin(), inputs.end());
	for (iter = inputs.begin(); iter != inputs.end(); iter++)
	{
		cout << *iter << endl;
	}

	//shows random shuffle score
	cout << "Your scores radomized." << endl;
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(inputs.begin(), inputs.end());
	for (iter = inputs.begin(); iter != inputs.end(); iter++)
	{
		cout << *iter << endl;
	}

	cin.get();
	cin.get();
	
	return 0;
}