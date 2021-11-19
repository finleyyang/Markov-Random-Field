cmake_minimum_required(VERSION 3.20)
project(MRF)


include_directories("/usr/include/eigen3/")

set(CMAKE_CXX_STANDARD 14)

add_executable(MRF main.cpp AutoPtr.h List.h instances.h minimize.inl MRFEnergy.h MRFEnergy.inl ordering.inl treeProbabilities.inl typeBinary.h typeBinaryFast.h
        typeGeneral.h typePotts.h typeTruncatedLinear.h typeTruncatedLinear2D.h typeTruncatedQuadratic.h typeTruncatedQuadratic2D.h)

