/*
Tony Nassar
CIS 2252
Summer 2016
Prof J. Baugh
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//prototype functions
void readData(int tempArray[]);
bool isDangerous(int tempArray[]);

int temperatures = 0;

int main()
{
	int tempArray[10];

	readData(tempArray);

	isDangerous(tempArray);

	cin.get();
	return 0;
}//end main
 //read file function
void readData(int tempArray[])
{
	ifstream file;
	int i = 0;

	file.open("tempInput.txt");
	while (!file.eof())
	{
		file >> tempArray[i];
		temperatures++;
		i++;
	}//end while
	file.close();
}//end readData
 //what is the temp and is it too hot function
bool isDangerous(int tempArray[])
{
	bool dangerous;
	double sum = 0.0;
	double average = 0.0;
	for (int i = 0; i < temperatures; i++)
	{
		sum += tempArray[i];
	}
	average = sum / temperatures;
	//determining on if it is too hot or not
	if (average < 100)
	{
		dangerous = false;
		cout << "The temperature is ok." << endl;
	}
	else
	{
		cout << "Run for your lives!" << endl;
	}
	return dangerous;
}//end isDangerous