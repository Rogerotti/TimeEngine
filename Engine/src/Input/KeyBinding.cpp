#include "KeyBinding.h"
namespace Core {
	namespace Input {
		KeyBinding::KeyBinding(RawInputButtons key, std::function<void()> callBack, KeyState state) :
			m_key(key),
			m_callBack(callBack),
			m_state(state) {}

		KeyBinding::KeyBinding(const KeyBinding& ref) :
			key(ref.key),
			callBack(ref.callBack),
			state(ref.state) {}

		KeyBinding& KeyBinding::operator=(const KeyBinding& ref)
		{
			(*this).m_key = ref.m_key;
			(*this).m_state = ref.m_state;
			(*this).m_callBack = ref.m_callBack;
		}

		void KeyBinding::execute() 
		{
			m_callBack();
		}

		KeyBinding::~KeyBinding()
		{
		}
	}
}