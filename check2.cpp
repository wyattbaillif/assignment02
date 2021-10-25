//Author Wyatt Baillif


//Description
//allows the user to use a search bewtween units of measurement and see if they can be converted between eachother

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[])
{
	ifstream infile;
	infile.open(argv[1]);
	//open file using command line arguments
	std::string units[43];
	std::string type[43];
	//Create structs, the data im using has 43 lines. you could make a larger struct
	int num =0;
	std::string a, b;
	std::string unit1;
	std::string unit2;
	while(infile >> a >> b)
	{
		//Read data intwo corresponding structs
		units[num]=a;
		type[num]=b;
		num++;
	}
	infile.close();
	cout<<"PLease input two units from the data to see if it is possible two convert"<<endl;
	cout<<"Unit 1: ";
	cin>>unit1;
	cout<<"unit 2: ";
	cin>>unit2;
	int x = std::distance(units, std::find(units, units + 43, unit1));
	int y = std::distance(units, std::find(units, units + 43, unit2));
	//finds the searcehd unit in the struct and stores the location in x and y
	if(type[x]==type[y]){
		//checks if the units match in type and outputs accordingly
		cout<<"These units could be converted to eachother."<<endl;
	}
	else{
		cout<<"These units are not compatible for conversion."<<endl;
	}

	return 0;
}

