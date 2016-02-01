#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <utility>
#include <string>
#include <map>

using namespace std;

void print()
{

}

int main()
{
	fstream file;
	file.open("input.txt");
	string valeur;
	string pere;
	string fils;
	int dist;
	map < string,vector < pair <string,int> > > graph;

	while(file.eof() == false)
	{
		getline(file, valeur);
		stringstream s(valeur);
		s >> pere;
		cout << "pere: " << pere << " ";
		graph[pere];
		while(s >> fils)
		{
			s >> dist;
			cout << " -> "<< "fils: " << fils << " distance du pere: " << dist ;
			graph[pere].push_back(make_pair(fils,dist));
		}
		cout<< endl;

	}
	// soucre = 2
	int x =0;
	cout << graph["2"][x].first;

	

	return 0;
}
