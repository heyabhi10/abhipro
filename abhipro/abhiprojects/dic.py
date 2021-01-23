dict={'name':'abhi','age':21,'class':'TE'};

print "dict['name']:",dict['name'];
print "dict['age']:",dict['age'];

dict['age']=22;
print"dict['age']:",dict['age'];

del dict['age'];   #ll remove dic with key age
dict.clear();
del dict;


print "dict['age']:",dict['age'];
