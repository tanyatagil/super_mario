#pragma once

#include "rect.hpp"

namespace biv {
	class Carrier {
		public:
			virtual float get_carry_speed() const noexcept = 0;
			virtual bool is_carrying(Rect*) const noexcept = 0;
	};
}
