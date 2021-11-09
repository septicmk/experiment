all:
	g++ -std=c++11 -o on-rvo RVO.cpp
	g++ -std=c++11 -fno-elide-constructors -o off-rvo RVO.cpp
clean:
	rm -f on-rvo
	rm -f off-rvo
	rm -f test
	rm -f test1
	rm -rf RVO
