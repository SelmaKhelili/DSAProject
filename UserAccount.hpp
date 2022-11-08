#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <queue>
#include<iostream>
#include"email.hpp"
#include"MailServer.hpp"
using std::string;
class UserAccount
{
    friend class MailServer;

public:
    UserAccount(string UserName, string UserID ): m_UserName(nullptr), m_UserID(nullptr)
        {
        enterUserName();
        enterUseID();
         }
    ~UserAccount()
    {
        delete [] m_UserName;
        delete [] m_UserID;
    }

    char * getUserName() const
    {
        return m_UserName;
    }
        std::string getadress() const
    {
        return EmailAddress;
    }
    char * getUserID() const
    {
        return m_UserID;
    }

    void sendMailToServer(MailServer mailServer)
        { 
         mailServer.EnterEmail(mail);
        }


private:

    char* m_UserName;
    char* m_UserID;
    queue <email> MailBox;
    email mail;
    queue <email> SentMails;
    std::string EmailAddress;
      

    // Some Utility Functions to enter data //
    void enterUserName ( void)
    { 
        m_UserName=new char[100];
  cout<<"Enter user name"<<endl;
        cin>>m_UserName;
        
     }

      void enterUseID ( void )
    { 
        m_UserID=new char[100];
 cout<<"Enter UserID: "<<endl;
         cin>>m_UserID;
          
     }
   // string TimeZone;   // this additional data to improve sending email phase.

};
#endif