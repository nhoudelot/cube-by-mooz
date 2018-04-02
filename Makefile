#variables de compilation
SHELL = /bin/sh
CC    = gcc
CFLAGS   += -std=c99 -ansi -Wall -ffast-math -pipe $(shell pkgconf --cflags sdl glu)
LDFLAGS  += $(shell pkgconf --libs sdl glu) -lm
TARGET   := cube-by-mooz
#variable de nettoyage
RM_F := rm -f
#variables d'instalation
INSTALL = install
INSTALL_DIR     = $(INSTALL) -p -d -o root -g root  -m  755
INSTALL_PROGRAM = $(INSTALL) -p    -o root -g root  -m  755
prefix          = /usr
exec_prefix     = $(prefix)
bindir          = $(prefix)/bin

SOURCE          = cube.c

export

all: $(TARGET)

$(TARGET):
	 $(CC) -o $(TARGET) $(SOURCE) $(CFLAGS) $(LDFLAGS)

install: $(TARGET)
	$(INSTALL_DIR) $(DESTDIR)$(bindir)
	-@$(RM_F) $(DESTDIR)$(bindir)/$(TARGET)
	$(INSTALL_PROGRAM) $(TARGET) $(DESTDIR)$(bindir)

clean:
	-$(RM_F) $(TARGET)
