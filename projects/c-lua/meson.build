project('c-lua', 'c')


incdir = include_directories('include')
lua_dep = dependency('lua', version : '>= 5.2', required : true)

executable('c-lua', 'main.c', 
  include_directories : incdir,
  dependencies: lua_dep
)
