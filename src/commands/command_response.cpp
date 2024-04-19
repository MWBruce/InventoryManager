#include "../../includes/commands/command_response.h"

CommandResponse::CommandResponse(bool success, const std::string& message)
    : success(success), message(message), data(std::any{}) {}

CommandResponse::CommandResponse(bool success, const std::string& message, const std::any& data)
    : success(success), message(message), data(data) {}
