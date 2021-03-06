#ifndef fooraoputilfoo
#define fooraoputilfoo

/***
  This file is part of PulseAudio.

  Copyright 2013 Martin Blanchard

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

int pa_raop_base64_encode(const void *data, int len, char **str);
int pa_raop_base64_decode(const char *str, void *data);

int pa_raop_md5_hash(const char *data, int len, char **str);

int pa_raop_basic_response(const char *user, const char *pwd, char **str);
int pa_raop_digest_response(const char *user, const char *realm, const char *password,
                            const char *nonce, const char *uri, char **str);

#endif
