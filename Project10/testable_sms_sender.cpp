#include <iostream>
#include "sms_sender.cpp"
#include "gmock/gmock.h"

class TestableSmsSender : public SmsSender {
//public:
//	void send(Schedule* schedule) override {
//		std::cout << "�׽�Ʈ�� SmsSender class�� send �޼��� �����" << std::endl;
//		sendMethodIsCalled = true;
//	}
//
//	bool isSendMethodIsCalled() {
//		return sendMethodIsCalled;
//	}
//private:
//	bool sendMethodIsCalled;
public:
	MOCK_METHOD(void, send, (Schedule*), (override));
};