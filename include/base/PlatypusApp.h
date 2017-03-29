#ifndef PLATYPUSAPP_H
#define PLATYPUSAPP_H

#include "MooseApp.h"

class PlatypusApp;

template<>
InputParameters validParams<PlatypusApp>();

class PlatypusApp : public MooseApp
{
public:
  PlatypusApp(InputParameters parameters);
  virtual ~PlatypusApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* PLATYPUSAPP_H */
