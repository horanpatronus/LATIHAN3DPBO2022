<?php

/* membuat class */ 
class Processor{

/* deklarasi atribut private */
	private $name = "";
	private $price = 0;

	/* constructor */
	public function __construct($name = "", $price = 0){
		$this->name = $name;
		$this->price = $price;
	}

	/* setter dan getter untuk atribut name */
	public function setName($name){ 
		$this->name = $name;
	}

	public function getName(){
		return $this->name;
	}

	/* setter dan getter atribut price */
	public function setPrice($price){ 
		$this->price = $price;
	}

	public function getPrice(){
		return $this->price;
	}

	/* method untuk mencetak output atribut dari class */ 
	public function printProcessor(){
		echo "Processor   : " . $this->name . "<br>";
		echo "Harga       : Rp" . $this->price . "<br>";
		echo "------------------------------------------------------<br>";
	}
}

?>