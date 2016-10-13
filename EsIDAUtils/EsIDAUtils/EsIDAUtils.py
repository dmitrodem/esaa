from firmware_helper import *
from vector_editor import *

vector = vector_editor(vector_descr("test", axis("twat", 0x800000), 0x800000, 10, category="es_fuel_supply"))
vector.show()
print(vector.result)