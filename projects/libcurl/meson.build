project('test-libcurl', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

libs = include_directories('include')
curl_dep = dependency('libcurl', required: true)

executable(
  'test-libcurl', 'src/test_libcurl.c',
  include_directories: libs,
  dependencies: [curl_dep],
  install : true)


