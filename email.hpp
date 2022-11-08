#ifndef EMAIL_H
#define EMAIL_H
using namespace std;
#include <iostream>
#include"UserAccount.hpp"

class email
{ 
    friend class UserAccount ;
     email(UserAccount user1 , UserAccount user2)
        {
            from = user1.getadress();
            to = user2.getadress();
        }
        email()
        {
            from = " ";
            to = " ";
        }
        private:
        std::string from;
        std::string to;
        std::string object;
        std::string content;
        };
#endif