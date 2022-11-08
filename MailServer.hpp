#include <queue>
#ifndef MAILSERVER_H
#define MAILSERVER_H
#include"UserAccount.hpp"
#include"email.hpp"
class MailServer
{
public:
    MailServer();
    ~MailServer();
    void processReceivedMails();
    //void sendMailToDestination(  UserAccount User1, UserAccount User2 );
    bool checkReachDestination();
    bool MailCopy();
    void EnterEmail(email a)
    {
        EmailsToSend.push(a);
    }
private:
    queue<email> EmailsToSend;
};
#endif