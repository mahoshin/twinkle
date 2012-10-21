/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

// Unsupported header

#ifndef _H_HDR_UNSUPPORTED
#define _H_HDR_UNSUPPORTED

#include <list>
#include <string>
#include "header.h"

class t_hdr_unsupported : public t_header {
public:
	list<string>	features;

	t_hdr_unsupported();
	void add_feature(const string &f);
	void set_features(const list<string> &_features);
	bool contains(const string &f) const;
	string encode_value(void) const;
};

#endif
