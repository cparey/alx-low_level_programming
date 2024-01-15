import os
import random
import ctypes

# Get the absolute path of the current script
script_path = os.path.dirname(os.path.abspath(__file__))

# Load the shared object file using the absolute path
cops = ctypes.CDLL(os.path.join(script_path, 'liball.so'))

# Random integers for testing
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call functions from the shared object file
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
