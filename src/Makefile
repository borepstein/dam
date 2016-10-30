dam:
	gcc -shared -L`pwd` -I ../include/  -o DAMInstance.so DAMInstance.cpp
	gcc -shared -L`pwd` -I ../include/  -o DBLocator.so DBLocator.cpp
	gcc -L`pwd` -shared -fPIC -I ../include/  -o dam dam.cpp -lc DAMInstance.so -lc DBLocator.so
