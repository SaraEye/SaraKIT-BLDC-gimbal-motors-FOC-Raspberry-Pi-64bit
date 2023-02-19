SHELL = /bin/sh


OBJDIR := .obj
DEPDIR := .dep
SRCDIR := 

CPP_SOURCES = 	gimbals.cpp \
	lib/SaraKIT/devices.cpp
	
C_SOURCES =	

CFLAGS = -Wl,--no-as-needed -fexceptions -fpermissive -fopenmp -pthread -O3 -mcpu=cortex-a72 -mtune=cortex-a72 -Wno-psabi

CC = g++
INCLUDES = -I/opt/vc/include \
	-I./lib
	
LIBS =-lpthread \
	-lrt \
	-lwiringPi \
	-lcrypt

SLIBS=

DEPFLAGS = -MT $@ -MMD -MP -MF  $(DEPDIR)/$*.d 

SOURCES=$(CPP_SOURCES) $(C_SOURCES)
OBJECTS=$(CPP_SOURCES:.cpp=.o) $(C_SOURCES:.c=.o)

mkdirs = $(shell mkdir -p   $(DEPDIR)/$(dir $(path)) $(OBJDIR)/$(dir $(path)))
$(foreach path,$(SOURCES),$(mkdirs))

POBJECTS= $(addprefix $(OBJDIR)/, $(OBJECTS))

PRG=gimbals

all: $(PRG)
$(PRG):$(POBJECTS)
	$(CC)  -Wl,--no-as-needed -o $@ $(POBJECTS) $(LIBS)  $(SLIBS) 
$(OBJDIR)/%.o: %.c $(DEPDIR)/%.d
	$(CC)  $(DEPFLAGS) $(CFLAGS) $(INCLUDES) -c -o $@ $< 
$(OBJDIR)/%.o: %.cpp $(DEPDIR)/%.d 
	$(CC)  $(DEPFLAGS) $(CFLAGS) $(INCLUDES) -c -o $@ $< 

DEPFILES =  $(C_SOURCES:%.c=%.d)
DEPFILES +=  $(CPP_SOURCES:%.cpp=%.d)
PDEPFILES= $(addprefix $(DEPDIR)/, $(DEPFILES))
$(PDEPFILES):
include $(wildcard $(PDEPFILES))

clean:
	-rm -f $(POBJECTS) $(PDEPFILES) $(PRG) $(OBJDIR)/*.o $(DEPDIR)/*.d