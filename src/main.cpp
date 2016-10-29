#include <stdio.h>
#include <DAMInstance.h>

int main(int argc, char **argv)
{
  private DAMInstance runInstance;

  runInstance = new DAMInstance();

  while (! runInstance.getRunStatus())
    runInstance.updateStatus();

  runInstance.~DAMInstance();
}
