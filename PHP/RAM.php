<?php

/* membuat class */ 
class RAM{

	/* deklarasi atribut private */
	private	$capacity = 0;
	private $price = 0;

	/* constructor */
	public function __construct($capacity = 0, $price = 0){
		$this->capacity = $capacity;
		$this->price = $price;
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
	public function printRAM(){
		echo "RAM         : " . $this->capacity . " GB<br>";
		echo "Harga       : Rp" . $this->price . "<br>";
		echo "------------------------------------------------------<br>";
	}
}
?>