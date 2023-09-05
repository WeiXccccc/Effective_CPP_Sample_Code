cmake_minimum_required(VERSION 3.10)
PROJECT(TEST)

SET(CMAKE_C_FLAGS "-Wall  -std=c11")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11 ")



ADD_EXECUTABLE(01 ${CMAKE_SOURCE_DIR}/Effective_C++/01.cpp) 
ADD_EXECUTABLE(02 ${CMAKE_SOURCE_DIR}/Effective_C++/02.cpp) 
ADD_EXECUTABLE(03 ${CMAKE_SOURCE_DIR}/Effective_C++/03.cpp) 
ADD_EXECUTABLE(04 ${CMAKE_SOURCE_DIR}/Effective_C++/04.cpp) 
ADD_EXECUTABLE(05 ${CMAKE_SOURCE_DIR}/Effective_C++/05.cpp) 
ADD_EXECUTABLE(06 ${CMAKE_SOURCE_DIR}/Effective_C++/06.cpp) 
ADD_EXECUTABLE(07 ${CMAKE_SOURCE_DIR}/Effective_C++/07.cpp) 
ADD_EXECUTABLE(08 ${CMAKE_SOURCE_DIR}/Effective_C++/08.cpp) 
ADD_EXECUTABLE(09 ${CMAKE_SOURCE_DIR}/Effective_C++/09.cpp) 


# ADD_EXECUTABLE(02 ${CMAKE_SOURCE_DIR}/Effective_C++/02.cpp) 
# ADD_EXECUTABLE(02 ${CMAKE_SOURCE_DIR}/Effective_C++/02.cpp) 
# ADD_EXECUTABLE(02 ${CMAKE_SOURCE_DIR}/Effective_C++/02.cpp) 



# link_libraries(pthread)


# ADD_EXECUTABLE(stringencode ${CMAKE_SOURCE_DIR}/1_stringencode/stringencode.cpp)
# ADD_EXECUTABLE(idsort ${CMAKE_SOURCE_DIR}/2_idsort/idsort.cpp)


# INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/3_memoryanalyser/dummyalgolibs)


# LINK_DIRECTORIES("${CMAKE_SOURCE_DIR}/3_memoryanalyser/dummyalgolibs")

# ADD_EXECUTABLE(memoryanalyser   ${CMAKE_SOURCE_DIR}/3_memoryanalyser/memoryanalyser.c)

# target_link_libraries (memoryanalyser libdummy_algo1) 
# target_link_libraries (memoryanalyser libdummy_algo2) 
# target_link_libraries (memoryanalyser libdummy_algo3) 

# TARGET_LINK_LIBRARIES(multithread pthread)


