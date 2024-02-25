
#include "XHazel.h"
class BoxApp :public XHazel::Application
{
public:
	BoxApp();
	~BoxApp();

private:

};

BoxApp::BoxApp()
{
}

BoxApp::~BoxApp()
{
}

int main()
{
	BoxApp* boxapp = new BoxApp();
	boxapp->Run();
	delete boxapp;

}