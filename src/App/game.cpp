#include <Mayhem.h>

class Sandbox : public Mayhem::Application
{

public:

    Sandbox()
    {

    }

    ~Sandbox()
    {

    }

};

Mayhem::Application *Mayhem::CreateApplication()
{
    return new Sandbox();
}
