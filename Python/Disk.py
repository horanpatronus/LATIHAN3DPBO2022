# membuat class
class Disk():

	# deklarasi atribut private
	__tipe = ""
	__capacity = 0
	__price = 0
	
	# constructor 
	def __init__(self):
		self.__tipe = ""
		self.__capacity = 0
		self.__price = 0

	# setter dan getter untuk atribut type
	def setType(self, tipe):
		self.__tipe = tipe

	def getType(self):
		return self.__tipe

	# setter dan getter untuk atribut capacity
	def setCapacity(self, capacity):
		self.__capacity = capacity

	def getCapacity(self):
		return self.__capacity

	# setter dan getter untuk atribut price
	def setPrice(self, price):
		self.__price = price

	def getPrice(self):
		return self.__price;
	
	# method untuk mencetak output atribut dari class 
	def printDisk(self):
		print("Jenis Disk  : {} {} GB".format(self.__tipe, self.__capacity))
		print("Harga       : Rp{}".format(self.__price))
		print("---------------------------------------")