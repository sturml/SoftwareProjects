/* SimpleMath.cpp : Defines the entry point for the console application. */
#pragma once

extern "C" {
#include "simpleMath.h"
}

int main(int ac, char *av[])
{

  int i;
  char dummy[] = { 0 };
  double a = 0;
  
  for (i = 0; i < ac; i++)
  {
    dummy[i] = *av[i];
  }

	a = cubic(10);
	return 0;
}