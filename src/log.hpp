#ifndef LOG_HPP
#define LOG_HPP

#include <string>

namespace sd {
    enum class LogType {
        info,
        warning,
        error
    };

    void log(sd::LogType type, std::string msg);
}

#endif // LOG_HPP
