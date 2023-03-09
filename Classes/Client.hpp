#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <vector>

class Client
{
private:
    std:: string nick_name;
    std:: string user_name;
public:
    Client();
    ~Client();

    std:: string get_nick_name();
    std:: string get_user_name();
    void set_nick(std:: string message);
    void set_user(std:: string message);
};

#endif