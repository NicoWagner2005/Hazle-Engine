#pragma once

// I defined HZ_PLATFORM_WINDOWS in the preproccesor settings for this project
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized log!");
	HZ_INFO("Hello!");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif