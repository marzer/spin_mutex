# `mz::spin_mutex` [![MIT license](docs/images/badge-license-MIT.svg)](./LICENSE) [![C++11](docs/images/badge-c++11.svg)][cpp_compilers] [![Sponsor](docs/images/badge-sponsor.svg)][sponsor] [![Gitter](docs/images/badge-gitter.svg)][gitter]

A `std::mutex`-compatible mutex class implemented using atomic spin-waiting.

Based on Erik Rigtorp's article [Correctly implementing a spinlock in C++], with minor changes.

Requires C++11.

<br>

## Synopsis

```cpp
namespace mz
{
    class spin_mutex
    {
        // acquires a lock on the mutex
        void lock() noexcept;

        // tries to acquire a lock on the mutex,
        // returning true if the lock was successfully acquired
        bool try_lock() noexcept;

        // releases the lock currently held on the mutex
        void unlock() noexcept;
    };
}
```

<br>

## Usage

The library is a single header so the easiest way to use it is to drop [spin_mutex.hpp] somewhere in your project.

Alternatively you can add `include` to your include paths then `#include <mz/spin_mutex.hpp>`

There is also support for use as a `meson.build` subproject.

<br>

## License

MIT. See [LICENSE](LICENSE).

<br>

## Contributing

There are three ways you can contribute:

1. Reporting bug or making feature requests [here](https://github.com/marzer/spin_mutex/issues/new)
2. Opening a pull request (⚠&#xFE0F; _caveat - see below_)
3. Becoming a [sponsor] ❤&#xFE0F;

### Pull requests

`spin_mutex.hpp` is programmatically extracted from a much larger project so I won't accept pull requests made for this
repository directly; if you wish to contribute a bugfix or a feature, please find the `spin_mutex` implementation
[in this project](https://github.com/marzer/muu) and propose your changes there instead.
I will then propagate them to this satellite library when they are merged.

[spin_mutex.hpp]: include/mz/spin_mutex.hpp
[license]: ./LICENSE
[cpp_compilers]: https://en.cppreference.com/w/cpp/compiler_support
[gitter]: https://gitter.im/marzer/community
[sponsor]: https://github.com/sponsors/marzer
[Correctly implementing a spinlock in C++]: https://rigtorp.se/spinlock/
