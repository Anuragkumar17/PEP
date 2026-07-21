#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

int main(){
    int n; // No. of vertices
    int m; // No. of edges
    cout<< "Enter the number of vertices: "<<endl;
    cin>>n;
    cout<< "Enter the number of edges: "<<endl;
    cin>>m;
    unordered_map<int, list<int>> adjList;

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); //If graph is undirected
    }
    cout<< "Ajdacency List"<< endl;

    for (auto i : adjList) {
    cout << i.first << " -> ";
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
}