#include "BindedKey.h"
namespace Core {
	namespace Input {

		BindedKey::BindedKey(RawInputButtons button, KeyState state)
		{
			BindedKey::button = button;
			BindedKey::state = state;
		}

		BindedKey::~BindedKey()
		{
		}

	}
}