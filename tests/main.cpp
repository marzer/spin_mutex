// This file is a part of marzer/spin_mutex and is subject to the the terms of the MIT license.
// Copyright (c) Mark Gillard <mark.gillard@outlook.com.au>
// See https://github.com/marzer/spin_mutex/blob/master/LICENSE for the full license text.
// SPDX-License-Identifier: MIT

// todo: this isn't really a test, it's just to make sure it compiles correctly. needs actual tests.

#include <mz/spin_mutex.hpp>
#include <mutex>

int main()
{
	mz::spin_mutex mutex;
	mutex.lock();
	mutex.unlock();

	{
		using lock_type = std::unique_lock<mz::spin_mutex>;
		const lock_type lock{ mutex };
	}

	return 0;
}
