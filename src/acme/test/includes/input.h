// Some random comment

// {{includes}}

// And after

#pragma ACME path .
#pragma ACME local Dir

#include <Dir/Bla.h>
#include "Local.h"
#include <cstring>

void stuffAtTheEnd(Integer = SomeValue);

#ifdef INCLUDE_ALSO_HEAVY_STUFF
// {{includes}}

#include "Oof.h"
#endif
