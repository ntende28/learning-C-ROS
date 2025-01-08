#include <iostream>
#include <string>

/* A C++ interface is usually represented by an abstract class with pure virtual methods i.e. an abstract class
   - It is a way to ensure derived classes adhere to a specific behavior or functionality.
   - Use descriptive names for interface classes (e.g., ILogger, IShape).
   - Keep interfaces focused and minimal—each interface should represent a single concept.

   Importance of override keyword
     - Error prevention : Always ensures the derived class implements the method in the interface
     - If there's a mismatch in method signature (e.g., a typo or wrong parameter types), the 
     compiler generates an error.
     - Makes it explicit that the method is intended to override a base class method.
     Future proof : If the base class method signature changes, the derived class will produce 
     a compile-time error, ensuring you catch the issue during development.

*/

// Logger interface
class ILogger {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~ILogger() {}
};

// ConsoleLogger implementation
class ConsoleLogger : public ILogger {
public:
    void log(const std::string& message) override {
        std::cout << "Console: " << message << "\n";
    }
};

// FileLogger implementation
class FileLogger : public ILogger {
public:
    void log(const std::string& message) override {
        // Simulating logging to a file
        std::cout << "File: " << message << "\n";
    }
};

void logMessage(ILogger& logger, const std::string& message) {
    logger.log(message);
}

int main() {
    ConsoleLogger consoleLogger;
    FileLogger fileLogger;

    logMessage(consoleLogger, "This is a console log.");
    logMessage(fileLogger, "This is a file log.");

    return 0;
}
