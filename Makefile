CFLAGS=-mthreads -O0 -w -Wno-invalid-offsetof -Wformat -g
CPPFLAGS=
STRUCTS_HEADERS=$(wildcard Structs/*.h)
STRUCTS_IMPL=$(wildcard Structs/*.cpp)

# all:main.exe
obj/%.o: %.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $< -o obj/$@
%.o : %.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $< -o obj/$@
OBJS=$(wildcard objs/*.o)
main.exe: main.cpp $(OBJS)
	g++ $(CFLAGS) -o $@ $<