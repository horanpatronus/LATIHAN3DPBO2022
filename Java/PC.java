/* membuat class */ 
class PC{

	/* deklarasi atribut private */
	private	String name;
	private Processor p_obj;
	private Disk d_obj;
	private RAM r_obj;
	private int totalPrice = 0;

	/* constructor */
	public PC(){}

	public PC(String name, Processor p, Disk d, RAM r){
		this.name = name;
		this.p_obj = p;
		this.d_obj = d;
		this.r_obj = r;
	}

	/* setter dan getter untuk atribut name */
	public void setName(String name){ 
		this.name = name;
	}

	public String getName(){
		return this.name;
	}

	/* setter dan getter untuk class Processor */
	public void setProcessor(Processor p){ 
		this.p_obj = p;
	}

	public Processor getProcessor(){
		return this.p_obj;
	}

	/* setter dan getter untuk class Disk */
	public void setDisk(Disk d){ 
		this.d_obj = d;
	}

	public Disk getDisk(){
		return this.d_obj;
	}

	/* setter dan getter untuk class RAM */
	public void setRAM(RAM r){ 
		this.r_obj = r;
	}

	public RAM getRAM(){
		return this.r_obj;
	}

	/* method untuk menghitung totalPrice */
	public int getTotalPrice(){
		this.totalPrice = this.p_obj.getPrice() + this.d_obj.getPrice() + this.r_obj.getPrice();
		return this.totalPrice;
	}

	/* method untuk mencetak output atribut dari class */ 
	public void printPC(){
		System.out.println("\nNama Produk : " + this.name);
		System.out.println("---------------------------------------");
		this.p_obj.printProcessor();
		this.d_obj.printDisk();
		this.r_obj.printRAM();
		System.out.println("Harga       : Rp" + this.getTotalPrice());
	}
}