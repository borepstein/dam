#include <stdio.h>
#include <DAMInstance.h>

int main(int argc, char **argv)
{
  DAMInstance runInstance;

  while (! runInstance.getInstanceRunStatus())
    runInstance.updateInstanceRunStatus();

  runInstance.~DAMInstance();
}
