#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <fstream>
#include <string>

class Logger {
protected:
    std::ofstream logFile;
public:
    Logger(const std::string& filename);
    virtual ~Logger();
    void log(const std::string& message);
};

class Debug : public Logger {
public:
    Debug(const std::string& filename);
    void debug(const std::string& message);
};

#endif // LOG_H
