cmake_minimum_required(VERSION 4.2)
project(ed1_list_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ArrayListTest
        src/ArrayListTest.cpp
        include/ArrayList.h)

add_executable(Main main.cpp)

# --- Lista de Exercicios de Fixacao (24/09/2026) ---
add_executable(Q1_SelecaoVetorI src/Q1_SelecaoVetorI.cpp include/ArrayList.h)
add_executable(Q2_SubstituicaoVetorI src/Q2_SubstituicaoVetorI.cpp include/ArrayList.h)
add_executable(Q3_ConcatenationOfArray src/Q3_ConcatenationOfArray.cpp include/ArrayList.h)
add_executable(Q4_ContainsDuplicate src/Q4_ContainsDuplicate.cpp include/ArrayList.h)
add_executable(Q5_MaxConsecutiveOnes src/Q5_MaxConsecutiveOnes.cpp include/ArrayList.h)