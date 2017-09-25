#include <stdio.h>
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



void main()
{

	//Contenedor secuencial vector
	std::vector<int> v (4, 500);
	std::vector<int>::iterator itv=v.begin();

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

	//Contenedor secuencial deque

	std::deque<int> d(4, 800);
	std::deque<int>::iterator itd = d.begin();

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

	//Contenedor secuencial list

	std::list<float> l(4, 250.40);
	std::list<float>::iterator itl = l.begin();

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

	//Contenedor asociativo set

	std::set<int> s;
	s.insert(32);
	s.insert(41);
	s.insert(18);
	s.insert(99);
	std::set<int>::iterator its = s.begin();

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


	//Construcciones posibles de todos los contenedore


}