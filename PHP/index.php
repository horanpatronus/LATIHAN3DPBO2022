<?php

/* import file class */
require "Processor.php";
require "Disk.php";
require "RAM.php";
require "PC.php";

/* instansiasi object Processor menggunakan setter */
$processorSpec = new Processor(); 
$processorSpec->setName("Intel Core i5-10400F");
$processorSpec->setPrice(13000000);

/* instansiasi object Disk menggunakan setter */
$diskSpec = new Disk();	
$diskSpec->setType("SSD");
$diskSpec->setCapacity(512);
$diskSpec->setPrice(1049000);

/* instansiasi object RAM menggunakan setter */
$RAMSpec = new RAM();	
$RAMSpec->setCapacity(8);
$RAMSpec->setPrice(770000);

/* instansiasi object PC menggunakan setter */
$anyPC = new PC();	
$anyPC->setName("ASUS ROG Stric GT15 G15CK");
$anyPC->setProcessor($processorSpec);
$anyPC->setDisk($diskSpec);
$anyPC->setRAM($RAMSpec);

/* menampilkan data output */
$anyPC->printPC();

?>