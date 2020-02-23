#pragma once

namespace Nameless
{
	template<class T>
	class Vector
	{
	public:
		Vector() = delete;

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

		bool operator==(const Vector& vec)
		{
			if (x == vec.x && y == vec.y)
				return true;
			else
				return false;

		}

	public:
		T x;
		T y;

	};

	template<class T>
	class Vector3
	{


	public:
		T x;
		T y;
		T z;
	};


}