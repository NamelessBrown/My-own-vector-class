#pragma once

namespace Nameless
{
	template<class T>
	class Vector
	{
	public:
		Vector(T xx, T yy)
			:x(xx), y(yy)
		{
		}

		Vector(const Vector& vec)
			:x(vec.x), y(vec.y)
		{
		}


	public:
		T x;
		T y;
	};
}