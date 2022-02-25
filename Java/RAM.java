/* membuat class */ 
class RAM{

	/* deklarasi atribut private */
	private	int capacity;
	private int price;

	/* constructor */
	public RAM(){}

	public RAM(int capacity, int price){
		this.capacity = capacity;
		this.price = price;
	}

	/* setter dan getter untuk atribut capacity */
	public void setCapacity(int capacity){ 
		this.capacity = capacity;
	}

	public int getCapacity(){
		return this.capacity;
	}

	/* setter dan getter untuk atribut price */
	public void setPrice(int price){ 
		this.price = price;
	}

	public int getPrice(){
		return this.price;
	}

	/* method untuk mencetak output atribut dari class */ 
	public void printRAM(){
		System.out.println("RAM         : " + this.capacity + " GB");
		System.out.println("Harga       : Rp" + this.price);
		System.out.println("---------------------------------------");
	}
}