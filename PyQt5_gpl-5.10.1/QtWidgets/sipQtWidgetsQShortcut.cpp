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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qshortcut.sip"
#include <qshortcut.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"

#line 28 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 247 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 235 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 57 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"


class sipQShortcut : public  ::QShortcut
{
public:
    sipQShortcut( ::QWidget*);
    sipQShortcut(const  ::QKeySequence&, ::QWidget*,const char*,const char*, ::Qt::ShortcutContext);
    virtual ~sipQShortcut();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const  ::QMetaMethod&);
    void disconnectNotify(const  ::QMetaMethod&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQShortcut(const sipQShortcut &);
    sipQShortcut &operator = (const sipQShortcut &);

    char sipPyMethods[7];
};

sipQShortcut::sipQShortcut( ::QWidget*a0):  ::QShortcut(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQShortcut::sipQShortcut(const  ::QKeySequence& a0, ::QWidget*a1,const char*a2,const char*a3, ::Qt::ShortcutContext a4):  ::QShortcut(a0,a1,a2,a3,a4), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQShortcut::~sipQShortcut()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQShortcut::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QShortcut);

    return  ::QShortcut::metaObject();
}

int sipQShortcut::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QShortcut::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QShortcut,_c,_id,_a);

    return _id;
}

void *sipQShortcut::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QShortcut, _clname, &sipCpp) ? sipCpp :  ::QShortcut::qt_metacast(_clname));
}

