project('testproject', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])


incdir = include_directories('include')

exe = executable('testproject', 'testproject.c',
  include_directories: incdir,
  install : true)

test('basic', exe)
