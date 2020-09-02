/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_BAKE_CONFIG_H
#define FLECS_BAKE_CONFIG_H

/* Headers of public dependencies */
#ifdef __BAKE__
#include <bake_util.h>
#endif

/* Headers of private dependencies */
#ifdef FLECS_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef FLECS_STATIC
  #if defined(FLECS_IMPL) && (defined(_MSC_VER) || defined(__MINGW32__))
    #define FLECS_EXPORT __declspec(dllexport)
  #elif defined(FLECS_IMPL)
    #define FLECS_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define FLECS_EXPORT __declspec(dllimport)
  #else
    #define FLECS_EXPORT
  #endif
#else
  #define FLECS_EXPORT
#endif

#include "ES2/Subsys/ES2CapiWrappers.h"

#endif
