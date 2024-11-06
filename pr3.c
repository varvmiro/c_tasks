#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  size_t sheepz = 0;
  for (int i=0;i<count;i++)
    {
    if (sheep[i] == true)
      {
      sheepz++;
    }
  }
  return sheepz;
}