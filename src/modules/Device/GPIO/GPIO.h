#ifndef FLYBOARD_GPIO
#define FLYBOARD_GPIO

#include <Arduino.h>



class GPIO
{

private:
	int pin=0;
	bool is_digital=true;
	int dir=OUTPUT;


public:



	GPIO();
	GPIO(String &pin);
	GPIO(int _pin);
	void load(int _pin);

	void in();
	void input();
	void out();
	void output();
	void pullup();
	void input_pullup();

	void set(char c);
	void set(String c);
	void set(int c);
	int get();

	void high();
	void low();
	bool isHIGH();
	bool isLOW();

	bool waitHIGH(long mx=-1);
	bool waitLOW(long mx=-1);
	bool waitFor(int wait,long mx=-1);







};
#endif