#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <forward_list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

struct compararmap {
	bool operator() (const char& menor, const char& mayor) const
	{
		return menor<mayor;
	}
};

struct compararset {
	bool operator() (const int& menor, const int& mayor) const
	{
		return menor<mayor;
	}
};

bool cFuncioncomparar(char menor, char mayor) { return menor<mayor; }
bool iFuncioncomparar(int menor, int mayor) { return menor<mayor; }

void main()
{

	//Contenedor secuencial vector
	std::vector<int> v (4, 500);
	std::vector<int>::iterator itv=v.begin();
	std::vector<int>::reverse_iterator ritv = v.rbegin();

	std::cout << "Recorrer el vector de ints:" << std::endl;

	while (itv != v.end())
	{
		std::cout << *itv << std::endl;
		itv++;
	}

	std::cout << std::endl;

	itv = v.end();
	while (itv != v.begin())
	{
		itv--;
		std::cout << *itv << std::endl;
		
	}

	std::cout << std::endl;

	while (ritv != v.rend())
	{
		std::cout << *ritv << std::endl;
		ritv++;
	}

	std::cout << std::endl;

	//Contenedor secuencial deque

	std::deque<int> d(4, 800);
	std::deque<int>::iterator itd = d.begin();
	std::deque<int>::reverse_iterator ritd = d.rbegin();

	std::cout << "Recorrer la deque de ints:" << std::endl;

	while (itd != d.end())
	{
		std::cout << *itd << std::endl;
		itd++;
	}

	std::cout << std::endl;

	itd = d.end();
	while (itd != d.begin())
	{
		itd--;
		std::cout << *itd << std::endl;
	}

	std::cout << std::endl;

	while (ritd != d.rend())
	{
		std::cout << *ritd << std::endl;
		ritd++;
	}

	std::cout << std::endl;

	//Contenedor secuencial list

	std::list<float> l(4, 250.40);
	std::list<float>::iterator itl = l.begin();
	std::list<float>::reverse_iterator ritl = l.rbegin();

	std::cout << "Recorrer la list de floats:" << std::endl;

	while (itl != l.end())
	{
		std::cout << *itl << std::endl;
		itl++;
	}

	std::cout << std::endl;

	itl = l.end();
	while (itl != l.begin())
	{
		itl--;
		std::cout << *itl << std::endl;
	}

	std::cout << std::endl;

	while (ritl != l.rend())
	{
		std::cout << *ritl << std::endl;
		ritl++;
	}

	std::cout << std::endl;

	//Contenedor secuencial forward_list

	std::forward_list<std::string> fl(5, "No tengo perro");
	std::forward_list<std::string>::iterator itfl = fl.begin();

	std::cout << "Recorrer la forward_list de strings:" << std::endl;

	while (itfl != fl.end())
	{
		std::cout << *itfl << std::endl;
		itfl++;
	}

	std::cout << std::endl;

	//Contenedor asociativo map
	std::map<int, std::string> m;
	m[1] = "George";
	m[2] = "Cait";
	m[3] = "Chloe";
	m[4] = "Matt";

	std::map<int, std::string>::iterator itm=m.begin();
	std::map<int, std::string>::reverse_iterator ritm = m.rbegin();

	std::cout << "Recorrer el mapa de ints y strings:" << std::endl;

	while (itm != m.end())
	{
		std::cout << itm->first << "-" << itm->second << std::endl;
		itm++;
	}

	std::cout << std::endl;

	itm = m.end();
	while (itm != m.begin())
	{
		itm--;
		std::cout << itm->first << "-" << itm->second << std::endl;
	}

	std::cout << std::endl;

	while (ritm != m.rend())
	{
		std::cout << ritm->first << "-" << ritm->second << std::endl;
		ritm++;
	}

	std::cout << std::endl;

	//Contenedor asociativo set

	std::set<int> s;
	s.insert(32);
	s.insert(41);
	s.insert(18);
	s.insert(99);
	std::set<int>::iterator its = s.begin();
	std::set<int>::reverse_iterator rits = s.rbegin();

	std::cout << "Recorrer el set de ints:" << std::endl;

	while (its != s.end())
	{
		std::cout << *its << std::endl;
		its++;
	}

	std::cout << std::endl;

	its = s.end();
	while (its != s.begin())
	{
		its--;
		std::cout << *its << std::endl;
	}

	std::cout << std::endl;

	while (rits != s.rend())
	{
		std::cout << *rits << std::endl;
		rits++;
	}

	std::cout << std::endl;


	//Construcciones posibles de todos los contenedore

	//Constructores de vector
	std::vector<int> v1;                                
	std::vector<int> v2(5, 145);                       
	std::vector<int> v3(v2.begin(), v2.end());  
	std::vector<int> v4(v3);

	int x[] = { 15,16,17,4,8,99,54,47 };
	std::vector<int> v5(x, x + sizeof(x) / sizeof(int));

	//Constructores de deque
	std::deque<int> deq1;                                
	std::deque<int> deq2(5, 145);                       
	std::deque<int> deq3(deq2.begin(), deq2.end());  
	std::deque<int> deq4(deq3);                       

	int x2[] = { 15,16,17,4,8,99,54,47 };
	std::deque<int> deq5(x2, x2 + sizeof(x2) / sizeof(int));

	//Constructores de queue
	std::queue<int> q1;
	std::deque<int> q2(5, 145);
	std::queue<int> q3(q2);

	//Constructores de priority_queue
	int x3[] = { 15,16,17,4,8,99,54,47 };

	std::priority_queue<int> pq1;
	std::priority_queue<int> pq2(x3, x3 + 8);

	//Constructores de stack
	std::stack<int> stack1;
	std::deque<int> stack2(deq2);

	//Constructores de list
	std::list<int> list1;                               
	std::list<int> list2(5, 145);                       
	std::list<int> list3(list2.begin(), list2.end());  
	std::list<int> list4(list3);                       

	int x4[] = { 15,16,17,4,8,99,54,47 };
	std::list<int> list5(x4, x4 + sizeof(x4) / sizeof(int));

	//Constructores de forward_list
	std::forward_list<int> flist1;                      
	std::forward_list<int> flist2(5, 145);              
	std::forward_list<int> flist3(flist2.begin(), flist2.end()); 
	std::forward_list<int> flist4(flist3);            
	std::forward_list<int> flist5(std::move(flist4));  
	std::forward_list<int> flist6 = { 15,16,17,4,8,99,54,47 };

	//Constructores de map
	std::map<char, int> map1;
	map1['A'] = 1;
	map1['B'] = 2;
	map1['C'] = 3;
	map1['D'] = 4;
	std::map<char, int> map2(map1.begin(), map1.end());
	std::map<char, int> map3(map2);

	std::map<char, int, compararmap> map4;                 

	bool(*cpuntero)(char, char) = cFuncioncomparar;
	std::map<char, int, bool(*)(char, char)> map5(cpuntero);

	//Constructores de set
	std::set<int> set1;                           
	int x5[] = { 15,16,17,4,8,99,54,47 };
	std::set<int> set2(x5, x5 + 5);        
	std::set<int> set3(set2);                  
	std::set<int> set4(set2.begin(), set2.end());  

	std::set<int, compararset> fifth;                 

	bool(*ipuntero)(int, int) = iFuncioncomparar;
	std::set<int, bool(*)(int, int)> set6(ipuntero);
}