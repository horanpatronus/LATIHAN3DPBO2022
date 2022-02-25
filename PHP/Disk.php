<?php

/* membuat class */ 
class Disk{

/* deklarasi atribut private */
	private $type = "";
	private $capacity = 0;
	private $price = 0;
	
	/* constructor */
	public function __construct($type = 0, $capacity = 0, $price = 0){
		$this->type = $type;
		$this->capacity = $capacity;
		$this->price = $price;
	}

	/* setter dan getter untuk atribut type */
	public function setType($type){ 
		$this->type = $type;
	}

	public function getType(){
		return $this->type;
	}

	/* setter dan getter untuk atribut capacity */
	public function setCapacity($capacity){ 
		$this->capacity = $capacity;
	}

	public function getCapacity(){
		return $this->capacity;
	}

	/* setter dan getter untuk atribut price */
	public function setPrice($price){ 
		$this->price = $price;
	}

	public function getPrice(){
		return $this->price;
	}

	/* method untuk mencetak output atribut dari class */ 
	public function printDisk(){
		echo "Jenis Disk  : " . $this->type . " " . $this->capacity . " GB" . "<br>";
		echo "Harga       : Rp" . $this->price . "<br>";
		echo "------------------------------------------------------<br>";
	}
}

?>