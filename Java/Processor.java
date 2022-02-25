/* membuat class */ 
class Processor{

	/* deklarasi atribut private */
	private	String name;
	private int price;

	/* constructor */
	public Processor(){}

	public Processor(String name, int price){
		this.name = name;
		this.price = price;
	}

	/* setter dan getter untuk atribut name */
	public void setName(String name){ 
		this.name = name;
	}

	public String getName(){
		return this.name;
	}

	/* setter dan getter untuk atribut price */
	public void setPrice(int price){ 
		this.price = price;
	}

	public int getPrice(){
		return this.price;
	}

	/* method untuk mencetak output atribut dari class */ 
	public void printProcessor(){
		System.out.println("Processor   : " + this.name);
		System.out.println("Harga       : Rp" + this.price);
		System.out.println("---------------------------------------");
	}
}