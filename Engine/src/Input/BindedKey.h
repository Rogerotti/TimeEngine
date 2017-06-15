#pragma once
#include "./RawInputButtons.h"
#include "./KeyState.h"
namespace Core {
	namespace Input {
		struct BindedKey
		{
		public:
			RawInputButtons button;
			KeyState state;
			BindedKey(RawInputButtons button, KeyState state);
			~BindedKey();
		};
	}
}