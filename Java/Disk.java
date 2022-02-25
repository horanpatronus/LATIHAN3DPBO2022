/* membuat class */ 
class Disk{

	/* deklarasi atribut private */
	private	String type;
	private int capacity;
	private int price;

	/* constructor */
	public Disk(){}

	public Disk(String type, int capacity, int price){
		this.type = type;
		this.capacity = capacity;
		this.price = price;
	}

	/* setter dan getter untuk atribut type */
	public void setType(String type){ 
		this.type = type;
	}

	public String getType(){
		return this.type;
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
	public void printDisk(){
		System.out.println("Jenis Disk  : " + this.type + " " + this.capacity + " GB");
		System.out.println("Harga       : Rp" + this.price);
		System.out.println("---------------------------------------");
	}
}