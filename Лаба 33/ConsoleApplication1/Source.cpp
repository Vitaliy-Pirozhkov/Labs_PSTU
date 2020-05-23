#include <glut.h>
#include <iostream>
#include<vector>
#include <string>
using namespace std;
const int maxSize = 10;
template<class T>
class  Graph
{
	friend void display();
public:
	vector<string> vertList;
public:
	Graph();
	~Graph();
	int GetVertPos(const T);
	bool IsEmpty();
	bool IsFull();
	int GetAmountVerts();
	int GetAmountEdges();
	int GetWeight(const T, const T);
	vector<T> GetNbrs(const T);
	void InsertVertex(const T);
	void InsertEdge(const T, const T, int);
	void Print();
	void komyvoiash();
	void drawGraph(int argc, char** argv);
};
extern int** adjMatrix;
struct ContextStruct {
	Graph<string> graph;
};
 ContextStruct context;
extern struct point {
	int x, y;
	point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};
extern vector<point> coords;
struct peredachia
{
	int first;
	int second;
};
template<class T>
Graph<T>::Graph() { 
	
}
template<class T>
Graph<T>::~Graph() {

}
template<class T>
int Graph<T>::GetVertPos(const T vertex) {
	for (int i = 0; i < this->vertList.size(); ++i) {
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}
template<class T>
bool Graph<T>::IsEmpty() {
	if (this->vertList.size() != 0)
		return false;
	else
		return true;
}
template<class T>
bool Graph<T>::IsFull() {
	return (vertList.size() == maxSize);
}
template<class T>
int Graph<T>::GetAmountVerts() {
	return this->vertList.size();
}
template<class T>
int Graph<T>::GetAmountEdges() {
	int amount = 0; // обнуляем счетчик
	if (!this->IsEmpty()) { // проверяем, что граф не пуст
		for (int i = 0, vertListSize = this->vertList.size();
			i < vertListSize; ++i) {
			for (int j = 0; j < vertListSize; ++j) {
				if (this->adjMatrix[i][j] ==
					this->adjMatrix[j][i] &&
					this->adjMatrix[i][j] != 0) // находим рёбра
					amount += 1; // считаем количество рёбер
			}
		}
		return (amount / 2); // приводим счетчик к корректному результату и возвращаем его
	}
	else
		return 0; // если граф пуст, возвращаем 0
}
template<class T>
int Graph<T>::GetWeight(const T vertex1, const T vertex2) {
	if (!this->IsEmpty()) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return adjMatrix[vertPos1][vertPos2];
	}
	return 0;
}
template<class T>
vector<T> Graph<T>::GetNbrs(const T vertex) {
	std::vector<T> nbrsList; // создание списка соседей
	int vertPos = this->GetVertPos(vertex); // вычисление позиции vertex в матрице смежности
	if (vertPos != (-1)) {
		//проверка, что vertex есть в матрице смежности
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			if (this->adjMatrix[vertPos][i] != 0 &&
				this->adjMatrix[i][vertPos] != 0) // вычисление соседей

				nbrsList.push_back(this->vertList[i]); //запись соседей в вектор

		}
	}
	return nbrsList;// возврат списка соседей
}
template<class T>
void Graph<T>::InsertVertex(const T vertex) {
	if (!this->IsFull()) {
		this->vertList.push_back(vertex);
	}
	else {
		cout << "Граф уже заполнен. Невозможно добавить новую вершину " << endl;
		return;
	}
}
template<class T>
void Graph<T>::InsertEdge(const T vertex1, const T vertex2, int weight) {
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
			adjMatrix[vertPos1][vertPos2] = weight;
			adjMatrix[vertPos2][vertPos1] = weight;
	}
	else {
		cout << "Обеих вершин (или одной из них) нет в графе " << endl;
		return;
	}
}
template<class T>
void Graph<T>::Print() {
	if (!this->IsEmpty()) {
		cout << "Матрица смежности графа: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
			//cout << this->vertList[i] << " ";
			for (int j = 0; j < vertListSize; ++j) {
				cout << "       " << adjMatrix[i][j] << "     ";
			}
			cout << endl;
		}
	}
	else {
		cout << "Граф пуст " << endl;
	}
}

