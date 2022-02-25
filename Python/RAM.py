# membuat class
class RAM():

	# deklarasi atribut private
	__capacity = 0
	__price = 0

	# constructor
	def __init__(self):
		self.__capacity = 0
		self.__price = 0

	# setter dan getter untuk atribut capacity
	def setCapacity(self, capacity):
		self.__capacity = capacity

	def getCapacity(self):
		return self.__capacity

	# setter dan getter untuk atribut price
	def setPrice(self, price): 
		self.__price = price

	def getPrice(self):
		return self.__price

	# method untuk mencetak output atribut dari class 
	def printRAM(self):
		print("RAM         : {} GB".format(self.__capacity))
		print("Harga       : Rp{}".format(self.__price))
		print("---------------------------------------")