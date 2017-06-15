#pragma once
namespace Core {
	namespace Input {
			// Surowe przyciski pobrane z systemu operacyjnego.
			enum class RawInputButtons
			{
				// Brak.
				None = 0,
				// Lewy przycisk myszy.
				LeftMouseButton = 1,
				// Prawy przycisk myszy.
				RightMouseButton = 2,
				// œrodkowy przycisk myszy.
				MiddleMouseButton = 3,
				// Dodatkowy przycisk myszy 1
				XMouseButton1 = 4,
				// Dodatkowy przycisk myszy 2
				XMouseButton2 = 5,
				// Dodatkowy przycisk myszy 3
				XMouseButton3 = 6,
				// Dodatkowy przycisk myszy 4
				XMouseButton4 = 7,
				// Dodatkowy przycisk myszy 5
				XMouseButton5 = 8,
				Esc = 9,
				Backspace = 10,
				Tab = 11,
				D0 = 12,
				D1 = 13,
				D2 = 14,
				D3 = 15,
				D4 = 16,
				D5 = 17,
				D6 = 18,
				D7 = 19,
				D8 = 20,
				D9 = 21,
				NumPad0 = 22,
				NumPad1 = 23,
				NumPad2 = 24,
				NumPad3 = 25,
				NumPad4 = 26,
				NumPad5 = 27,
				NumPad6 = 28,
				NumPad7 = 29,
				NumPad8 = 30,
				NumPad9 = 31,
				F1 = 32,
				F2 = 33,
				F3 = 34,
				F4 = 35,
				F5 = 36,
				F6 = 37,
				F7 = 38,
				F8 = 39,
				F9 = 40,
				F10 = 41,
				F11 = 42,
				F12 = 43,
				// Przycisk A.
				A = 0x65,
				// Przycisk B.
				B = 66,
				// Przycisk C.
				C = 67,
				// Przycisk D.
				D = 68,
				// Przycisk E.
				E = 69,
				// Przycisk F.
				F = 70,
				// Przycisk G.
				G = 71,
				// Przycisk H.
				H = 72,
				// Przycisk I.
				I = 73,
				// Przycisk J.
				J = 74,
				// Przycisk K.
				K = 75,
				// Przycisk L.
				L = 76,
				// Przycisk M.
				M = 77,
				// Przycisk N.
				N = 78,
				// Przycisk O.
				O = 79,
				// Przycisk P.
				P = 80,
				// Przycisk Q.
				Q = 81,
				// Przycisk R.
				R = 82,
				// Przycisk S.
				S = 83,
				// Przycisk T.
				T = 84,
				// Przycisk U.
				U = 85,
				// Przycisk V.
				V = 86,
				// Przycisk W.
				W = 87,
				// Przycisk X.
				X = 88,
				// Przycisk Y.
				Y = 89,
				// Przycisk Z.
				Z = 90,
				// Lewy ctrl
				LCtrl = 91,
				// Prawy ctrl
				RCtrl = 92,
				// Lewy alt
				LAlt = 93,
				// Prawy alt
				RAlt = 94,
				// Lewy alt
				LShift = 95,
				// Prawy alt
				RShift = 96,
			};
		}
	}