import math

# 1.
def findElement(input_string, index):
    return input_string[index]

# 2.
def concatStrings(string1, string2):
    return string1 + string2

# 3.
def divideString(input_string):
    half_length = int(len(input_string) / 2)
    return input_string[0:half_length]

# 4.
def findSubstring(string1, string2):
    return string2 in string1

# Test code
inputString1 = "This is a test string"
inputString2 = "...it tests your functions"
inputString3 = "functions"

print(findElement(inputString1, 0))
print(concatStrings(inputString1, inputString2))
print(divideString(inputString1))
print(findSubstring(inputString2, inputString3))
print(findSubstring(inputString1, inputString3))
