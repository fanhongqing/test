scl enable devtoolset-9 bash
#https://blog.csdn.net/Zero_S_Qiu/article/details/90665706

#g++ -o main main.cpp -L/usr/local/lib -lglog -lfolly -lpthread -ldl -lfmt --std=c++14
g++ -o main main.cpp -L/usr/local/lib -lglog -lfolly -lpthread -ldl -lfmt -lgflags --std=c++14
