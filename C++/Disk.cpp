#include <iostream>

using namespace std;

/* membuat class */ 
class Disk{

/* deklarasi atribut private */
private:
	string type;
	int capacity;
	int price;

/* deklarasi method public */
public:
	
	/* constructor */
	Disk(){}

	Disk(string type, int capacity, int price){
		this->type = type;
		this->capacity = capacity;
		this->price = price;
	}

	/* setter dan getter untuk atribut type */
	void setType(string type){ 
		this->type = type;
	}

	string getType(){
		return this->type;
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
	void printDisk(){
		cout << "Jenis Disk  : " << this->type << " " << this->capacity << " GB" << endl;
		cout << "Harga       : Rp" << this->price << endl;
		cout << "---------------------------------------" << endl;
	}

	/* destructor */
	~Disk(){}
};