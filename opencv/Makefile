CC = g++
CPPFLAGS = -std=c++11
OPENCV_DYNAMIC = `pkg-config --cflags --libs opencv`

all: opencv_test

opencv_test:
	$(CC) $(CPPFLAGS) $(OPENCV_DYNAMIC) $@.cpp -o $@

clean:
	rm opencv_test
