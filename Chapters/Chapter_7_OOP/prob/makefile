CXX = g++
CXXFLAGS = -I include -c

LIBFILE = libprint.a
LIBSTEM = print
LIBPATH = .

OBJMAIN = drive_code.o
OBJLIB = card.o
PROG = drive_code

VPATH = src:include

all : $(LIBFILE) $(OBJMAIN)
	$(CXX) $(OBJMAIN) -L$(LIBPATH) -l$(LIBSTEM) -o $(PROG)

$(LIBFILE) : $(OBJLIB)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $^

.PHONY : clean

clean :
	rm *.a *.o $(PROG)
