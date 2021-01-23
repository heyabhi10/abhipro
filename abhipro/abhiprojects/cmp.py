dict1={'name':'abhi','age':21};
dict2={'name':'manish','age':23};
dict3={'name':'abhi','age':23};
dict4={'name':'abhi','age':21};


print"return value :%d" % cmp(dict1,dict2)
print"return value :%d" % cmp(dict2,dict3)
print"return value :%d" % cmp(dict1,dict4)

print"lenth dic=",len(dict1)
print"lenth dic=",len(dict2)
print"lenth dic=",len(dict3)
print"lenth dic=",len(dict4)
