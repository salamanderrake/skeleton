
#include "skeleton.h"

#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::string;
using std::vector;

Skeleton::Skeleton()
{
}

Skeleton::~Skeleton()
{
}

int Skeleton::main(vector<string>& params)
{
  // Call the parent main(vector<string> params)
  Base::Application::main(params);

  // If one of the default parameters was called and it is supposed to exit at this time, exit.
  if (params[0] == "exit") {
    return EXIT_SUCCESS;
  }

  // Do your work here.

  return EXIT_SUCCESS;
}