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

#include "sipAPIQtGui.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpagelayout.sip"
#include <qpagelayout.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 115 "sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 371 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 41 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 44 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpagesize.sip"
#include <qpagesize.h>
#line 47 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 50 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 52 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 53 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQPagedPaintDevice.cpp"


class sipQPagedPaintDevice : public  ::QPagedPaintDevice
{
public:
    sipQPagedPaintDevice();
    virtual ~sipQPagedPaintDevice();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setMargins(const  ::QPagedPaintDevice::Margins&);
    void setPageSizeMM(const  ::QSizeF&);
    void setPageSize( ::QPagedPaintDevice::PageSize);
    bool newPage();
     ::QPaintEngine* paintEngine() const;
    int metric( ::QPaintDevice::PaintDeviceMetric) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPagedPaintDevice(const sipQPagedPaintDevice &);
    sipQPagedPaintDevice &operator = (const sipQPagedPaintDevice &);

    char sipPyMethods[6];
};

sipQPagedPaintDevice::sipQPagedPaintDevice():  ::QPagedPaintDevice(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPagedPaintDevice::~sipQPagedPaintDevice()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQPagedPaintDevice::setMargins(const  ::QPagedPaintDevice::Margins& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setMargins);

    if (!sipMeth)
    {
         ::QPagedPaintDevice::setMargins(a0);
        return;
    }

    extern void sipVH_QtGui_56(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QPagedPaintDevice::Margins&);

    sipVH_QtGui_56(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSizeMM(const  ::QSizeF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setPageSizeMM);

    if (!sipMeth)
    {
         ::QPagedPaintDevice::setPageSizeMM(a0);
        return;
    }

    extern void sipVH_QtGui_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QSizeF&);

    sipVH_QtGui_55(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSize( ::QPagedPaintDevice::PageSize a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_setPageSize);

    if (!sipMeth)
    {
         ::QPagedPaintDevice::setPageSize(a0);
        return;
    }

    extern void sipVH_QtGui_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QPagedPaintDevice::PageSize);

    sipVH_QtGui_54(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQPagedPaintDevice::newPage()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QPagedPaintDevice,sipName_newPage);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtGui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_28(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QPaintEngine* sipQPagedPaintDevice::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPagedPaintDevice,sipName_paintEngine);

    if (!sipMeth)
        return 0;

    extern  ::QPaintEngine* sipVH_QtGui_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_17(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

int sipQPagedPaintDevice::metric( ::QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return  ::QPagedPaintDevice::metric(a0);

    extern int sipVH_QtGui_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_18(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QPagedPaintDevice_newPage, "newPage(self) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_newPage(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_newPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPagedPaintDevice, sipName_newPage);
                return NULL;
            }

            sipRes = sipCpp->newPage();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_newPage, doc_QPagedPaintDevice_newPage);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSize, "setPageSize(self, QPagedPaintDevice.PageSize)\n"
"setPageSize(self, QPageSize) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QPagedPaintDevice::PageSize a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_PageSize, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QPagedPaintDevice::setPageSize(a0) : sipCpp->setPageSize(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPageSize* a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPageSize, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setPageSize(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSize, doc_QPagedPaintDevice_setPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSize, "pageSize(self) -> QPagedPaintDevice.PageSize");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
             ::QPagedPaintDevice::PageSize sipRes;

            sipRes = sipCpp->pageSize();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QPagedPaintDevice_PageSize);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSize, doc_QPagedPaintDevice_pageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSizeMM, "setPageSizeMM(self, QSizeF)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QSizeF* a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QSizeF, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QPagedPaintDevice::setPageSizeMM(*a0) : sipCpp->setPageSizeMM(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSizeMM, doc_QPagedPaintDevice_setPageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSizeMM, "pageSizeMM(self) -> QSizeF");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
             ::QSizeF*sipRes;

            sipRes = new  ::QSizeF(sipCpp->pageSizeMM());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSizeMM, doc_QPagedPaintDevice_pageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setMargins, "setMargins(self, QPagedPaintDevice.Margins)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QPagedPaintDevice::Margins* a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_Margins, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QPagedPaintDevice::setMargins(*a0) : sipCpp->setMargins(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setMargins, doc_QPagedPaintDevice_setMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_margins, "margins(self) -> QPagedPaintDevice.Margins");

extern "C" {static PyObject *meth_QPagedPaintDevice_margins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_margins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
             ::QPagedPaintDevice::Margins*sipRes;

            sipRes = new  ::QPagedPaintDevice::Margins(sipCpp->margins());

            return sipConvertFromNewType(sipRes,sipType_QPagedPaintDevice_Margins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_margins, doc_QPagedPaintDevice_margins);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageLayout, "setPageLayout(self, QPageLayout) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageLayout(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPageLayout* a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPageLayout, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setPageLayout(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageLayout, doc_QPagedPaintDevice_setPageLayout);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageOrientation, "setPageOrientation(self, QPageLayout.Orientation) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageOrientation(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageOrientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QPageLayout::Orientation a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPageLayout_Orientation, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setPageOrientation(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageOrientation, doc_QPagedPaintDevice_setPageOrientation);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageMargins, "setPageMargins(self, QMarginsF) -> bool\n"
"setPageMargins(self, QMarginsF, QPageLayout.Unit) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageMargins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMarginsF* a0;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QMarginsF, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setPageMargins(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QMarginsF* a0;
         ::QPageLayout::Unit a1;
         ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QMarginsF, &a0, sipType_QPageLayout_Unit, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->setPageMargins(*a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageMargins, doc_QPagedPaintDevice_setPageMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageLayout, "pageLayout(self) -> QPageLayout");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageLayout(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
             ::QPageLayout*sipRes;

            sipRes = new  ::QPageLayout(sipCpp->pageLayout());

            return sipConvertFromNewType(sipRes,sipType_QPageLayout,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageLayout, doc_QPagedPaintDevice_pageLayout);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QPagedPaintDevice(void *, const sipTypeDef *);}
static void *cast_QPagedPaintDevice(void *sipCppV, const sipTypeDef *targetType)
{
     ::QPagedPaintDevice *sipCpp = reinterpret_cast< ::QPagedPaintDevice *>(sipCppV);

    if (targetType == sipType_QPaintDevice)
        return static_cast< ::QPaintDevice *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPagedPaintDevice(void *, int);}
static void release_QPagedPaintDevice(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPagedPaintDevice *>(sipCppV);
    else
        delete reinterpret_cast< ::QPagedPaintDevice *>(sipCppV);
}


extern "C" {static void dealloc_QPagedPaintDevice(sipSimpleWrapper *);}
static void dealloc_QPagedPaintDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQPagedPaintDevice *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPagedPaintDevice(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QPagedPaintDevice(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPagedPaintDevice(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPagedPaintDevice *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQPagedPaintDevice();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPagedPaintDevice[] = {{186, 255, 1}};


static PyMethodDef methods_QPagedPaintDevice[] = {
    {SIP_MLNAME_CAST(sipName_margins), meth_QPagedPaintDevice_margins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_margins)},
    {SIP_MLNAME_CAST(sipName_newPage), meth_QPagedPaintDevice_newPage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_newPage)},
    {SIP_MLNAME_CAST(sipName_pageLayout), meth_QPagedPaintDevice_pageLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageLayout)},
    {SIP_MLNAME_CAST(sipName_pageSize), meth_QPagedPaintDevice_pageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSize)},
    {SIP_MLNAME_CAST(sipName_pageSizeMM), meth_QPagedPaintDevice_pageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSizeMM)},
    {SIP_MLNAME_CAST(sipName_setMargins), meth_QPagedPaintDevice_setMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setMargins)},
    {SIP_MLNAME_CAST(sipName_setPageLayout), meth_QPagedPaintDevice_setPageLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageLayout)},
    {SIP_MLNAME_CAST(sipName_setPageMargins), meth_QPagedPaintDevice_setPageMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageMargins)},
    {SIP_MLNAME_CAST(sipName_setPageOrientation), meth_QPagedPaintDevice_setPageOrientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageOrientation)},
    {SIP_MLNAME_CAST(sipName_setPageSize), meth_QPagedPaintDevice_setPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSize)},
    {SIP_MLNAME_CAST(sipName_setPageSizeMM), meth_QPagedPaintDevice_setPageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSizeMM)}
};