bool sipQShortcut::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QShortcut::event(a0);

    extern bool sipVH_QtWidgets_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtWidgets_5(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQShortcut::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QShortcut::eventFilter(a0,a1);

    extern bool sipVH_QtWidgets_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtWidgets_4(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQShortcut::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QShortcut::timerEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtWidgets_3(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQShortcut::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QShortcut::childEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtWidgets_2(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQShortcut::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QShortcut::customEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWidgets_1(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQShortcut::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QShortcut::connectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQShortcut::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QShortcut::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QShortcut_setKey, "setKey(self, Union[QKeySequence, QKeySequence.StandardKey, str, int])");

extern "C" {static PyObject *meth_QShortcut_setKey(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            sipCpp->setKey(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setKey, doc_QShortcut_setKey);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_key, "key(self) -> QKeySequence");

extern "C" {static PyObject *meth_QShortcut_key(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
             ::QKeySequence*sipRes;

            sipRes = new  ::QKeySequence(sipCpp->key());

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_key, doc_QShortcut_key);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setEnabled, "setEnabled(self, bool)");

extern "C" {static PyObject *meth_QShortcut_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QShortcut, &sipCpp, &a0))
        {
            sipCpp->setEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setEnabled, doc_QShortcut_setEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_isEnabled, "isEnabled(self) -> bool");

extern "C" {static PyObject *meth_QShortcut_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_isEnabled, doc_QShortcut_isEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setContext, "setContext(self, Qt.ShortcutContext)");

extern "C" {static PyObject *meth_QShortcut_setContext(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::ShortcutContext a0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QShortcut, &sipCpp, sipType_Qt_ShortcutContext, &a0))
        {
            sipCpp->setContext(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setContext, doc_QShortcut_setContext);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_context, "context(self) -> Qt.ShortcutContext");

extern "C" {static PyObject *meth_QShortcut_context(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_context(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
             ::Qt::ShortcutContext sipRes;

            sipRes = sipCpp->context();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_ShortcutContext);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_context, doc_QShortcut_context);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setWhatsThis, "setWhatsThis(self, str)");

extern "C" {static PyObject *meth_QShortcut_setWhatsThis(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setWhatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setWhatsThis(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setWhatsThis, doc_QShortcut_setWhatsThis);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_whatsThis, "whatsThis(self) -> str");

extern "C" {static PyObject *meth_QShortcut_whatsThis(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_whatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->whatsThis());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_whatsThis, doc_QShortcut_whatsThis);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_id, "id(self) -> int");

extern "C" {static PyObject *meth_QShortcut_id(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->id();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_id, doc_QShortcut_id);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_parentWidget, "parentWidget(self) -> QWidget");

extern "C" {static PyObject *meth_QShortcut_parentWidget(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_parentWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
             ::QWidget*sipRes;

            sipRes = sipCpp->parentWidget();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_parentWidget, doc_QShortcut_parentWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setAutoRepeat, "setAutoRepeat(self, bool)");

extern "C" {static PyObject *meth_QShortcut_setAutoRepeat(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setAutoRepeat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QShortcut, &sipCpp, &a0))
        {
            sipCpp->setAutoRepeat(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setAutoRepeat, doc_QShortcut_setAutoRepeat);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_autoRepeat, "autoRepeat(self) -> bool");

extern "C" {static PyObject *meth_QShortcut_autoRepeat(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_autoRepeat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoRepeat();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_autoRepeat, doc_QShortcut_autoRepeat);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_event, "event(self, QEvent) -> bool");

extern "C" {static PyObject *meth_QShortcut_event(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
         ::QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QShortcut::event(a0) : sipCpp->event(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_event, doc_QShortcut_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QShortcut(void *, const sipTypeDef *);}
static void *cast_QShortcut(void *sipCppV, const sipTypeDef *targetType)
{
     ::QShortcut *sipCpp = reinterpret_cast< ::QShortcut *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QShortcut(void *, int);}
static void release_QShortcut(void *sipCppV, int)
{
     ::QShortcut *sipCpp = reinterpret_cast< ::QShortcut *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QShortcut(sipSimpleWrapper *);}
static void dealloc_QShortcut(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQShortcut *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QShortcut(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QShortcut(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QShortcut(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQShortcut *sipCpp = 0;

    {
         ::QWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QWidget, &a0, sipOwner))
        {
            sipCpp = new sipQShortcut(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QKeySequence* a0;
        int a0State = 0;
         ::QWidget* a1;
        PyObject * a2 = 0;
        PyObject * a3 = 0;
         ::Qt::ShortcutContext a4 = Qt::WindowShortcut;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_member,
            sipName_ambiguousMember,
            sipName_context,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1JH|P0P0E", sipType_QKeySequence, &a0, &a0State, sipType_QWidget, &a1, sipOwner, &a2, &a3, sipType_Qt_ShortcutContext, &a4))
        {
            sipErrorState sipError = sipErrorNone;

#line 33 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qshortcut.sip"
        // Construct the shortcut without any connections.
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQShortcut(*a0, a1, 0, 0, a4);
        Py_END_ALLOW_THREADS
        
        if (a2)
        {
            QObject *rx2;
            QByteArray member2;
        
            if ((sipError = pyqt5_qtwidgets_get_connection_parts(a2, sipCpp, "()", false, &rx2, member2)) == sipErrorNone)
            {
                Py_BEGIN_ALLOW_THREADS
                QObject::connect(sipCpp, SIGNAL(activated()), rx2,
                        member2.constData());
                Py_END_ALLOW_THREADS
            }
            else
            {
                delete sipCpp;
                
                if (sipError == sipErrorContinue)
                    sipError = sipBadCallableArg(2, a2);
            }
        }
        
        if (a3)
        {
            QObject *rx3;
            QByteArray member3;
        
            if ((sipError = pyqt5_qtwidgets_get_connection_parts(a3, sipCpp, "()", false, &rx3, member3)) == sipErrorNone)
            {
                Py_BEGIN_ALLOW_THREADS
                QObject::connect(sipCpp, SIGNAL(activatedAmbiguously()), rx3,
                        member3.constData());
                Py_END_ALLOW_THREADS
            }
            else
            {
                delete sipCpp;
                
                if (sipError == sipErrorContinue)
                    sipError = sipBadCallableArg(3, a3);
            }
        }
#line 776 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQShortcut.cpp"
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            if (sipError == sipErrorNone)
            {
                sipCpp->sipPySelf = sipSelf;

                return sipCpp;
            }

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QShortcut[] = {{32, 0, 1}};


static PyMethodDef methods_QShortcut[] = {
    {SIP_MLNAME_CAST(sipName_autoRepeat), meth_QShortcut_autoRepeat, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_autoRepeat)},
    {SIP_MLNAME_CAST(sipName_context), meth_QShortcut_context, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_context)},
    {SIP_MLNAME_CAST(sipName_event), meth_QShortcut_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_event)},
    {SIP_MLNAME_CAST(sipName_id), meth_QShortcut_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_id)},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QShortcut_isEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_isEnabled)},
    {SIP_MLNAME_CAST(sipName_key), meth_QShortcut_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_key)},
    {SIP_MLNAME_CAST(sipName_parentWidget), meth_QShortcut_parentWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_parentWidget)},
    {SIP_MLNAME_CAST(sipName_setAutoRepeat), meth_QShortcut_setAutoRepeat, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setAutoRepeat)},
    {SIP_MLNAME_CAST(sipName_setContext), meth_QShortcut_setContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setContext)},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QShortcut_setEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setEnabled)},
    {SIP_MLNAME_CAST(sipName_setKey), meth_QShortcut_setKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setKey)},
    {SIP_MLNAME_CAST(sipName_setWhatsThis), meth_QShortcut_setWhatsThis, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setWhatsThis)},
    {SIP_MLNAME_CAST(sipName_whatsThis), meth_QShortcut_whatsThis, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_whatsThis)}
};

PyDoc_STRVAR(doc_QShortcut, "\1QShortcut(QWidget)\n"
"QShortcut(Union[QKeySequence, QKeySequence.StandardKey, str, int], QWidget, member: PYQT_SLOT = 0, ambiguousMember: PYQT_SLOT = 0, context: Qt.ShortcutContext = Qt.WindowShortcut)");


/* Define this type's signals. */
static const pyqt5QtSignal signals_QShortcut[] = {
    {"activatedAmbiguously()", "\1activatedAmbiguously(self)", 0, 0},
    {"activated()", "\1activated(self)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt5ClassPluginDef plugin_QShortcut = {
    & ::QShortcut::staticMetaObject,
    0,
    signals_QShortcut,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QShortcut = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QShortcut,
        {0},
        &plugin_QShortcut
    },
    {
        sipNameNr_QShortcut,
        {0, 0, 1},
        13, methods_QShortcut,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QShortcut,
    -1,
    -1,
    supers_QShortcut,
    0,
    init_type_QShortcut,
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
    dealloc_QShortcut,
    0,
    0,
    0,
    release_QShortcut,
    cast_QShortcut,
    0,
    0,
    0,
    0,
    0,
    0
};
