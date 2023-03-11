# SDL-Particle

Simple project using C++<br>
It uses the SDL2 library to render graphics and uses CMake as a build system.<br>

## Dependencies

- Git
- C Compiler (gcc, ...)
- CMake
- SDL2 library
- SDL2_gfx library

**On Debian/Ubuntu based distributions, use the following command:**

```sh
sudo apt install git build-essential pkg-config cmake cmake-data libsdl2-dev libsdl2-gfx-dev
```

**Optional packages:**

- SDL2_image library
- SDL2_ttf library
- SDL2_net library
- SDL2_mixer library

```sh
sudo apt install libsdl2-image-dev libsdl2-ttf-dev libsdl2-net-dev libsdl2-mixer-dev
```

## Build instructions

```sh
# Clone this repo
git clone https://github.com/serial3/SDL_Particle.git
cd SDL_Particle

# Create a build folder
mkdir build
cd build

# Build
cmake ..
make

# Run
./SDL-Particle
```

***Note:*** To use SDL2_image, SDL2_ttf, SDL2_net or SDL2_mixer, you should
uncomment some instructions in the CMakeLists.txt file and re-execute the
`make` command.

### Open the project with an IDE under Linux

Author: [@Serial3](https://github.com/serial3)