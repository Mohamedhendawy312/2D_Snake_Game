# 2D Snake Game

![C++](https://img.shields.io/badge/C++-17-blue.svg?style=flat&logo=c%2B%2B)
![CMake](https://img.shields.io/badge/CMake-3.7+-green.svg?style=flat&logo=cmake)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey.svg?style=flat)

A classic snake game built with C++ and SDL2, extended with AI opponents and configurable settings.

<img src="snake_game.gif"/>

## Features

- **AI Bot Snakes** - Computer-controlled opponents that chase food
- **Progressive Difficulty** - New AI snake spawns every 3 points
- **Collision System** - Your snake shrinks when hitting AI snakes
- **Configurable Settings** - Customize via `config.txt` or runtime input
- **Wrap-around Movement** - Snake wraps around screen edges

## How to Play

- **Arrow Keys** - Control your snake (blue head)
- **Eat Food** (yellow) - Grow longer, gain speed, increase score
- **Avoid AI Snakes** (green heads) - Colliding shrinks you
- **Don't Hit Yourself** - Game over if you collide with your own body

## Project Structure

```
├── src/
│   ├── main.cpp        # Entry point, config loading
│   ├── game.cpp/h      # Game loop, scoring, AI spawning
│   ├── snake.cpp/h     # Snake movement, growth, collision
│   ├── controller.cpp/h # User input + AI pathfinding
│   └── renderer.cpp/h  # SDL2 rendering
├── cmake/
├── config.txt          # Game settings (FPS, screen size, grid)
└── snake_game.gif      # Demo
```

## Configuration

Edit `config.txt` or enter settings at startup:

```
kFramesPerSecond=60
kScreenWidth=640
kScreenHeight=640
kGridWidth=32
kGridHeight=32
```

## Dependencies

- cmake >= 3.7
- make >= 4.1
- gcc/g++ >= 5.4
- SDL2 >= 2.0

### Install SDL2 (Linux)
```bash
sudo apt-get install libsdl2-dev
```

## Building

```bash
git clone https://github.com/Mohamedhendawy312/2D_Snake_Game.git
cd 2D_Snake_Game
mkdir build && cd build
cmake .. && make
./SnakeGame
```

## Author

Mohamed Hendawy