#include <iostream>
#include <map>
#include <vector>
using namespace std;

// pre-defined function to display vector
template <typename T>
void showVector(vector<T>& v){
    for (T x:v) {cout << x << " ";}
    cout << endl;
}
    
// pre-defined function to display map's keys and values
template <typename T, typename U>
void showMap(map<T, vector<U>>& m){
    typename map<T, vector<U>>::iterator itr;
    for (itr=m.begin(); itr!=m.end(); itr++) {
        cout << "key: " << itr->first << ", values: " ;
        showVector(itr->second);            
    }        
    cout << endl;
}        
    
// data structure of a graph
enum COLORS {WHITE, GREY, BLACK};    
typedef struct vertex{
    // default WHITE
    COLORS color;
    // when changed from 'WHITE' to 'GREY'
    int discoverTime;
    // when changed from 'GREY' to 'BLACK'
    int finishTime;
}vertex;
    
// pre-defined function to display graph's vertex
template <typename T>
void showVertex(map<T, vertex>& m){
    typename map<T, vertex>::iterator itr;
    for (itr=m.begin(); itr!=m.end(); itr++) {
        cout << "vertex: " << itr->first;
        cout << "\tcolor is: " << (itr->second).color;
        cout << "\tdiscover time is: " << (itr->second).discoverTime;
        cout << "\tfinish time is: " << (itr->second).finishTime;
        cout << endl;
    }
}

void DFS_Visit(const int&, map<int, vertex>&, map<int, vector<int>>&);
vector<int> findOrder(int, vector<vector<int>>&);

int main(int argc, char* argv[]){
    // vector<vector<int>> courses {{1,2}, {2,3}, {4,3}, {-6,3}, {2, 5}, {-8, -6}, {99, -6}};
    int numCourses = 3;
    vector<vector<int>> prerequisites {{1,0}};
    vector<int> temp = findOrder(numCourses, prerequisites);
    showVector(temp);
}

// depth first search on graph
int globalTime = 0;
vector<int> schedule;
int cyclic = 0;

void DFS_Visit(const int& vertex_id, map<int, vertex>& vertices, map<int, vector<int>>& adj){
    globalTime += 1;
    vertices[vertex_id].discoverTime = globalTime;
    vertices[vertex_id].color = GREY;
    // loop on each adjecient vertex
    for (int i=0; i<adj[vertex_id].size(); i++){
        int vertex_id_new = adj[vertex_id][i];
        // back edge (cyclic loop), impossible to finish all courses
        if (vertices[vertex_id_new].color==GREY && vertex_id_new!=vertex_id){
            // can we improve the runtime by immediatly exit and return empty [] ?
            cyclic = 1;
        }
        else if (vertices[vertex_id_new].color == WHITE){
            DFS_Visit(vertex_id_new, vertices, adj);
        }
    }
    
    vertices[vertex_id].color = BLACK;
    schedule.insert(schedule.begin(), vertex_id);    
    globalTime += 1;
    vertices[vertex_id].finishTime = globalTime;
}

// function to get the course schedule
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {        
    // empty course
    if (numCourses==1) {
        vector<int> empty = {0};
        return empty;
    }    
    // generating graph
    map<int, vertex> vertices;      // structures of all vertices
    map<int, vector<int>> adj;      // adjecient edges vector        
    // generating vertex
    for (int course=0; course<numCourses; course++) {
        vertices[course].color = WHITE;
        vertices[course].discoverTime = -1;
        vertices[course].finishTime = -1;
        // add self back-edge. If a vertex has only self back-edge and nothing else, it has no pre-requisite.
        adj[course].push_back(course);
    }
    // generating adjecient edges
    for (int i=0; i<prerequisites.size(); i++){
        int course = prerequisites[i][1];
        int course_link = prerequisites[i][0];
        adj[course].push_back(course_link);
    }    
    // start DFS
    map<int, vector<int>>::iterator itr;
    for (itr=adj.begin(); itr!=adj.end(); itr++){
        int vertex_id = itr->first;
        if (vertices[vertex_id].color == WHITE){
            DFS_Visit(vertex_id, vertices, adj);
        }
    }    
    /* for debug
    showVertex(vertices);           // display vertices' properties
    showMap(adj);                   // display adjecient edges      
    showVector(schedule);
    */
    
    if (cyclic==1){
        vector<int> empty;
        return empty;
    }
    else {      
        return schedule;
    }
}