# import file 
from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

# instansiasi object Processor menggunakan setter
processorSpec = Processor()
processorSpec.setName("Intel Core i5-10400F")
processorSpec.setPrice(13000000)

# instansiasi object Disk menggunakan setter
diskSpec = Disk()
diskSpec.setType("SSD")
diskSpec.setCapacity(512)
diskSpec.setPrice(1049000)

# instansiasi object RAM menggunakan setter
RAMSpec = RAM()
RAMSpec.setCapacity(8)
RAMSpec.setPrice(770000)

# instansiasi object PC menggunakan setter
anyPC = PC()
anyPC.setName("ASUS ROG Stric GT15 G15CK")
anyPC.setProcessor(processorSpec)
anyPC.setDisk(diskSpec)
anyPC.setRAM(RAMSpec)

# menampilkan data output
anyPC.printPC()