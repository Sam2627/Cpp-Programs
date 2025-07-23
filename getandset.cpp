#include <iostream>

// Abstraction : hiding unnecessary data from outside a class
// getter : function makes a private attribute readable
// setter : function makes a private attribute writeable

class Secret
{
private:
    std::string message = "This is secret message";
    int code = 0;

public:
    Secret()
    {
    }

    Secret(int code)
    {
        this->code = code;
    }

    // getter
    std::string GetMessage()
    {
        return message;
    }

    int GetCode()
    {
        return code;
    }

    // setter
    void SetMessage(std::string message)
    {
        this->message = message;
    }
};

int main()
{
    Secret secret;

    std::cout << "The secret message: " << secret.GetMessage() << '\n';

    secret.SetMessage("Is not secret much");
    std::cout << "The secret message: " << secret.GetMessage() << '\n';

    Secret secretCode(123456);
    std::cout << "The secret code: " << secretCode.GetCode() << '\n';

    return 0;
}