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

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qgesturerecognizer.sip"
#include <qgesturerecognizer.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 36 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"
#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtWidgets/qgesturerecognizer.sip"
#include <qgesturerecognizer.h>
#line 39 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 42 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQGestureRecognizer.cpp"


class sipQGestureRecognizer : public  ::QGestureRecognizer
{
public:
    sipQGestureRecognizer();
    sipQGestureRecognizer(const  ::QGestureRecognizer&);
    virtual ~sipQGestureRecognizer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void reset( ::QGesture*);
     ::QGestureRecognizer::Result recognize( ::QGesture*, ::QObject*, ::QEvent*);
     ::QGesture* create( ::QObject*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGestureRecognizer(const sipQGestureRecognizer &);
    sipQGestureRecognizer &operator = (const sipQGestureRecognizer &);

    char sipPyMethods[3];
};

sipQGestureRecognizer::sipQGestureRecognizer():  ::QGestureRecognizer(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGestureRecognizer::sipQGestureRecognizer(const  ::QGestureRecognizer& a0):  ::QGestureRecognizer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGestureRecognizer::~sipQGestureRecognizer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQGestureRecognizer::reset( ::QGesture*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_reset);

    if (!sipMeth)
    {
         ::QGestureRecognizer::reset(a0);
        return;
    }

    extern void sipVH_QtWidgets_137(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QGesture*);

    sipVH_QtWidgets_137(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QGestureRecognizer::Result sipQGestureRecognizer::recognize( ::QGesture*a0, ::QObject*a1, ::QEvent*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QGestureRecognizer,sipName_recognize);

    if (!sipMeth)
        return  ::QGestureRecognizer::Result();

    extern  ::QGestureRecognizer::Result sipVH_QtWidgets_136(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QGesture*, ::QObject*, ::QEvent*);

    return sipVH_QtWidgets_136(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QGesture* sipQGestureRecognizer::create( ::QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_create);

    if (!sipMeth)
        return  ::QGestureRecognizer::create(a0);

    extern  ::QGesture* sipVH_QtWidgets_135(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*);

    return sipVH_QtWidgets_135(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGestureRecognizer_create, "create(self, QObject) -> QGesture");

extern "C" {static PyObject *meth_QGestureRecognizer_create(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QObject* a0;
         ::QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QObject, &a0))
        {
             ::QGesture*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QGestureRecognizer::create(a0) : sipCpp->create(a0));

            return sipConvertFromNewType(sipRes,sipType_QGesture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_create, doc_QGestureRecognizer_create);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_recognize, "recognize(self, QGesture, QObject, QEvent) -> QGestureRecognizer.Result");

extern "C" {static PyObject *meth_QGestureRecognizer_recognize(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_recognize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QGesture* a0;
         ::QObject* a1;
         ::QEvent* a2;
         ::QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8J8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QGesture, &a0, sipType_QObject, &a1, sipType_QEvent, &a2))
        {
             ::QGestureRecognizer::Result*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGestureRecognizer, sipName_recognize);
                return NULL;
            }

            sipRes = new  ::QGestureRecognizer::Result(sipCpp->recognize(a0,a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_recognize, doc_QGestureRecognizer_recognize);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_reset, "reset(self, QGesture)");

extern "C" {static PyObject *meth_QGestureRecognizer_reset(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGesture* a0;
         ::QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QGesture, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QGestureRecognizer::reset(a0) : sipCpp->reset(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_reset, doc_QGestureRecognizer_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_registerRecognizer, "registerRecognizer(QGestureRecognizer) -> Qt.GestureType");

extern "C" {static PyObject *meth_QGestureRecognizer_registerRecognizer(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_registerRecognizer(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGestureRecognizer* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QGestureRecognizer, &a0))
        {
             ::Qt::GestureType sipRes;

            sipRes =  ::QGestureRecognizer::registerRecognizer(a0);

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_GestureType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_registerRecognizer, doc_QGestureRecognizer_registerRecognizer);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_unregisterRecognizer, "unregisterRecognizer(Qt.GestureType)");

extern "C" {static PyObject *meth_QGestureRecognizer_unregisterRecognizer(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_unregisterRecognizer(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::GestureType a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_Qt_GestureType, &a0))
        {
             ::QGestureRecognizer::unregisterRecognizer(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_unregisterRecognizer, doc_QGestureRecognizer_unregisterRecognizer);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGestureRecognizer(void *, int);}
static void release_QGestureRecognizer(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGestureRecognizer *>(sipCppV);
    else
        delete reinterpret_cast< ::QGestureRecognizer *>(sipCppV);
}


extern "C" {static void dealloc_QGestureRecognizer(sipSimpleWrapper *);}
static void dealloc_QGestureRecognizer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQGestureRecognizer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGestureRecognizer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QGestureRecognizer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGestureRecognizer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGestureRecognizer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQGestureRecognizer();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QGestureRecognizer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGestureRecognizer, &a0))
        {
            sipCpp = new sipQGestureRecognizer(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QGestureRecognizer[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QGestureRecognizer_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_create)},
    {SIP_MLNAME_CAST(sipName_recognize), meth_QGestureRecognizer_recognize, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_recognize)},
    {SIP_MLNAME_CAST(sipName_registerRecognizer), meth_QGestureRecognizer_registerRecognizer, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_registerRecognizer)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QGestureRecognizer_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_reset)},
    {SIP_MLNAME_CAST(sipName_unregisterRecognizer), meth_QGestureRecognizer_unregisterRecognizer, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_unregisterRecognizer)}
};

static sipEnumMemberDef enummembers_QGestureRecognizer[] = {
    {sipName_CancelGesture, static_cast<int>( ::QGestureRecognizer::CancelGesture), 107},
    {sipName_ConsumeEventHint, static_cast<int>( ::QGestureRecognizer::ConsumeEventHint), 107},
    {sipName_FinishGesture, static_cast<int>( ::QGestureRecognizer::FinishGesture), 107},
    {sipName_Ignore, static_cast<int>( ::QGestureRecognizer::Ignore), 107},
    {sipName_MayBeGesture, static_cast<int>( ::QGestureRecognizer::MayBeGesture), 107},
    {sipName_TriggerGesture, static_cast<int>( ::QGestureRecognizer::TriggerGesture), 107},
};

PyDoc_STRVAR(doc_QGestureRecognizer, "\1QGestureRecognizer()\n"
"QGestureRecognizer(QGestureRecognizer)");


static pyqt5ClassPluginDef plugin_QGestureRecognizer = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QGestureRecognizer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGestureRecognizer,
        {0},
        &plugin_QGestureRecognizer
    },
    {
        sipNameNr_QGestureRecognizer,
        {0, 0, 1},
        5, methods_QGestureRecognizer,
        6, enummembers_QGestureRecognizer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGestureRecognizer,
    -1,
    -1,
    0,
    0,
    init_type_QGestureRecognizer,
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
    dealloc_QGestureRecognizer,
    0,
    0,
    0,
    release_QGestureRecognizer,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
