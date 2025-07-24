#include "mail_sender.cpp"
#include "gmock/gmock.h"

class TestableMailSender : public MailSender {
public:
	MOCK_METHOD(void, sendMail, (Schedule*), (override));

//	void sendMail(Schedule* schedule) override {
//		countSendMailMethodIsCalled++;
//	}
//
//	int getcountSendMailMethodIsCalled() {
//		return countSendMailMethodIsCalled;
//	}
//
//private:
//	int countSendMailMethodIsCalled = 0;
};