#pragma once
#include <exception>
#include <string>

class TException : public std::exception
{
	std::string message;	// сообщение об ошибке

public:
	TException(const std::string message_) : message(message_) {}

	const char* what() const noexcept override { return message.c_str(); }
};