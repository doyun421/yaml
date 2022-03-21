# g++ -std=c++17 ~/multipleye/main.cpp -I. -I./usr/local/include/yaml-cpp/include/ -L./usr/local/include/yaml-cpp/include/yaml-cpp -lyaml-cpp -o main
 
#g++ -std=c++11 ~/multipleye/main.cpp -lyaml-cpp -o main

g++ -std=c++17 brief_test.cpp -I./usr/local/include/yaml-cpp/include/ -L./usr/local/include/yaml-cpp/include/yaml-cpp -lyaml-cpp -o brief_test
