#include <iostream>

using namespace std;

class Device {
	int id;
public:
	Device(int id) {
		this->id = id;
		cout << "create Device" << endl;
	}

	int getId() {
		return id;
	}
};

class InputDevice: public Device {
protected:
	int inputP;
public:
	InputDevice(int id, int inputP) :
			Device(id) {
		this->inputP = inputP;
		cout << "create InputDevice" << endl;
	}

};

class OutputDevice: public Device {
protected:
	int outputP;
public:
	OutputDevice(int id, int outputP) :
			Device(id) {
		this->outputP = outputP;
		cout << "create OutputDevice" << endl;
	}
};

class Mouse: public InputDevice {
public:
	Mouse(int id, int inputP) :
			InputDevice(id, inputP) {
		cout << "create Mouse" << endl;
	}
};

class Keyboard: public InputDevice {
public:
	Keyboard(int id, int inputP) :
			InputDevice(id, inputP) {
		cout << "create Keyboard" << endl;
	}
};

class Monitor: public OutputDevice {
public:
	Monitor(int id, int outputP) :
			OutputDevice(id, outputP) {
		cout << "create Monitor" << endl;
	}
};

class PC: public Device {
	Mouse *mouse;
	Keyboard *keyboard;
	Monitor *screen;
public:
	PC(int id) :
			Device(id) {
		this->mouse = new Mouse(1, 23);
		this->keyboard = new Keyboard(2, 22);
		this->screen = new Monitor(3, 1231);
	}
	void playVideo(){
		screen->getId();
	}
};

int main() {
	PC pc(1213);
}
