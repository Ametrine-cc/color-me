# --- Compilers ---
CXX       := clang
CXXFLAGS  := -Wall -Wextra -O2
AR        := ar
ARFLAGS   := rcs 

# --- Source Layout ---
LIB_SRC       := src
LIB_SRC_FILES := $(LIB_SRC)/color-me.c
LIB_OBJ       := $(LIB_SRC)/color-me.o
LIB_HEADER    := $(LIB_SRC)/color-me.h
LIB_OUT       := libcolor-melib.a

# --- Install paths ---
PREFIX      := /usr/local
LIB_DIR     := $(PREFIX)/lib
INCLUDE_DIR := $(PREFIX)/include

# --- Targets ---
.PHONY: all install uninstall clean

all: $(LIB_OUT) $(TARGET)

# --- Compile library object ---
$(LIB_OBJ): $(LIB_SRC_FILES)
	$(CXX) $(CXXFLAGS) -I$(LIB_SRC) -c $< -o $@

$(LIB_OUT): $(LIB_OBJ)
	$(AR) $(ARFLAGS) $@ $^

# --- Install ---
install: all
	install -Dm644 $(LIB_OUT)    $(DESTDIR)$(LIB_DIR)/$(LIB_OUT)
	install -Dm644 $(LIB_HEADER) $(DESTDIR)$(INCLUDE_DIR)/wexint.h
	
# --- Uninstall ---
uninstall: all
	rm -r $(DESTDIR)$(LIB_DIR)/$(LIB_OUT)
	rm -r $(DESTDIR)$(INCLUDE_DIR)/wexint.h

clean:
	rm -r $(LIB_OBJ) $(LIB_OUT)
