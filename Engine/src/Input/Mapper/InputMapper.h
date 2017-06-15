#pragma once
#include "../RawInputButtons.h"
#include "../KeyState.h"
#include "../IInputContext.h"
#include "../BindedKey.h"
#include <vector>
#include <algorithm>
#include <iostream>
namespace Core {
	namespace Input {
		// Pozyskuje dane wej�ciowe systemowe(RAW) z klawiatury, myszy oraz jostick�w i mapuje je do klasy wy�szej
		class InputMapper
		{
		public:
			InputMapper();
			// Binduje aktualny przycisk.
			void BindKey(RawInputButtons button, KeyState state);
			// Propaguje dane z urz�dze� I/O dalej do warstwy wy�szej.
			void Dispatch();
			~InputMapper();
		private:
			std::vector<IInputContext> contextList;
			std::vector<BindedKey> bindedKeys;
		};

	}
}