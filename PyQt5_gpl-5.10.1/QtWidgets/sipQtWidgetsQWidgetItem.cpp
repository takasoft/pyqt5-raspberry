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

#include "sipAPIQtWidgets.h"

#line 94 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 71 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qlayout.sip"
#include <qlayout.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQWidgetItem.cpp"


class sipQWidgetItem : public  ::QWidgetItem
{
public:
    sipQWidgetItem( ::QWidget*);
    virtual ~sipQWidgetItem();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QSize sizeHint() const;
     ::QSize minimumSize() const;
     ::QSize maximumSize() const;
     ::Qt::Orientations expandingDirections() const;
    void setGeometry(const  ::QRect&);
     ::QRect geometry() const;
    bool isEmpty() const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
    void invalidate();
     ::QWidget* widget();
     ::QLayout* layout();
     ::QSpacerItem* spacerItem();
     ::QSizePolicy::ControlTypes controlTypes() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWidgetItem(const sipQWidgetItem &);
    sipQWidgetItem &operator = (const sipQWidgetItem &);

    char sipPyMethods[15];
};

sipQWidgetItem::sipQWidgetItem( ::QWidget*a0):  ::QWidgetItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWidgetItem::~sipQWidgetItem()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QSize sipQWidgetItem::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_sizeHint);

    if (!sipMeth)
        return  ::QWidgetItem::sizeHint();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSize sipQWidgetItem::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_minimumSize);

    if (!sipMeth)
        return  ::QWidgetItem::minimumSize();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSize sipQWidgetItem::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_maximumSize);

    if (!sipMeth)
        return  ::QWidgetItem::maximumSize();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::Qt::Orientations sipQWidgetItem::expandingDirections() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_expandingDirections);

    if (!sipMeth)
        return  ::QWidgetItem::expandingDirections();

    extern  ::Qt::Orientations sipVH_QtWidgets_75(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_75(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQWidgetItem::setGeometry(const  ::QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_setGeometry);

    if (!sipMeth)
    {
         ::QWidgetItem::setGeometry(a0);
        return;
    }

    extern void sipVH_QtWidgets_76(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QRect&);

    sipVH_QtWidgets_76(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QRect sipQWidgetItem::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_geometry);

    if (!sipMeth)
        return  ::QWidgetItem::geometry();

    extern  ::QRect sipVH_QtWidgets_77(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_77(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQWidgetItem::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_isEmpty);

    if (!sipMeth)
        return  ::QWidgetItem::isEmpty();

    extern bool sipVH_QtWidgets_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_32(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQWidgetItem::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_hasHeightForWidth);

    if (!sipMeth)
        return  ::QWidgetItem::hasHeightForWidth();

    extern bool sipVH_QtWidgets_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_32(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

int sipQWidgetItem::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_heightForWidth);

    if (!sipMeth)
        return  ::QWidgetItem::heightForWidth(a0);

    extern int sipVH_QtWidgets_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_11(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

int sipQWidgetItem::minimumHeightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_minimumHeightForWidth);

    if (!sipMeth)
        return  ::QWidgetItem::minimumHeightForWidth(a0);

    extern int sipVH_QtWidgets_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_11(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQWidgetItem::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_invalidate);

    if (!sipMeth)
    {
         ::QWidgetItem::invalidate();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QWidget* sipQWidgetItem::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_widget);

    if (!sipMeth)
        return  ::QWidgetItem::widget();

    extern  ::QWidget* sipVH_QtWidgets_78(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_78(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QLayout* sipQWidgetItem::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_layout);

    if (!sipMeth)
        return  ::QWidgetItem::layout();

    extern  ::QLayout* sipVH_QtWidgets_79(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_79(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSpacerItem* sipQWidgetItem::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_spacerItem);

    if (!sipMeth)
        return  ::QWidgetItem::spacerItem();

    extern  ::QSpacerItem* sipVH_QtWidgets_80(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_80(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSizePolicy::ControlTypes sipQWidgetItem::controlTypes() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,NULL,sipName_controlTypes);

    if (!sipMeth)
        return  ::QWidgetItem::controlTypes();

    extern  ::QSizePolicy::ControlTypes sipVH_QtWidgets_81(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_81(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QWidgetItem_sizeHint, "sizeHint(self) -> QSize");

extern "C" {static PyObject *meth_QWidgetItem_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize((sipSelfWasArg ? sipCpp-> ::QWidgetItem::sizeHint() : sipCpp->sizeHint()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_sizeHint, doc_QWidgetItem_sizeHint);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_minimumSize, "minimumSize(self) -> QSize");

extern "C" {static PyObject *meth_QWidgetItem_minimumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_minimumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize((sipSelfWasArg ? sipCpp-> ::QWidgetItem::minimumSize() : sipCpp->minimumSize()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_minimumSize, doc_QWidgetItem_minimumSize);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_maximumSize, "maximumSize(self) -> QSize");

extern "C" {static PyObject *meth_QWidgetItem_maximumSize(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_maximumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize((sipSelfWasArg ? sipCpp-> ::QWidgetItem::maximumSize() : sipCpp->maximumSize()));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_maximumSize, doc_QWidgetItem_maximumSize);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_expandingDirections, "expandingDirections(self) -> Qt.Orientations");

extern "C" {static PyObject *meth_QWidgetItem_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::Qt::Orientations*sipRes;

            sipRes = new  ::Qt::Orientations((sipSelfWasArg ? sipCpp-> ::QWidgetItem::expandingDirections() : sipCpp->expandingDirections()));

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_expandingDirections, doc_QWidgetItem_expandingDirections);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QWidgetItem_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QWidgetItem::isEmpty() : sipCpp->isEmpty());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_isEmpty, doc_QWidgetItem_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_setGeometry, "setGeometry(self, QRect)");

extern "C" {static PyObject *meth_QWidgetItem_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QRect* a0;
         ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWidgetItem, &sipCpp, sipType_QRect, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QWidgetItem::setGeometry(*a0) : sipCpp->setGeometry(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_setGeometry, doc_QWidgetItem_setGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_geometry, "geometry(self) -> QRect");

extern "C" {static PyObject *meth_QWidgetItem_geometry(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect((sipSelfWasArg ? sipCpp-> ::QWidgetItem::geometry() : sipCpp->geometry()));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_geometry, doc_QWidgetItem_geometry);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_widget, "widget(self) -> QWidget");

extern "C" {static PyObject *meth_QWidgetItem_widget(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QWidget*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QWidgetItem::widget() : sipCpp->widget());

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_widget, doc_QWidgetItem_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_hasHeightForWidth, "hasHeightForWidth(self) -> bool");

extern "C" {static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QWidgetItem::hasHeightForWidth() : sipCpp->hasHeightForWidth());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_hasHeightForWidth, doc_QWidgetItem_hasHeightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_heightForWidth, "heightForWidth(self, int) -> int");

extern "C" {static PyObject *meth_QWidgetItem_heightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_heightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWidgetItem, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QWidgetItem::heightForWidth(a0) : sipCpp->heightForWidth(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_heightForWidth, doc_QWidgetItem_heightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QWidgetItem_controlTypes, "controlTypes(self) -> QSizePolicy.ControlTypes");

extern "C" {static PyObject *meth_QWidgetItem_controlTypes(PyObject *, PyObject *);}
static PyObject *meth_QWidgetItem_controlTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QWidgetItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWidgetItem, &sipCpp))
        {
             ::QSizePolicy::ControlTypes*sipRes;

            sipRes = new  ::QSizePolicy::ControlTypes((sipSelfWasArg ? sipCpp-> ::QWidgetItem::controlTypes() : sipCpp->controlTypes()));

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWidgetItem, sipName_controlTypes, doc_QWidgetItem_controlTypes);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QWidgetItem(void *, const sipTypeDef *);}
static void *cast_QWidgetItem(void *sipCppV, const sipTypeDef *targetType)
{
     ::QWidgetItem *sipCpp = reinterpret_cast< ::QWidgetItem *>(sipCppV);

    if (targetType == sipType_QLayoutItem)
        return static_cast< ::QLayoutItem *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWidgetItem(void *, int);}
static void release_QWidgetItem(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWidgetItem *>(sipCppV);
    else
        delete reinterpret_cast< ::QWidgetItem *>(sipCppV);
}


extern "C" {static void dealloc_QWidgetItem(sipSimpleWrapper *);}
static void dealloc_QWidgetItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQWidgetItem *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWidgetItem(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QWidgetItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWidgetItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWidgetItem *sipCpp = 0;

    {
         ::QWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QWidget, &a0))
        {
            sipCpp = new sipQWidgetItem(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWidgetItem[] = {{188, 255, 1}};


static PyMethodDef methods_QWidgetItem[] = {
    {SIP_MLNAME_CAST(sipName_controlTypes), meth_QWidgetItem_controlTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_controlTypes)},
    {SIP_MLNAME_CAST(sipName_expandingDirections), meth_QWidgetItem_expandingDirections, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_expandingDirections)},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QWidgetItem_geometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_geometry)},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QWidgetItem_hasHeightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_hasHeightForWidth)},
    {SIP_MLNAME_CAST(sipName_heightForWidth), meth_QWidgetItem_heightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_heightForWidth)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QWidgetItem_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_isEmpty)},
    {SIP_MLNAME_CAST(sipName_maximumSize), meth_QWidgetItem_maximumSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_maximumSize)},
    {SIP_MLNAME_CAST(sipName_minimumSize), meth_QWidgetItem_minimumSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_minimumSize)},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QWidgetItem_setGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_setGeometry)},
    {SIP_MLNAME_CAST(sipName_sizeHint), meth_QWidgetItem_sizeHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_sizeHint)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QWidgetItem_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QWidgetItem_widget)}
};

PyDoc_STRVAR(doc_QWidgetItem, "\1QWidgetItem(QWidget)");


static pyqt5ClassPluginDef plugin_QWidgetItem = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QWidgetItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWidgetItem,
        {0},
        &plugin_QWidgetItem
    },
    {
        sipNameNr_QWidgetItem,
        {0, 0, 1},
        11, methods_QWidgetItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWidgetItem,
    -1,
    -1,
    supers_QWidgetItem,
    0,
    init_type_QWidgetItem,
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
    dealloc_QWidgetItem,
    0,
    0,
    0,
    release_QWidgetItem,
    cast_QWidgetItem,
    0,
    0,
    0,
    0,
    0,
    0
};
