#include "booking_scheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
public:
	TestableBookingScheduler(int capacityHour, tm dateTime) :
		BookingScheduler{ capacityHour },
		dateTime{ dateTime } {
	}

	time_t getNow() override {
		return mktime(&dateTime);
	}
private:
	tm dateTime;
};