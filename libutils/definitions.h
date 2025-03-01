/*
  Copyright 2022 Northern.tech AS

  This file is part of CFEngine 3 - written and maintained by Northern.tech AS.

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation; version 3.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA

  To the extent this program is licensed as part of the Enterprise
  versions of CFEngine, the applicable Commercial Open Source License
  (COSL) may apply to this file if you as a licensee so wish it. See
  included file COSL.txt.
*/

#ifndef CFENGINE_DEFINITIONS_H
#define CFENGINE_DEFINITIONS_H

/*****************************************************************************
 * Metric prefixes
 *****************************************************************************/
#define KIBIBYTE(n) (n * 1024UL)
#define MEBIBYTE(n) (n * 1024UL * 1024UL)
#define GIBIBYTE(n) (n * 1024ULL * 1024ULL * 1024ULL)
#define TEBIBYTE(n) (n * 1024ULL * 1024ULL * 1024ULL * 1024ULL)

/*****************************************************************************
 * Size related defines							     *
 *****************************************************************************/
#define CF_MAXSIZE  102400000
#define CF_BILLION 1000000000L

#define CF_BLOWFISHSIZE    16
#define CF_BUFFERMARGIN   128
#define CF_MAXVARSIZE    1024
#define CF_MAXSIDSIZE    2048      /* Windows only: Max size (bytes) of
                                     security identifiers */

// Limit database names and table names so they can be combined
// into CF_MAXVARSIZE without truncation
// NOTE: Databases like PostgreSQL and MySQL actually have stricter limits
#define CF_MAXTABLENAMESIZE 256
#define CF_MAXDBNAMESIZE    256

/* Max size of plaintext in one transaction, see net.c:SendTransaction(),
   leave space for encryption padding (assuming max 64*8 = 512-bit cipher
   block size). */
#define CF_SMALLBUF     128
#define CF_BUFSIZE     4096
#define CF_EXPANDSIZE (2 * CF_BUFSIZE)


/*****************************************************************************
 *                          File permissions                                 *
 *****************************************************************************/
// 0600 - Read/Write for owner
#define CF_PERMS_DEFAULT  S_IRUSR | S_IWUSR
// 0644 - World readable
#define CF_PERMS_SHARED   CF_PERMS_DEFAULT | S_IRGRP | S_IROTH

#endif // CFENGINE_DEFINITIONS_H
