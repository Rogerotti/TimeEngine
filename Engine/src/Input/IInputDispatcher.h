#pragma once
#include "KeyBinding.h"
#include <vector>
namespace Core {
	namespace Input {

		class IInputDispatcher
		{
		public:
			IInputDispatcher();
			void BindInput(KeyBinding& binding);
			~IInputDispatcher();
		private:
			std::vector<KeyBinding> m_bindings;
		};
	}
}

