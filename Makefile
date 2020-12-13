#https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html
#set LD_LIBRARY_PATH=$HOME/libs/utils:$LD_LIBRARY_PATH


#LIBDIR=${HOME}/libs
LIBDIR=/usr/local/lib

utilz:
	echo "... building libutilz.so library..."
	gcc  -I./ ${COMMONFLAGS} -fPIC -c utilz.c -o utilz.o
	gcc -shared -o libutilz.so utilz.o
	sudo mv libutilz.so ${LIBDIR}
	rm -rf utilz.o a.out
	file ${LIBDIR}/libutilz.so
	echo "libutilz.so is in ${LIBDIR}..."
	echo "set your LD_LIBRARY_PATH var..."

