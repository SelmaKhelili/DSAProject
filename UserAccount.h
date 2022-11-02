
#include <queue>

class <EmailObj> MailServer;

using std::string;

// Each User

//  Is Identified by:

// his NAME
// UNIQUE ID

// can:

// RECEIVE emails
// SEND emails

template < class EmailObj >
class UserAccount
{

    friend class MailServer ;
    bool checkIfMailArivedAtDestination  ( UserAccount User1, UserAccount User2) const{ return User2.MailBox.contains(User1.m_Email)};
public:
    UserAccount();
    ~UserAccount();
    void getUserName() const
    {
        return m_UserName;
    }
    void getUserName() const
    {
        return m_UserName;
    }

    void sendMailToServer( UserAccount Sender ){ EmailsToSend.push( Sender.m_Email); }


private:

    char* m_UserName;
    char* m_UserID;
    EmailObj m_Email;
    queue <EmailObj> MailBox;
    queue <EmailObj> SentMails;

    //timeZone //

};