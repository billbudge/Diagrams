// Copyright 2015 Native Client Authors.

#ifndef RUNTIME_APPLICATION_SDL_INTERFACE_H_
#define RUNTIME_APPLICATION_SDL_INTERFACE_H_


#include <SDL2/SDL.h>
#ifdef __APPLE__
#include <SDL2/SDL_opengl.h>
#else
#include <SDL2/SDL_opengles2.h>
#endif

#include <memory>

#include "physics/world.h"
#include "gl/drawer.h"


namespace diagrammar {

class Application {
 public:  
  Application();
  ~Application();
  bool Init(int, int);
  void Render();
  
 private:
  void HandleEvents();
  bool HandleMessage(const Json::Value&);
  bool LoadFont();
  bool app_running_ = true;
  SDL_Window* window_;
  SDL_GLContext gl_context_;
  World world_;
  bool draw_poly_ = true;
  bool draw_path_ = true;
  std::unique_ptr<Canvas<NodePolyDrawer> > poly_drawers_;
  std::unique_ptr<Canvas<NodePathDrawer> > path_drawers_;
};

}  // namespace diagrammar

#endif  // RUNTIME_APPLICATION_SDL_INTERFACE_H_
