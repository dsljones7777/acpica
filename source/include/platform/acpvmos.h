#pragma once
#ifndef __PVMOS_ACPI_HEADER__
#define __PVMOS_ACPI_HEADER__


#include "types.h"


/* Common (in-kernel/user-space) ACPICA configuration */
#define ACPI_USE_SYSTEM_CLIBRARY
#define ACPI_USE_DO_WHILE_0
#define ACPI_IGNORE_PACKAGE_RESOLUTION_ERRORS

#define ACPI_USE_SYSTEM_INTTYPES
#define ACPI_USE_GPE_POLLING

/* Kernel specific ACPICA configuration */

#ifdef CONFIG_ACPI_REDUCED_HARDWARE_ONLY
#define ACPI_REDUCED_HARDWARE 1
#endif

#ifdef CONFIG_ACPI_DEBUGGER
#define ACPI_DEBUGGER
#endif

#ifdef CONFIG_ACPI_DEBUG
#define ACPI_MUTEX_DEBUG
#endif

#define ACPI_MACHINE_WIDTH          64
#define ACPI_USE_NATIVE_MATH64

#define ACPI_CACHE_T                ACPI_MEMORY_LIST
#define ACPI_USE_LOCAL_CACHE        1



#define ACPI_SPINLOCK                   void*

#define ACPI_SEMAPHORE                  void*

/*
#define ACPI_MSG_ERROR          KERN_ERR "ACPI Error: "
#define ACPI_MSG_EXCEPTION      KERN_ERR "ACPI Exception: "
#define ACPI_MSG_WARNING        KERN_WARNING "ACPI Warning: "
#define ACPI_MSG_INFO           KERN_INFO "ACPI: "
#define ACPI_MSG_BIOS_ERROR     KERN_ERR "ACPI BIOS Error (bug): "
#define ACPI_MSG_BIOS_WARNING   KERN_WARNING "ACPI BIOS Warning (bug): "
*/

#include <stdarg.h>
#include <ctype.h>

extern int strncmp(const char* str1, const char* str2, size_t num);
extern char* strncpy(char* destination, const char* source, size_t num);
extern int memcmp(const void* ptr1, const void* ptr2, size_t num);
extern void* memset(void* ptr, int value, size_t num);
extern size_t strlen(const char* str);
extern char* strcpy(char* destination, const char* source);
extern void* memcpy(void* destination, const void* source, size_t num);
extern char* strcat(char* destination, const char* source);
extern int strcmp(const char* str1, const char* str2);
#endif