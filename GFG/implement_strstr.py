#Function to locate the occurrence of the string x in the string s.
def strstr(s,x):
    if x in s:
        return s.index(x)
    else:
        
        return -1