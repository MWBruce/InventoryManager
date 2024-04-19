#ifndef COMMAND_RESPONSE_H
#define COMMAND_RESPONSE_H

#include <string>
#include <any>

class CommandResponse {
public:
    bool success;
    std::string message;
    std::any data;
    CommandResponse(bool success, const std::string& message);
    CommandResponse(bool success, const std::string& message, const std::any& data);
};

#endif 