inline void redstr(int** temp1) 
{
	for (int  i= 0; i < 5; i++)
	{
		int minimum = 50;
		for (int j = 0; j < 5; j++)
			if ((temp1[i][j] < minimum) && (temp1[i][j] >= 0))
				minimum = temp1[i][j];
		for (int j = 0; j < 5; j++)
			if (temp1[i][j] != -1)
				temp1[i][j] -= minimum;
	}
};
inline void redsto(int** temp2) 
{
	for (int j = 0; j < 5; j++) 
	{
		int minimum = 50; 
		for (int i = 0; i < 5; i++) 
			if ((temp2[i][j] < minimum) && (temp2[i][j] >= 0)) 
				minimum = temp2[i][j]; 
		for (int i = 0; i < 5; i++) 
			if (temp2[i][j] != -1)
				temp2[i][j] -= minimum; 
	}
};
inline int null_redstr(int** temp, int n, int prov) 
{
	int min = 50; 
	for (int j = 0; j < 5; j++) 
		if (j != prov) 
			if ((min > temp[n][j]) && (temp[n][j] >= 0)) 
				min = temp[n][j]; 
	return min; 
};
inline int null_redsto(int** temp, int prov, int n) 
{
	int min = 50; 
	for (int i = 0; i < 5; i++) 
		if (i != prov) 
			if ((temp[i][n] < min) && (temp[i][n] >= 0)) 
				min = temp[i][n];
	return min;
};

inline peredachia clear(int** mod) 
{
	peredachia temp;
	int max = -1, a = 0, b = 0; 
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (mod[i][j] == 0){
				int sum = null_redstr(mod, i, j) + null_redsto(mod, j, i);
				if (sum >= max){
					max = sum;
					a = i;
					b = j;
				}
			}
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++){
			if (i == a) mod[i][j] = -1;
			if (j == b) mod[i][j] = -1;
		}
	temp.first = a;
	temp.second = b;
	return temp;
};
template <class T>
void Graph<T>::komyvoiash()
{
	setlocale(LC_ALL, "rus");
	string rezult;
	vector<peredachia>mod;
	int** temp = new int* [5]; 
	for (int i = 0; i < 5; i++) temp[i] = new int[5];

	for (int i = 0; i < 5; i++) 
		for (int j = 0; j < 5; j++)
			temp[i][j] = adjMatrix[i][j];

	int i = 0;
	while (i != 3) 
	{
		redstr(temp);
		cout  << " Матрица с редуцированными строками"<<endl<<endl;
		for (int i = 0; i < 5; i++) 
		{
			for (int j = 0; j < 5; j++)
				if (temp[i][j] == -1)
					cout << "x" << "    ";
				else
				cout << temp[i][j] << "    ";
			cout << endl;
		}
	redsto(temp);
		cout  << " Матрица с редуцированными столбцами"<<endl<<endl;
		for (int i = 0; i < 5; i++) 
		{
			for (int j = 0; j < 5; j++)
				if (temp[i][j] == -1)
					cout << "x" << "    ";
				else
				cout << temp[i][j] << "    ";
			cout << endl;
		}
	mod.push_back(clear(temp));
		cout  << " Полученная после изменения матрица"<<endl<<endl;
		for (int i = 0; i < 5; i++) 
		{
			for (int j = 0; j < 5; j++)
				if (temp[i][j] == -1)
					cout << "x" << "    ";
				else
				cout << temp[i][j] << "    ";
			cout << endl;
		}
		i++;
	}
	for (int i = 1; i < mod.size(); i++)
		for (int j = i; j < mod.size(); j++)
			if (mod[i].first == mod[j].second) std::swap(mod[i], mod[j]);
	rezult += this->vertList[mod[0].first] + " ---> " + this->vertList[mod[0].second] + " ---> ";
	for (int i = 1; i < mod.size(); i++)
	{
		if (mod[i - 1].second != mod[i].first) rezult += this->vertList[mod[i].first] + " ---> " + this->vertList[mod[i].second] + " ---> ";
		else rezult += this->vertList[mod[i].second] + " ---> ";
	}
	rezult += this->vertList[mod[0].first];
	cout << endl << rezult;

	int a = adjMatrix[mod[i - 1].second][mod[0].first];
	a += adjMatrix[mod[0].first][mod[0].second];

	for (int i = 1; i < mod.size(); i++)
		a+= adjMatrix[mod[i].first][mod[i].second];

	for (int i = 0; i < mod.size() - 1; i++)
		if (mod[i].second != mod[i + 1].first)
			a += adjMatrix[mod[i].second][mod[i + 1].first];

	cout << "\nОбщее расстояние: " << a << '\n';
}

