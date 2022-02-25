# import file 
from Processor import Processor
from Disk import Disk
from RAM import RAM

# membuat class
class PC():

	# deklarasi atribut private
	__name = ""
	__p_obj = Processor()
	__d_obj = Disk()
	__r_obj = RAM() 
	__totalPrice = 0

	# constructor 
	def __init__(self):
		self.__name = ""
		self.__p_obj = Processor()
		self.__d_obj = Disk()
		self.__r_obj = RAM()

	# setter dan getter untuk atribut name
	def setName(self, name):
		self.__name = name

	def getName(self):
		return self.__name

	# setter dan getter untuk class Processor 
	def setProcessor(self, __p_obj):
		self.__p_obj = __p_obj

	def getProcessor(self):
		return self.__p_obj

	# setter dan getter untuk class Disk
	def setDisk(self, __d_obj):
		self.__d_obj = __d_obj

	def getDisk(self):
		return self.__d_obj

	# setter dan getter untuk class RAM
	def setRAM(self, __r_obj):
		self.__r_obj = __r_obj

	def getRAM(self):
		return self.__r_obj

	# method untuk menghitung totalPrice 
	def getTotalPrice(self):
		self.__totalPrice = self.__p_obj.getPrice() + self.__d_obj.getPrice() + self.__r_obj.getPrice()
		return self.__totalPrice

	# method untuk mencetak output atribut dari class 
	def printPC(self):
		print("Nama Produk : " + self.getName())
		print("---------------------------------------")
		self.__p_obj.printProcessor()
		self.__d_obj.printDisk()
		self.__r_obj.printRAM()
		print("Harga       : Rp{}".format(self.getTotalPrice()))