static sipEnumMemberDef enummembers_QPagedPaintDevice[] = {
    {sipName_A0, static_cast<int>( ::QPagedPaintDevice::A0), 185},
    {sipName_A1, static_cast<int>( ::QPagedPaintDevice::A1), 185},
    {sipName_A10, static_cast<int>( ::QPagedPaintDevice::A10), 185},
    {sipName_A2, static_cast<int>( ::QPagedPaintDevice::A2), 185},
    {sipName_A3, static_cast<int>( ::QPagedPaintDevice::A3), 185},
    {sipName_A3Extra, static_cast<int>( ::QPagedPaintDevice::A3Extra), 185},
    {sipName_A4, static_cast<int>( ::QPagedPaintDevice::A4), 185},
    {sipName_A4Extra, static_cast<int>( ::QPagedPaintDevice::A4Extra), 185},
    {sipName_A4Plus, static_cast<int>( ::QPagedPaintDevice::A4Plus), 185},
    {sipName_A4Small, static_cast<int>( ::QPagedPaintDevice::A4Small), 185},
    {sipName_A5, static_cast<int>( ::QPagedPaintDevice::A5), 185},
    {sipName_A5Extra, static_cast<int>( ::QPagedPaintDevice::A5Extra), 185},
    {sipName_A6, static_cast<int>( ::QPagedPaintDevice::A6), 185},
    {sipName_A7, static_cast<int>( ::QPagedPaintDevice::A7), 185},
    {sipName_A8, static_cast<int>( ::QPagedPaintDevice::A8), 185},
    {sipName_A9, static_cast<int>( ::QPagedPaintDevice::A9), 185},
    {sipName_AnsiA, static_cast<int>( ::QPagedPaintDevice::AnsiA), 185},
    {sipName_AnsiB, static_cast<int>( ::QPagedPaintDevice::AnsiB), 185},
    {sipName_AnsiC, static_cast<int>( ::QPagedPaintDevice::AnsiC), 185},
    {sipName_AnsiD, static_cast<int>( ::QPagedPaintDevice::AnsiD), 185},
    {sipName_AnsiE, static_cast<int>( ::QPagedPaintDevice::AnsiE), 185},
    {sipName_ArchA, static_cast<int>( ::QPagedPaintDevice::ArchA), 185},
    {sipName_ArchB, static_cast<int>( ::QPagedPaintDevice::ArchB), 185},
    {sipName_ArchC, static_cast<int>( ::QPagedPaintDevice::ArchC), 185},
    {sipName_ArchD, static_cast<int>( ::QPagedPaintDevice::ArchD), 185},
    {sipName_ArchE, static_cast<int>( ::QPagedPaintDevice::ArchE), 185},
    {sipName_B0, static_cast<int>( ::QPagedPaintDevice::B0), 185},
    {sipName_B1, static_cast<int>( ::QPagedPaintDevice::B1), 185},
    {sipName_B10, static_cast<int>( ::QPagedPaintDevice::B10), 185},
    {sipName_B2, static_cast<int>( ::QPagedPaintDevice::B2), 185},
    {sipName_B3, static_cast<int>( ::QPagedPaintDevice::B3), 185},
    {sipName_B4, static_cast<int>( ::QPagedPaintDevice::B4), 185},
    {sipName_B5, static_cast<int>( ::QPagedPaintDevice::B5), 185},
    {sipName_B5Extra, static_cast<int>( ::QPagedPaintDevice::B5Extra), 185},
    {sipName_B6, static_cast<int>( ::QPagedPaintDevice::B6), 185},
    {sipName_B7, static_cast<int>( ::QPagedPaintDevice::B7), 185},
    {sipName_B8, static_cast<int>( ::QPagedPaintDevice::B8), 185},
    {sipName_B9, static_cast<int>( ::QPagedPaintDevice::B9), 185},
    {sipName_C5E, static_cast<int>( ::QPagedPaintDevice::C5E), 185},
    {sipName_Comm10E, static_cast<int>( ::QPagedPaintDevice::Comm10E), 185},
    {sipName_Custom, static_cast<int>( ::QPagedPaintDevice::Custom), 185},
    {sipName_DLE, static_cast<int>( ::QPagedPaintDevice::DLE), 185},
    {sipName_DoublePostcard, static_cast<int>( ::QPagedPaintDevice::DoublePostcard), 185},
    {sipName_Envelope10, static_cast<int>( ::QPagedPaintDevice::Envelope10), 185},
    {sipName_Envelope11, static_cast<int>( ::QPagedPaintDevice::Envelope11), 185},
    {sipName_Envelope12, static_cast<int>( ::QPagedPaintDevice::Envelope12), 185},
    {sipName_Envelope14, static_cast<int>( ::QPagedPaintDevice::Envelope14), 185},
    {sipName_Envelope9, static_cast<int>( ::QPagedPaintDevice::Envelope9), 185},
    {sipName_EnvelopeB4, static_cast<int>( ::QPagedPaintDevice::EnvelopeB4), 185},
    {sipName_EnvelopeB5, static_cast<int>( ::QPagedPaintDevice::EnvelopeB5), 185},
    {sipName_EnvelopeB6, static_cast<int>( ::QPagedPaintDevice::EnvelopeB6), 185},
    {sipName_EnvelopeC0, static_cast<int>( ::QPagedPaintDevice::EnvelopeC0), 185},
    {sipName_EnvelopeC1, static_cast<int>( ::QPagedPaintDevice::EnvelopeC1), 185},
    {sipName_EnvelopeC2, static_cast<int>( ::QPagedPaintDevice::EnvelopeC2), 185},
    {sipName_EnvelopeC3, static_cast<int>( ::QPagedPaintDevice::EnvelopeC3), 185},
    {sipName_EnvelopeC4, static_cast<int>( ::QPagedPaintDevice::EnvelopeC4), 185},
    {sipName_EnvelopeC5, static_cast<int>( ::QPagedPaintDevice::EnvelopeC5), 185},
    {sipName_EnvelopeC6, static_cast<int>( ::QPagedPaintDevice::EnvelopeC6), 185},
    {sipName_EnvelopeC65, static_cast<int>( ::QPagedPaintDevice::EnvelopeC65), 185},
    {sipName_EnvelopeC7, static_cast<int>( ::QPagedPaintDevice::EnvelopeC7), 185},
    {sipName_EnvelopeChou3, static_cast<int>( ::QPagedPaintDevice::EnvelopeChou3), 185},
    {sipName_EnvelopeChou4, static_cast<int>( ::QPagedPaintDevice::EnvelopeChou4), 185},
    {sipName_EnvelopeDL, static_cast<int>( ::QPagedPaintDevice::EnvelopeDL), 185},
    {sipName_EnvelopeInvite, static_cast<int>( ::QPagedPaintDevice::EnvelopeInvite), 185},
    {sipName_EnvelopeItalian, static_cast<int>( ::QPagedPaintDevice::EnvelopeItalian), 185},
    {sipName_EnvelopeKaku2, static_cast<int>( ::QPagedPaintDevice::EnvelopeKaku2), 185},
    {sipName_EnvelopeKaku3, static_cast<int>( ::QPagedPaintDevice::EnvelopeKaku3), 185},
    {sipName_EnvelopeMonarch, static_cast<int>( ::QPagedPaintDevice::EnvelopeMonarch), 185},
    {sipName_EnvelopePersonal, static_cast<int>( ::QPagedPaintDevice::EnvelopePersonal), 185},
    {sipName_EnvelopePrc1, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc1), 185},
    {sipName_EnvelopePrc10, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc10), 185},
    {sipName_EnvelopePrc2, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc2), 185},
    {sipName_EnvelopePrc3, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc3), 185},
    {sipName_EnvelopePrc4, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc4), 185},
    {sipName_EnvelopePrc5, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc5), 185},
    {sipName_EnvelopePrc6, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc6), 185},
    {sipName_EnvelopePrc7, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc7), 185},
    {sipName_EnvelopePrc8, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc8), 185},
    {sipName_EnvelopePrc9, static_cast<int>( ::QPagedPaintDevice::EnvelopePrc9), 185},
    {sipName_EnvelopeYou4, static_cast<int>( ::QPagedPaintDevice::EnvelopeYou4), 185},
    {sipName_Executive, static_cast<int>( ::QPagedPaintDevice::Executive), 185},
    {sipName_ExecutiveStandard, static_cast<int>( ::QPagedPaintDevice::ExecutiveStandard), 185},
    {sipName_FanFoldGerman, static_cast<int>( ::QPagedPaintDevice::FanFoldGerman), 185},
    {sipName_FanFoldGermanLegal, static_cast<int>( ::QPagedPaintDevice::FanFoldGermanLegal), 185},
    {sipName_FanFoldUS, static_cast<int>( ::QPagedPaintDevice::FanFoldUS), 185},
    {sipName_Folio, static_cast<int>( ::QPagedPaintDevice::Folio), 185},
    {sipName_Imperial10x11, static_cast<int>( ::QPagedPaintDevice::Imperial10x11), 185},
    {sipName_Imperial10x13, static_cast<int>( ::QPagedPaintDevice::Imperial10x13), 185},
    {sipName_Imperial10x14, static_cast<int>( ::QPagedPaintDevice::Imperial10x14), 185},
    {sipName_Imperial12x11, static_cast<int>( ::QPagedPaintDevice::Imperial12x11), 185},
    {sipName_Imperial15x11, static_cast<int>( ::QPagedPaintDevice::Imperial15x11), 185},
    {sipName_Imperial7x9, static_cast<int>( ::QPagedPaintDevice::Imperial7x9), 185},
    {sipName_Imperial8x10, static_cast<int>( ::QPagedPaintDevice::Imperial8x10), 185},
    {sipName_Imperial9x11, static_cast<int>( ::QPagedPaintDevice::Imperial9x11), 185},
    {sipName_Imperial9x12, static_cast<int>( ::QPagedPaintDevice::Imperial9x12), 185},
    {sipName_JisB0, static_cast<int>( ::QPagedPaintDevice::JisB0), 185},
    {sipName_JisB1, static_cast<int>( ::QPagedPaintDevice::JisB1), 185},
    {sipName_JisB10, static_cast<int>( ::QPagedPaintDevice::JisB10), 185},
    {sipName_JisB2, static_cast<int>( ::QPagedPaintDevice::JisB2), 185},
    {sipName_JisB3, static_cast<int>( ::QPagedPaintDevice::JisB3), 185},
    {sipName_JisB4, static_cast<int>( ::QPagedPaintDevice::JisB4), 185},
    {sipName_JisB5, static_cast<int>( ::QPagedPaintDevice::JisB5), 185},
    {sipName_JisB6, static_cast<int>( ::QPagedPaintDevice::JisB6), 185},
    {sipName_JisB7, static_cast<int>( ::QPagedPaintDevice::JisB7), 185},
    {sipName_JisB8, static_cast<int>( ::QPagedPaintDevice::JisB8), 185},
    {sipName_JisB9, static_cast<int>( ::QPagedPaintDevice::JisB9), 185},
    {sipName_LastPageSize, static_cast<int>( ::QPagedPaintDevice::LastPageSize), 185},
    {sipName_Ledger, static_cast<int>( ::QPagedPaintDevice::Ledger), 185},
    {sipName_Legal, static_cast<int>( ::QPagedPaintDevice::Legal), 185},
    {sipName_LegalExtra, static_cast<int>( ::QPagedPaintDevice::LegalExtra), 185},
    {sipName_Letter, static_cast<int>( ::QPagedPaintDevice::Letter), 185},
    {sipName_LetterExtra, static_cast<int>( ::QPagedPaintDevice::LetterExtra), 185},
    {sipName_LetterPlus, static_cast<int>( ::QPagedPaintDevice::LetterPlus), 185},
    {sipName_LetterSmall, static_cast<int>( ::QPagedPaintDevice::LetterSmall), 185},
    {sipName_NPaperSize, static_cast<int>( ::QPagedPaintDevice::NPaperSize), 185},
    {sipName_Note, static_cast<int>( ::QPagedPaintDevice::Note), 185},
    {sipName_Postcard, static_cast<int>( ::QPagedPaintDevice::Postcard), 185},
    {sipName_Prc16K, static_cast<int>( ::QPagedPaintDevice::Prc16K), 185},
    {sipName_Prc32K, static_cast<int>( ::QPagedPaintDevice::Prc32K), 185},
    {sipName_Prc32KBig, static_cast<int>( ::QPagedPaintDevice::Prc32KBig), 185},
    {sipName_Quarto, static_cast<int>( ::QPagedPaintDevice::Quarto), 185},
    {sipName_Statement, static_cast<int>( ::QPagedPaintDevice::Statement), 185},
    {sipName_SuperA, static_cast<int>( ::QPagedPaintDevice::SuperA), 185},
    {sipName_SuperB, static_cast<int>( ::QPagedPaintDevice::SuperB), 185},
    {sipName_Tabloid, static_cast<int>( ::QPagedPaintDevice::Tabloid), 185},
    {sipName_TabloidExtra, static_cast<int>( ::QPagedPaintDevice::TabloidExtra), 185},
};

PyDoc_STRVAR(doc_QPagedPaintDevice, "\1QPagedPaintDevice()");


static pyqt5ClassPluginDef plugin_QPagedPaintDevice = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPagedPaintDevice = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPagedPaintDevice,
        {0},
        &plugin_QPagedPaintDevice
    },
    {
        sipNameNr_QPagedPaintDevice,
        {0, 0, 1},
        11, methods_QPagedPaintDevice,
        126, enummembers_QPagedPaintDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPagedPaintDevice,
    -1,
    -1,
    supers_QPagedPaintDevice,
    0,
    init_type_QPagedPaintDevice,
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
    dealloc_QPagedPaintDevice,
    0,
    0,
    0,
    release_QPagedPaintDevice,
    cast_QPagedPaintDevice,
    0,
    0,
    0,
    0,
    0,
    0
};