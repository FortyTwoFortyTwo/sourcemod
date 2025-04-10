/**
 * vim: set ts=4 :
 * =============================================================================
 * SourceMod (C)2004-2008 AlliedModders LLC.  All rights reserved.
 * =============================================================================
 *
 * This file is part of the SourceMod/SourcePawn SDK.
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */

#if defined _version_included
 #endinput
#endif
#define _version_included

#tryinclude <version_auto>

#if !defined _auto_version_included
 #define SOURCEMOD_V_TAG         "manual"
 #define SOURCEMOD_V_REV         0
 #define SOURCEMOD_V_CSET        "0"
 #define SOURCEMOD_V_MAJOR       1               /**< SourceMod Major version */
 #define SOURCEMOD_V_MINOR       13              /**< SourceMod Minor version */
 #define SOURCEMOD_V_RELEASE     0               /**< SourceMod Release version */

 #define SOURCEMOD_VERSION       "1.13.0-manual" /**< SourceMod version string (major.minor.release-tag) */
#endif
