cmake_minimum_required(VERSION 3.24)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(LearnCPP
        "Compiler Tests/Test_CPP17/Test_CPP17.cpp"
        "Compiler Tests/Test_CPP20/Test_CPP20.cpp"
        "Section 1/HelloWorld/HelloWorld.cpp"
        "Section 1/Section1.11/Section1.11.cpp"
        "Section 1/Section1Test/Section1Test.cpp"
        "Section 2/functionCallFunc.cpp"
        "Section 2/IntroFunctions.cpp"
        "Section 2/nestedFunc.cpp")
