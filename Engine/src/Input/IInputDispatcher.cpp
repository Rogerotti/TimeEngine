#include "IInputDispatcher.h"

namespace Core {
	namespace Input {
		IInputDispatcher::IInputDispatcher()
		{
		}

		void IInputDispatcher::BindInput(KeyBinding& binding)
		{
			m_bindings.push_back(binding);
		}

		IInputDispatcher::~IInputDispatcher()
		{
		}
	}
}