inline void Coords() {
	point p1(405, 135), p2(135, 337.5), p3(135,742.5), p4(405, 945), p5(675, 540);
	coords.push_back(p1);
	coords.push_back(p2);
	coords.push_back(p3);
	coords.push_back(p4);
	coords.push_back(p5);
	
}
inline void drawCircle(int x1, int y1, int R) {
	float x, y;
	glColor4f(0.0, 0.0, 1.0, 0.0);//цвет кругов
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (int j = 1; j <= R; j++) {
		for (int t = 0; t <= 360; t++) {
			x = j * sin(t) + x1;
			y = j * cos(t) + y1;
			glVertex2f(x, y);
		}
	}
	glEnd();
}
inline static void drawLine(int x1, int y1, int x2, int y2) {
	double u = atan2((x2 - x1), (y2 - y1));
	//линия
	u += 1.576;
	glColor3f(0.0, 1.0, 1.0);//цвет стрелок
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
}
inline void drawText(string text, int text_x, int text_y, int R) {
	void* font = GLUT_STROKE_ROMAN;
	glColor3f(1.0, 0.0, 0.0);//цвет текста
	glPushMatrix();
	glTranslatef(text_x - R / 2, text_y - R / 2, 0.0);
	char* s1 = new char[text.size() + 1];
	for (int i = 0; i < text.size(); i++) {
		s1[i] = text.at(i);
	}
	char* c;
	int max_char_width = 0;
	int char_width = 0;
	for (c = s1; *c != '\0'; c++) {
		char_width = glutStrokeWidth(font, *c);
		if (max_char_width < char_width) max_char_width = char_width;
	}
	float expand_x = (float)R / (float)(100);
	float expand_y = (float)R / (float)(100);
	glScalef(expand_x, expand_y, 1.0);
	for (c = s1; *c != '\0'; c++)
		glutStrokeCharacter(font, *c);
	glPopMatrix();
}
inline void drawWeight(int x1, int y1, int x2, int y2, int key) {
	int x = (x1 + x2) / 2;
	int y = (y1 + y2) / 2;
	glColor3f(1, 1, 1);
	drawText(to_string(key), x, y, 30);
}
template <class T>
inline void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.1, 0.1, 0.1, 1);//цвет фона
	for (int i = 0; i < context.graph.vertList.size(); ++i) {
		for (int j = 0; j < context.graph.vertList.size(); ++j) {
			if (adjMatrix[i][j]) {
				drawLine(coords[i].y, coords[i].x, coords[j].y, coords[j].x);
			}
		}
	}
	for (int i = 0; i < context.graph.vertList.size(); ++i) {
		for (int j = 0; j < context.graph.vertList.size(); ++j) {
			if (adjMatrix[i][j]) {
				if (adjMatrix[i][j] > 0) {
					drawWeight(coords[i].y, coords[i].x, coords[j].y, coords[j].x, adjMatrix[i][j]);
				}
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		drawCircle(coords[i].y, coords[i].x, 75);
		drawText(context.graph.vertList[i], coords[i].y-25, coords[i].x, 50);
	}
	glutSwapBuffers();
}
inline static void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLsizei)w, 0, (GLsizei)h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutPostRedisplay();
}
template <class T>
void Graph<T>::drawGraph(int argc, char** argv) {

	context.graph = *this;
	Coords();


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("The Graph");

	// регистрация обратных вызовов
	glutDisplayFunc(display<T>);
	glutReshapeFunc(reshape);

	// Основной цикл GLUT
	glutMainLoop();

}