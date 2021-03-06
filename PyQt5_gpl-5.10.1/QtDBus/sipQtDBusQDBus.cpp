/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtDBus.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtDBus/sipQtDBusQDBus.cpp"


static sipEnumMemberDef enummembers_QDBus[] = {
    {sipName_AutoDetect, static_cast<int>( ::QDBus::AutoDetect), 1},
    {sipName_Block, static_cast<int>( ::QDBus::Block), 1},
    {sipName_BlockWithGui, static_cast<int>( ::QDBus::BlockWithGui), 1},
    {sipName_NoBlock, static_cast<int>( ::QDBus::NoBlock), 1},
};


static pyqt5ClassPluginDef plugin_QDBus = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtDBus_QDBus = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_NAMESPACE,
        sipNameNr_QDBus,
        {0},
        &plugin_QDBus
    },
    {
        sipNameNr_QDBus,
        {0, 0, 1},
        0, 0,
        4, enummembers_QDBus,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
