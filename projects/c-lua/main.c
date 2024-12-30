#include <stdio.h>
#include <include/lua.h>
#include <include/lauxlib.h>
#include <include/lualib.h>
int main() {

  lua_State* L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dofile(L, "myLua.lua");

  lua_getglobal(L, "fn");
  lua_pushnumber(L, 34);
  lua_call(L, 1, 1);

  int result = (int)lua_tointeger(L, -1);

  printf("result: %d \n", result);

  lua_pop(L,1);
  lua_close(L);

  return 0;
}
