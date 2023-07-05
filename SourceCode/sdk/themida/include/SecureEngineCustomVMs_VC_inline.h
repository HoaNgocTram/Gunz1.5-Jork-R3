/******************************************************************************
 * Header: SecureEngineCustomVMs_VC_inline.h
 * Description: VC inline assembly macros definitions
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
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x64 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_WHITE_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF4 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_RED_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x65 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_RED_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF5 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_BLACK_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x66 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_BLACK_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF6 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_WHITE_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6A \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_WHITE_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFA \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_RED_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6C \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_RED_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFC \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_BLACK_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6E \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_BLACK_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFE \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#endif

#ifdef PLATFORM_X64

#define VM_TIGER_WHITE_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x67 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_WHITE_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF7 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_RED_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x68 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_RED_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF8 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_BLACK_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x69 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_TIGER_BLACK_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xF9 \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_WHITE_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6B \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_WHITE_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFB \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_RED_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6D \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_RED_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFD \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_BLACK_START \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0x6F \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#define VM_FISH_BLACK_END \
  __asm _emit 0xEB \
  __asm _emit 0x10 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \
  __asm _emit 0xFF \
  __asm _emit 0x01 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x00 \
  __asm _emit 0x57\
  __asm _emit 0x4C\
  __asm _emit 0x20 \
  __asm _emit 0x20 \

#endif

