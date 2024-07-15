#ifndef KEYS_HPP
#define KEYS_HPP

namespace sd {
    struct Keys {
        unsigned int go_forward  : 1;
        unsigned int go_backward : 1;
        unsigned int turn_right  : 1;
        unsigned int turn_left   : 1;

        Keys(void);
    };
}

#endif // KEYS_HPP
