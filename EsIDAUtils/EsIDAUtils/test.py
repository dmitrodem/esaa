from firmware_helper import *

fh = firmware_helper()
axis = fh.axis["twat"]

print(axis.eval(40))
str =json.dumps(calibr_categories)

