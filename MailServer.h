#include <queue>

template <class EmailObj>
class MailServer
{
public:
    MailServer();
    ~MailServer();
    void processReceivedMails();
    void sendMailToDestination(  UserAccount User1, UserAccount User2 );
    bool checkReachDestination();
    bool MailCopy();



private:
    queue< EmailObj> EmailsToSend;


};