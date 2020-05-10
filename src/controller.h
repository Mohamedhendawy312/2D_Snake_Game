/*Skip to content
 Nickdom1 / CppND-Capstone-Snake-Game
Code Pull requests 0 Projects 0 Actions Wiki Security 0 Pulse
CppND-Capstone-Snake-Game/src/controller.h
@Nickdom1 Nickdom1 Add files via upload
cec5791 on Oct 10, 2019
@swwelch@Nickdom1
20 lines (15 sloc)  546 Bytes
*/ 
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

enum Direction { COM_UP, COM_DOWN, COM_LEFT, COM_RIGHT };

class Controller {
 public:
  void HandleInput(Snake &snake, int dir) const;
  void HandleUserInput(bool &running, Snake &snake) const;
  void HandleComputerInput(Snake &snake, SDL_Point* const food) const;

 private:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;
  Direction CalculateComputerMove(Snake &snake, SDL_Point* const food) const;
};

#endif
/*© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
*/