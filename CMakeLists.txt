# Define a versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(NeovimClone)

# Define a versão do padrão C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adiciona os diretórios de include
include_directories(${PROJECT_SOURCE_DIR}/include)

# Adiciona os arquivos fonte
set(SOURCES
    src/main.cpp
    src/editor.cpp
    src/file.cpp
    src/input.cpp
    src/screen.cpp
)

# Cria o executável
add_executable(neovim-clone ${SOURCES})

# Se necessário, pode adicionar mais flags aqui (ex: -Wall)
# target_compile_options(neovim-clone PRIVATE -Wall)
