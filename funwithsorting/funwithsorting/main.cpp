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
	vector<int> inputs;

	cout << "Input the integers you need to sort."
			"\n input z when you have entered all your integers." << endl;
	do
	{
		cin >> numbers;
		inputs.push_back(numbers);
	} while (numbers != -1);
	
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