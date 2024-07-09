#ifndef CAR_HPP
#define CAR_HPP

#include <GL/gl.h>

#include "Keys.hpp"
#include "Movable.hpp"

namespace sd {
    class Car : public sd::Movable {
        const GLfloat accel;
        sd::Keys      keys;

    public:
        Car(std::string filename, sd::Vec3 pos, GLfloat yaw, GLfloat accel);
        
        void            update(double mod) override;
        const sd::Keys& get_keys(void) const;
        void            set_keys(sd::Keys& keys);
    };
}

#endif // CAR_HPP
