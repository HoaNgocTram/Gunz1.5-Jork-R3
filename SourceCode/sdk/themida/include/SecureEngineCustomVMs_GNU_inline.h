/******************************************************************************
 * Header: SecureEngineCustomVMs_GNU_inline.h
 * Description: GNU C inline assembly macros definitions
 *
 * Author/s: Oreans Technologies 
 * (c) 2013 Oreans Technologies
 *
 * --- File generated automatically from Oreans VM Generator (14/9/2013) ---
 ******************************************************************************/

/***********************************************
 * Definition as inline assembly
 ***********************************************/

#ifdef PLATFORM_X32

#define VM_TIGER_WHITE_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x64\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_WHITE_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF4\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_RED_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x65\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_RED_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF5\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_BLACK_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x66\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_BLACK_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF6\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_WHITE_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6A\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_WHITE_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFA\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_RED_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6C\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_RED_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFC\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_BLACK_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6E\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_BLACK_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFE\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#endif

#ifdef PLATFORM_X64

#define VM_TIGER_WHITE_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x67\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_WHITE_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF7\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_RED_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x68\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_RED_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF8\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_BLACK_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x69\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_TIGER_BLACK_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xF9\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_WHITE_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6B\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_WHITE_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFB\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_RED_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6D\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_RED_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFD\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_BLACK_START \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0x6F\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#define VM_FISH_BLACK_END \
asm (".byte 0xEB\n"\
     ".byte 0x10\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n"\
     ".byte 0xFF\n"\
     ".byte 0x01\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x00\n"\
     ".byte 0x57\n"\
     ".byte 0x4C\n"\
     ".byte 0x20\n"\
     ".byte 0x20\n");

#endif

