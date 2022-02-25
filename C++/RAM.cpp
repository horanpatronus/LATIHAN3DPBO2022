#include <iostream>

using namespace std;

/* membuat class */ 
class RAM{

/* deklarasi atribut private */
private:
	int capacity;
	int price;

/* deklarasi method public */
public:

	/* constructor */
	RAM(){}

	RAM(int capacity, int price){
		this->capacity = capacity;
		this->price = price;
	}

	/* setter dan getter untuk atribut capacity */
	void setCapacity(int capacity){ 
		this->capacity = capacity;
	}

	int getCapacity(){
		return this->capacity;
	}

	/* setter dan getter untuk atribut price */
	void setPrice(int price){ 
		this->price = price;
	}

	int getPrice(){
		return this->price;
	}

	/* method untuk mencetak output atribut dari class */ 
	void printRAM(){
		cout << "RAM         : " << this->capacity << " GB"<< endl;
		cout << "Harga       : Rp" << this->price << endl;
		cout << "---------------------------------------" << endl;
	}

	/* destructor */
	~RAM(){}
};