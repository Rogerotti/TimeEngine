#pragma once
#include "InputMapper.h"
namespace Core {
	namespace Input {
		InputMapper::InputMapper()
		{
		
		}


		InputMapper::~InputMapper()
		{
		}

		void InputMapper::BindKey(RawInputButtons button, KeyState state) 
		{
			std::vector<BindedKey> test;
			bool tt = test.empty();
			bool res = InputMapper::bindedKeys.empty();
			std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Core::Input::BindedKey>>> it = InputMapper::bindedKeys.end();
			BindedKey key = BindedKey(button, state);
			if (InputMapper::bindedKeys.empty() == true)
			{
				InputMapper::bindedKeys.push_back(key);
			}
			else {
				if (InputMapper::bindedKeys.end() != std::find_if(InputMapper::bindedKeys.begin(),
					InputMapper::bindedKeys.end(),
					[&currentKey = key]
				(const BindedKey& m) -> bool { return (currentKey.button == m.button && currentKey.state == m.state); })) 
				{
					int a = 1;
				}
				else {
					int b = 2;
				}
			}
			KeyState s = state;
		}

		void InputMapper::Dispatch() 
		{

		}
	}
}