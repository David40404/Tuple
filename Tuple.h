#pragma once
#include <ostream>

namespace Tuple {
	template <typename _Ty1, typename _Ty2, typename _Ty3>
	class Tuple {
		_Ty1 m_first;
		_Ty2 m_second;
		_Ty3 m_third;
	public:
		Tuple() {
		}

		Tuple(_Ty1 m_first, _Ty2 m_second, _Ty2 m_third) : m_first(m_first), m_second(m_second), m_third(m_third) {
		}

		_Ty1& first() {
			return m_first;
		}

		_Ty2& second() {
			return m_second;
		}

		_Ty3& third() {
			return m_third;
		}

		Tuple <_Ty1, _Ty2, _Ty3>& operator=(const Tuple <_Ty1, _Ty2, _Ty3>& other) {
			if (this != &other) {
				this->m_first = other.m_first;
				this->m_second = other.m_second;
				this->m_third = other.m_third;
			}
			return *this;
		}

		bool operator==(const Tuple <_Ty1, _Ty2, _Ty3>& other) const {
			return this->m_first == other.m_first and this->m_second == other.m_second and this->m_third == other.m_third;
		}
	};

	template <typename _Ty1, typename _Ty2, typename _Ty3>
	std::ostream& operator<<(std::ostream& out, Tuple <_Ty1, _Ty2, _Ty3>& _tuple) {
		out << _tuple.first() << " " << _tuple.second() << " " << _tuple.third();
		return out;
	}
}
