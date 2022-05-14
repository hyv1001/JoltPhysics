// SPDX-FileCopyrightText: 2021 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

JPH_NAMESPACE_BEGIN

class Vec3;
class DVec3;
class Vec4;
class UVec4;
class Vec8;
class UVec8;
class Quat;
class Mat44;

// Types to use for passing arguments to functions
#ifdef JPH_CPU_X86
	using Vec3Arg = const Vec3 &;
	using DVec3Arg = const DVec3 &;
	using Vec4Arg = const Vec4 &;
	using UVec4Arg = const UVec4 &;
	using Vec8Arg = const Vec8 &;
	using UVec8Arg = const UVec8 &;
	using QuatArg = const Quat &;
	using Mat44Arg = const Mat44 &;
#else
	using Vec3Arg = const Vec3;
	using DVec3Arg = const DVec3;
	using Vec4Arg = const Vec4;
	using UVec4Arg = const UVec4;
	using Vec8Arg = const Vec8;
	using UVec8Arg = const UVec8;
	using QuatArg = const Quat;
	using Mat44Arg = const Mat44;
#endif

JPH_NAMESPACE_END
