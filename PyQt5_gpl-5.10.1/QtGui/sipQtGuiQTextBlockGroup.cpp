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

#line 47 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"

#line 36 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 127 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 59 "/home/pi/PyQt5_gpl-5.10.1/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 84 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 87 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 90 "/home/pi/PyQt5_gpl-5.10.1/QtGui/sipQtGuiQTextBlockGroup.cpp"


class sipQTextBlockGroup : public  ::QTextBlockGroup
{
public:
    sipQTextBlockGroup( ::QTextDocument*);
    virtual ~sipQTextBlockGroup();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void blockFormatChanged(const  ::QTextBlock&);
    void blockRemoved(const  ::QTextBlock&);
    void blockInserted(const  ::QTextBlock&);
    void disconnectNotify(const  ::QMetaMethod&);
    void connectNotify(const  ::QMetaMethod&);
    void customEvent( ::QEvent*);
    void childEvent( ::QChildEvent*);
    void timerEvent( ::QTimerEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    bool event( ::QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextBlockGroup(const sipQTextBlockGroup &);
    sipQTextBlockGroup &operator = (const sipQTextBlockGroup &);

    char sipPyMethods[10];
};

sipQTextBlockGroup::sipQTextBlockGroup( ::QTextDocument*a0):  ::QTextBlockGroup(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextBlockGroup::~sipQTextBlockGroup()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQTextBlockGroup::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QTextBlockGroup);

    return  ::QTextBlockGroup::metaObject();
}

int sipQTextBlockGroup::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QTextBlockGroup::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTextBlockGroup,_c,_id,_a);

    return _id;
}

void *sipQTextBlockGroup::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QTextBlockGroup, _clname, &sipCpp) ? sipCpp :  ::QTextBlockGroup::qt_metacast(_clname));
}

void sipQTextBlockGroup::blockFormatChanged(const  ::QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_blockFormatChanged);

    if (!sipMeth)
    {
         ::QTextBlockGroup::blockFormatChanged(a0);
        return;
    }

    extern void sipVH_QtGui_106(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QTextBlock&);

    sipVH_QtGui_106(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::blockRemoved(const  ::QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_blockRemoved);

    if (!sipMeth)
    {
         ::QTextBlockGroup::blockRemoved(a0);
        return;
    }

    extern void sipVH_QtGui_106(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QTextBlock&);

    sipVH_QtGui_106(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::blockInserted(const  ::QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_blockInserted);

    if (!sipMeth)
    {
         ::QTextBlockGroup::blockInserted(a0);
        return;
    }

    extern void sipVH_QtGui_106(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QTextBlock&);

    sipVH_QtGui_106(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QTextBlockGroup::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QTextBlockGroup::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QTextBlockGroup::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_1(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QTextBlockGroup::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_2(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTextBlockGroup::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QTextBlockGroup::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_3(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQTextBlockGroup::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QTextBlockGroup::eventFilter(a0,a1);

    extern bool sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_4(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQTextBlockGroup::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QTextBlockGroup::event(a0);

    extern bool sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_5(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTextBlockGroup_blockInserted, "blockInserted(self, QTextBlock)");

extern "C" {static PyObject *meth_QTextBlockGroup_blockInserted(PyObject *, PyObject *);}
static PyObject *meth_QTextBlockGroup_blockInserted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QTextBlock* a0;
         ::QTextBlockGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QTextBlockGroup, &sipCpp, sipType_QTextBlock, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QTextBlockGroup::blockInserted(*a0) : sipCpp->blockInserted(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlockGroup, sipName_blockInserted, doc_QTextBlockGroup_blockInserted);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlockGroup_blockRemoved, "blockRemoved(self, QTextBlock)");

extern "C" {static PyObject *meth_QTextBlockGroup_blockRemoved(PyObject *, PyObject *);}
static PyObject *meth_QTextBlockGroup_blockRemoved(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QTextBlock* a0;
         ::QTextBlockGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QTextBlockGroup, &sipCpp, sipType_QTextBlock, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QTextBlockGroup::blockRemoved(*a0) : sipCpp->blockRemoved(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlockGroup, sipName_blockRemoved, doc_QTextBlockGroup_blockRemoved);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlockGroup_blockFormatChanged, "blockFormatChanged(self, QTextBlock)");

extern "C" {static PyObject *meth_QTextBlockGroup_blockFormatChanged(PyObject *, PyObject *);}
static PyObject *meth_QTextBlockGroup_blockFormatChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QTextBlock* a0;
         ::QTextBlockGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QTextBlockGroup, &sipCpp, sipType_QTextBlock, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QTextBlockGroup::blockFormatChanged(*a0) : sipCpp->blockFormatChanged(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlockGroup, sipName_blockFormatChanged, doc_QTextBlockGroup_blockFormatChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlockGroup_blockList, "blockList(self) -> object");

extern "C" {static PyObject *meth_QTextBlockGroup_blockList(PyObject *, PyObject *);}
static PyObject *meth_QTextBlockGroup_blockList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTextBlockGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QTextBlockGroup, &sipCpp))
        {
            QList< ::QTextBlock>*sipRes;

            sipRes = new QList< ::QTextBlock>(sipCpp->blockList());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlockGroup, sipName_blockList, doc_QTextBlockGroup_blockList);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTextBlockGroup(void *, const sipTypeDef *);}
static void *cast_QTextBlockGroup(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTextBlockGroup *sipCpp = reinterpret_cast< ::QTextBlockGroup *>(sipCppV);

    if (targetType == sipType_QTextObject)
        return static_cast< ::QTextObject *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlockGroup(void *, int);}
static void release_QTextBlockGroup(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextBlockGroup *>(sipCppV);
}


extern "C" {static void dealloc_QTextBlockGroup(sipSimpleWrapper *);}
static void dealloc_QTextBlockGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTextBlockGroup *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextBlockGroup(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTextBlockGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlockGroup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextBlockGroup *sipCpp = 0;

    {
         ::QTextDocument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextDocument, &a0))
        {
            sipCpp = new sipQTextBlockGroup(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextBlockGroup[] = {{325, 255, 1}};


static PyMethodDef methods_QTextBlockGroup[] = {
    {SIP_MLNAME_CAST(sipName_blockFormatChanged), meth_QTextBlockGroup_blockFormatChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlockGroup_blockFormatChanged)},
    {SIP_MLNAME_CAST(sipName_blockInserted), meth_QTextBlockGroup_blockInserted, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlockGroup_blockInserted)},
    {SIP_MLNAME_CAST(sipName_blockList), meth_QTextBlockGroup_blockList, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlockGroup_blockList)},
    {SIP_MLNAME_CAST(sipName_blockRemoved), meth_QTextBlockGroup_blockRemoved, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlockGroup_blockRemoved)}
};

PyDoc_STRVAR(doc_QTextBlockGroup, "\1QTextBlockGroup(QTextDocument)");


static pyqt5ClassPluginDef plugin_QTextBlockGroup = {
    & ::QTextBlockGroup::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QTextBlockGroup = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextBlockGroup,
        {0},
        &plugin_QTextBlockGroup
    },
    {
        sipNameNr_QTextBlockGroup,
        {0, 0, 1},
        4, methods_QTextBlockGroup,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBlockGroup,
    -1,
    -1,
    supers_QTextBlockGroup,
    0,
    init_type_QTextBlockGroup,
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
    dealloc_QTextBlockGroup,
    0,
    0,
    0,
    release_QTextBlockGroup,
    cast_QTextBlockGroup,
    0,
    0,
    0,
    0,
    0,
    0
};