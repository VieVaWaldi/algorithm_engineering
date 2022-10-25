CPP = /usr/local/opt/llvm/bin/clang
CPPFLAGS = -I/usr/local/opt/llvm/include -fopenmp
LDFLAGS = -L/usr/local/opt/llvm/lib

hello_slide_13: hello_slide_13.cpp
	$(CPP) $(CPPFLAGS) $^ -o $@ $(LDFLAGS)
