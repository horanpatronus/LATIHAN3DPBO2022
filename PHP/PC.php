<?php

/* membuat class */ 
class PC{

/* deklarasi atribut private */
	private $name = "";
	private $Processor;
	private $Disk;
	private $RAM;
	private $totalPrice = 0;

	/* constructor */
	public function __construct($name = ""){
		$this->name = $name;
		$this->Processor = new Processor();
		$this->Disk = new Disk();
		$this->RAM = new RAM();
	}

	/* setter dan getter untuk atribut name */
	public function setName($name){ 
		$this->name = $name;
	}

	public function getName(){
		return $this->name;
	}

	/* setter dan getter untuk class Processor */
	public function setProcessor($Processor){ 
		$this->Processor = $Processor;
	}

	public function getProcessor(){
		return $this->Processor;
	}

	/* setter dan getter untuk class Disk */
	public function setDisk($Disk){ 
		$this->Disk = $Disk;
	}

	public function getDisk(){
		return $this->Disk;
	}

	/* setter dan getter untuk class RAM */
	public function setRAM($RAM){ 
		$this->RAM = $RAM;
	}

	public function getRAM(){
		return $this->RAM;
	}

	/* method untuk menghitung totalPrice */
	public function getTotalPrice(){
		$this->totalPrice = $this->Processor->getPrice() + $this->Disk->getPrice() + $this->RAM->getPrice();
		return $this->totalPrice;
	}

	/* method untuk mencetak output atribut dari class */ 
	public function printPC(){
		echo "<br>Nama PC     : " . $this->getName() . "<br>";
		echo "------------------------------------------------------<br>";
		$this->Processor->printProcessor();
		$this->Disk->printDisk();
		$this->RAM->printRAM();
		echo "Harga PC    : Rp" . $this->getTotalPrice();
		
	}
}

?>