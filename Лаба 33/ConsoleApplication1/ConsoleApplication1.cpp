#include<iostream>
#include<string>
#include<vector>
#include <glut.h>
#include <time.h>
#include "Source.cpp"
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	{
		srand(time(0));
		int* result = new int[12];
		int** pa = new int* [20];
		for (int i = 0;i < 20;i++)
			pa[i] = new int[20];
		for (int i = 0; i < 20;i++)
			for (int j = 0;j < 20;j++)
				((int*)pa[i])[j] = -1;
		adjMatrix = pa;
		Graph<string> graph;
		int amountVerts=5, amountEdges=10;string vertex, sourceVertex, targetVertex;int edgeWeight; 
		for (int i = 0; i < amountVerts; ++i) {
			cout << "Вершина: "; cin >> vertex;
			string vertPtr = vertex; 
			graph.InsertVertex(vertPtr);
			cout << endl;
		}
		for (int i = 0; i < 4; i++) {
			for (int j = i+1;j < 5;j++) {
				graph.InsertEdge(graph.vertList[i], graph.vertList[j], (rand() % 9)+1);
			}
		}
		cout << endl;
		graph.Print(); 
		graph.komyvoiash();
		context.graph = graph;
		graph.drawGraph(argc, argv);
	}
	return 0;
}