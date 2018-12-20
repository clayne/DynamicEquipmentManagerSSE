#ifndef	DNEM_VERSION_INCLUDED
#define DNEM_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define DNEM_VERSION_MAJOR	2
#define DNEM_VERSION_MINOR	0
#define DNEM_VERSION_PATCH	1
#define DNEM_VERSION_BETA	0
#define DNEM_VERSION_VERSTRING	MAKE_STR(DNEM_VERSION_MAJOR) "." MAKE_STR(DNEM_VERSION_MINOR) "." MAKE_STR(DNEM_VERSION_PATCH) "." MAKE_STR(DNEM_VERSION_BETA)

#endif