#include <iostream>

/* import file */
#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

using namespace std;

/* membuat class */ 
class PC{

/* deklarasi atribut private */
private:
	string name;
	Processor p_obj;
	Disk d_obj;
	RAM r_obj;
	int totalPrice = 0;

/* deklarasi method public */
public:

	/* constructor */
	PC(){}

	PC(string name, Processor p, Disk d, RAM r){
		this->name = name;
		this->p_obj = p;
		this->d_obj = d;
		this->r_obj = r;
	}

	/* setter dan getter untuk atribut name */
	void setName(string name){ 
		this->name = name;
	}

	string getName(){
		return this->name;
	}

	/* setter dan getter untuk class Processor */
	void setProcessor(Processor p){ 
		this->p_obj = p;
	}

	Processor getProcessor(){
		return this->p_obj;
	}

	/* setter dan getter untuk class Disk */
	void setDisk(Disk d){ 
		this->d_obj = d;
	}

	Disk getDisk(){
		return this->d_obj;
	}

	/* setter dan getter untuk class RAM */
	void setRAM(RAM r){ 
		this->r_obj = r;
	}

	RAM getRAM(){
		return this->r_obj;
	}

	/* method untuk menghitung totalPrice */
	int getTotalPrice(){
		this->totalPrice = this->p_obj.getPrice() + this->d_obj.getPrice() + this->r_obj.getPrice();
		return this->totalPrice;
	}

	/* method untuk mencetak output atribut dari class */ 
	void printPC(){
		cout << endl << "Nama Produk : " << this->getName() << endl;
		cout << "---------------------------------------" << endl;
		this->p_obj.printProcessor();
		this->d_obj.printDisk();
		this->r_obj.printRAM();
		cout << "Harga       : Rp" << this->getTotalPrice() << endl;
	}

	/* destructor */
	~PC(){}
};