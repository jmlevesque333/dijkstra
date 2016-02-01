#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <utility>
#include <string>
#include <map>

using namespace std;

int main()
{
	fstream file;
	file.open("input.txt");
	string valeur;
	string pere;
	string fils;
	int dist;
	map < string, int> distMap;
	map < string,vector < pair <string,int> > > graph;

	while(file.eof() == false)
	{
		getline(file, valeur);
		stringstream s(valeur);
		s >> pere;
		cout << "pere: " << pere << " ";
		graph[pere];
		distMap[pere] = -1;
		while(s >> fils)
		{
			s >> dist;
			cout << " -> "<< "fils: " << fils << " distance du pere: " << dist ;
			graph[pere].push_back(make_pair(fils,dist));
		}
		cout<< endl;

	}
	// soucre = 2
	string x = "2";
	int min = 4294967296;
	for(int i =0; i< graph[x].size(); i++)
	{
		if(distMap[graph[x][i].first] < graph[x][i].second)
		{
			distMap[graph[x][i].first] = graph[x][i].second;
		}
		if(graph[x][i].second < min)
			min = graph[x][i].second;
	}

	/*int mmin = 0; // more than min
	int min =4294967296;
	string nom;
	string x = "2";
	int otherRoute =0;
	for(int i =0; i< graph[x].size(); i++)
	{
		if(graph[x][i].second < min)
		{
			mmin = min;
			min = graph[x][i].second;
			nom = graph[x][i].first;
		
			if(otherRoute >= min)
			{
				boolMap[nom] = true;
				x = nom;
			}
			else
			{
			
			}
			otherRoute = mmin;
		}
		
	}*/
	

	

	return 0;
}
