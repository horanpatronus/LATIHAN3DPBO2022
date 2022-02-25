# membuat class
class Processor():

	# deklarasi atribut private
	__name = ""
	__price = 0

	# constructor
	def __init__(self):
		self.__name = ""
		self.__price = 0

	# setter dan getter untuk atribut name
	def setName(self, name):
		self.__name = name

	def getName(self):
		return self.__name;
	
	# setter dan getter atribut price 
	def setPrice(self, price):
		self.__price = price

	def getPrice(self):
		return self.__price

	# method untuk mencetak output atribut dari class 
	def printProcessor(self):
		print("Processor   : " + self.__name)
		print("Harga       : Rp{}".format(self.__price))
		print("---------------------------------------")