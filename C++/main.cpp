#include <bits/stdc++.h>

using namespace std;

/* import file */
#include "PC.cpp"

int main(){

	/* instansiasi object Processor menggunakan setter */
	Processor processorSpec;
	processorSpec.setName("Intel Core i5-10400F");
	processorSpec.setPrice(13000000);

	/* instansiasi object Disk menggunakan setter */
	Disk diskSpec;	
	diskSpec.setType("SSD");
	diskSpec.setCapacity(512);
	diskSpec.setPrice(1049000);

	/* instansiasi object RAM menggunakan setter */
	RAM RAMSpec;	
	RAMSpec.setCapacity(8);
	RAMSpec.setPrice(770000);

	/* instansiasi object PC menggunakan setter */
	PC anyPC;	
	anyPC.setName("ASUS ROG Stric GT15 G15CK");
	anyPC.setProcessor(processorSpec);
	anyPC.setDisk(diskSpec);
	anyPC.setRAM(RAMSpec);

	/* menampilkan data output */
	anyPC.printPC();

	return 0;
}