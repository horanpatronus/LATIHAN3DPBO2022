#include <iostream>

using namespace std;

/* membuat class */ 
class Processor{

/* deklarasi atribut private */
private:
	string name;
	int price;

/* deklarasi method public */
public:
	
	/* constructor */
	Processor(){}

	Processor(string name, int price){
		this->name = name;
		this->price = price;
	}

	/* setter dan getter untuk atribut name */
	void setName(string name){ 
		this->name = name;
	}

	string getName(){
		return this->name;
	}

	/* setter dan getter atribut price */
	void setPrice(int price){ 
		this->price = price;
	}

	int getPrice(){
		return this->price;
	}

	/* method untuk mencetak output atribut dari class */ 
	void printProcessor(){
		cout << "Processor   : " << this->name << endl;
		cout << "Harga       : Rp" << this->price << endl;
		cout << "---------------------------------------" << endl;
	}

	/* destructor */
	~Processor(){}
};