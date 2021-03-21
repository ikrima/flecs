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
/* No dependencies */

/* Convenience macro for exporting symbols */
#ifndef flecs_STATIC
#if flecs_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_API __declspec(dllexport)
#elif flecs_EXPORTS
  #define FLECS_API __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define FLECS_API __declspec(dllimport)
#else
  #define FLECS_API
#endif
#else
  #define FLECS_API
#endif

#include "es2core/subsys/es2capiwrappers.h"

#endif
