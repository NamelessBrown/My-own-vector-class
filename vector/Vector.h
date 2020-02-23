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
		Vector3() = delete;


		Vector3(T xx, T yy, T zz)
			:x(xx), y(yy), z(zz)
		{
		}

		Vector3(const Vector3& vec3)
			:x(vec3.x), y(vec3.y), z(vec3.z)
		{
		}

		Vector3 operator+(const Vector3& vec)
		{
			Vector3<T> temp(x, y, z);

			temp.x += vec.x;
			temp.y += vec.y;
			temp.z += vec.z;
			return temp;
		}

		Vector3 operator-(const Vector3& vec)
		{
			Vector3<T> temp(x, y, z);
			temp.x -= vec.x;
			temp.y -= vec.y;
			temp.z -= vec.z;
			return temp;
		}

		bool operator==(const Vector3& vec)
		{
			if (x == vec.x && y == vec.y && z == vec.z)
				return true;
			else
				return false;

		}

	public:
		T x;
		T y;
		T z;
	};


}