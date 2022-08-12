#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Graph{

	public:
	int numberOfNodes;
	map<int , vector<int>> adjacencyList;

	Graph(){
		this->numberOfNodes = 0;
		
	}


	void addEdge(int node1 ,int node2){
		this->adjacencyList[node1].push_back(node2);
		this->adjacencyList[node2].push_back(node1);
	}


	void traverse(){

		for(auto i=this->adjacencyList.begin();i!=this->adjacencyList.end();i++){

          cout<<i->first<< " -> ";
		  for(int j=0;j<i->second.size();j++)
		  cout<<i->second[j]<< " ";

		  cout<<endl;
		
		}
	}


	
};


int main(){

	Graph g;
	    g.addEdge(0, 1);
	    g.addEdge(0, 2);
	    g.addEdge(1, 2);
	   
	    g.addEdge(2, 3);
	    g.addEdge(3, 1);

	    cout<<"The adjacecncy is as follows : "<<endl;

	    g.traverse();

	    return 0;
	    
}


