// Exercise 5 - Pointers to Functions, Functors, Lambda Expressions, and Exceptions
// 2024/10/01 - If this code works, it was created by Cornel
//            - If it doesn't work, I don't know who wrote it.
// 2024/10/01 - See above

#ifndef SENECA_SPAMFILTERPLUGIN_H
#define SENECA_SPAMFILTERPLUGIN_H
#include <string>
#include "plugin.h"

namespace seneca
{
	struct Message;

	constexpr size_t CAPACITY_SFP = 5;

	class SpamFilterPlugin : public Plugin
	{
		std::string m_badWords[CAPACITY_SFP];
		size_t m_cntSpamFound{};
	public:
		SpamFilterPlugin(const char* filename);
		void operator()(Message& msg) override;
		void showStats() const override;
	};
}
#endif
