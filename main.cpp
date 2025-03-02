#include "crtpsinglton.h"
#include "usageexample.cpp"

int main() {
    // Access the single instance and call the method
    UsageExample::getInstance().sayHello();
    // All calls refer to the same instance
    UsageExample::getInstance().sayHello();
    return 0;
}

