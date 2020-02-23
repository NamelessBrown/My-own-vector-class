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

		Vector operator+(const Vector& vec)
		{
			Vector<T> temp(x, y);

			temp.x += vec.x;
			temp.y += vec.y;
			return temp;
		}

		Vector operator-(const Vector& vec)
		{
			Vector<T> temp(x, y);
			temp.x -= vec.x;
			temp.y -= vec.y;
			return temp;
		}

	public:
		T x;
		T y;

	};
}