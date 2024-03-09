# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BankingApp_server_autogen"
  "CMakeFiles\\BankingApp_server_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BankingApp_server_autogen.dir\\ParseCache.txt"
  )
endif()
