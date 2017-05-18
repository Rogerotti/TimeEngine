#pragma once
#include <functional>
#include <iostream>
#include "Types\KeyState.h"
#include "Types\RawInputButtons.h"
namespace Core {
	namespace Input {
		using namespace Types;
		// Przechowuje po³¹czenie miêdzy przyciskiem, akcj¹ a stanem przycisku.
		struct KeyBinding
		{
			KeyBinding(RawInputButtons key, std::function<void()> callback, KeyState state);
			KeyBinding(const KeyBinding& ref);
			KeyBinding& operator=(const KeyBinding& ref);
			// wywo³uje akcjê zwrotn¹.
			void execute();
			~KeyBinding();

			RawInputButtons m_key;
			KeyState m_state;
			std::function<void()> m_callBack;
		};

	}
}