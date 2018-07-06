gcc -c -fpic ringuuid4.c uuid.c -I $PWD/../../include
gcc -shared -o $PWD/../../lib/libring_uuid4.so ringuuid4.o uuid.o -L $PWD/../../lib -lring -luuid

cp ../../lib/libring_uuid4.so ../../bin/libring_uuid4.so
