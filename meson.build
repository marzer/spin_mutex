# This file is a part of marzer/spin_mutex and is subject to the the terms of the MIT license.
# Copyright (c) Mark Gillard <mark.gillard@outlook.com.au>
# See https://github.com/marzer/spin_mutex/blob/master/LICENSE for the full license text.
# SPDX-License-Identifier: MIT

project(
	'spin_mutex',
	'cpp',
	version : '1.0.0',
	meson_version : '>=0.60.0',
	license : 'MIT',
	default_options : [ 'cpp_std=c++11' ]
)

subdir('include')

spin_mutex_dep = declare_dependency(
    include_directories: include_dir
)

if not meson.is_subproject() and get_option('build_tests')
	subdir('tests')
endif


