CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 -std=c++11
OBJS =	point_vector.o main.o
LIBS =
TARGET =		main
$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)
all:	$(TARGET)

clean:
		rm -f $(OBJS) $(TARGET)
run:	$(TARGET)
		./$(TARGET)
