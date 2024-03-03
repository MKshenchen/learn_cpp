# compile
run ```make``` to compile

# cin: test_cin
read data and assignment to variable,
ignore symbol of end(like blank, enter or tab).
if the input data is of the wrong type, 
then will causes input stream to be disabled,
and should use cin.clear() to fix.

# cin.get: test_cin_get
read a char, not ignore symbol of end,
that mean will accept a blank or enter.

# cin.getline: test_cin_getline
read a line char.
(have limit of count)
and should using cin.clear() after cin.getline.
cuz input stream is set an invalid state.

# getline: test_getline
ps: need import <string>
read a line char and assignment  to a string.

# 资料来源地址:
https://blog.csdn.net/wateryouyo/article/details/60874005
