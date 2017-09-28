#include <iostream>
#include <vector>
#include <string>

//Function template
template <typename T, int x = 1>
void fExample(T a)
{
	//Que coño hacemos aqui way
	std::cout /*<< "Este es mi tipo de dato: " << T*/ << " Este es mi valor: " << a << " , con el valor : " << x << std::endl;
}

//Class template
template <typename T1, typename T2> class cExample2 
{
public:
	std::vector<T1> aV;
	T2 x;						//?????
	
};

//Struct template
template <typename T> struct node 
{
	T info;
	node *next;				//this->*next?????
};

//Función 2 convertida en template
template<typename T>
void swapValues(T & v1, T & v2)
{
	T temp = v1;
	v1 = v2;
	v2 = temp;
}


template<typename T> struct nodoq {
	T info;
	nodoq *next;
};
template<typename T> class SuperQueue
{
public:
	nodoq<T> *last;
	nodoq<T> *first;
	int tam;

	SuperQueue() :
		last(nullptr),
		first(nullptr),
		tam(0)
	{
	}
	
	SuperQueue(SuperQueue &q) :
		this->last(q.last),
		this->first(q.first),
		this->tam(q.tam)
	{
	}

	~SuperQueue() {
		while (tam > 0)
		{
			this->pop();
		}
	}

	void push(T a)
	{
		nodoq<T> *nodo=new nodoq<T>;
		nodo->info = a;
		nodo->next = nullptr;
		if (last != nullptr)
		{
			last->next = nodo;
		}
		else
		{
			first = nodo;
		}

		last = nodo;
		tam++;

	}
	void pop()
	{
		if (tam > 0)
		{
			nodoq<T> *aux = first->next;
			delete first;
			first = aux;
			tam--;
		}
	}
	int size()
	{
		return tam;
	}
};

int main()
{
	
	//Probamos la llamada a la function template
	std::string cadena = "En lo oscuro y al tanteo no hay culo feo";
	float numero = 7.14;
	
	fExample<std::string>(cadena);
	fExample<float, 5>(numero);

	std::cout << std::endl;

	//Probamos la instanciación de la class template
	std::vector<std::string> v1;
	v1.push_back("Hola");
	v1.push_back("Hello");
	v1.push_back("Salut");
	v1.push_back("Halo");
	v1.push_back("Privet");
	cExample2<std::string, int> c1;
	c1.aV = v1;
	c1.x = 7;

	std::cout << "En mi clase hay un vector con valores: ";
	std::vector<std::string>::iterator it = c1.aV.begin();
	while (it != c1.aV.end())
	{
		std::cout << *it;
		it++;
		if (it != c1.aV.end())
			std::cout << " / ";
	}
	std::cout << " , y el otro argumento es: " << c1.x << std::endl;

	std::cout << std::endl;

	//Probamos las struct template
	node<std::string> n1;
	node<int> n2;

	n1.info = "Mas vale ward en la mano que gank en el ano";
	n1.next = &n1;

	n2.info = 69;
	n2.next = &n2;

	std::cout << n1.next->info << std::endl;
	std::cout << n2.next->info << std::endl;

	std::cout << std::endl;

	//Convertimos la funcion en function template, probando

	std::string aux1= "Ash: Im rushing caviera alone";
	std::string aux2= "Ela: gg get rekt noob ez 24/7 get cancer buy a brain, bronzzze";
	
	std::cout << aux1 << " //// " << aux2 << std::endl;

	swapValues<std::string>(aux1, aux2);

	std::cout << aux1 << " //// " << aux2 << std::endl;

	int num1 = 4;
	int num2 = 22;

	std::cout << num1 << " //// " << num2 << std::endl;

	swapValues<int>(num1, num2);

	std::cout << num1 << " //// " << num2 << std::endl;


	SuperQueue<std::string> *q1 = new SuperQueue<std::string>();
	q1->push("Halo");
	q1->push("Hello");
	q1->push("Aloha");
	q1->pop();

	std::cout << q1->first->info << std::endl;
	std::cout << q1->size() << std::endl;

	return 0;
}