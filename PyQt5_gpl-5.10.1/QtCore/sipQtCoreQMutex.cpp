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

#include "sipAPIQtCore.h"

#line 54 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQMutex.cpp"



PyDoc_STRVAR(doc_QMutex_lock, "lock(self)");

extern "C" {static PyObject *meth_QMutex_lock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->lock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_lock, doc_QMutex_lock);

    return NULL;
}


PyDoc_STRVAR(doc_QMutex_tryLock, "tryLock(self, timeout: int = 0) -> bool");

extern "C" {static PyObject *meth_QMutex_tryLock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMutex_tryLock(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
         ::QMutex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_timeout,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QMutex, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_tryLock, doc_QMutex_tryLock);

    return NULL;
}


PyDoc_STRVAR(doc_QMutex_unlock, "unlock(self)");

extern "C" {static PyObject *meth_QMutex_unlock(PyObject *, PyObject *);}
static PyObject *meth_QMutex_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_unlock, doc_QMutex_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QMutex_isRecursive, "isRecursive(self) -> bool");

extern "C" {static PyObject *meth_QMutex_isRecursive(PyObject *, PyObject *);}
static PyObject *meth_QMutex_isRecursive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMutex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMutex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRecursive();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMutex, sipName_isRecursive, doc_QMutex_isRecursive);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMutex(void *, int);}
static void release_QMutex(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMutex *>(sipCppV);
}


extern "C" {static void dealloc_QMutex(sipSimpleWrapper *);}
static void dealloc_QMutex(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMutex(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMutex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMutex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMutex *sipCpp = 0;

    {
         ::QMutex::RecursionMode a0 = QMutex::NonRecursive;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_QMutex_RecursionMode, &a0))
        {
            sipCpp = new  ::QMutex(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMutex[] = {
    {SIP_MLNAME_CAST(sipName_isRecursive), meth_QMutex_isRecursive, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_isRecursive)},
    {SIP_MLNAME_CAST(sipName_lock), meth_QMutex_lock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_lock)},
    {SIP_MLNAME_CAST(sipName_tryLock), (PyCFunction)meth_QMutex_tryLock, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMutex_tryLock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QMutex_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QMutex_unlock)}
};

static sipEnumMemberDef enummembers_QMutex[] = {
    {sipName_NonRecursive, static_cast<int>( ::QMutex::NonRecursive), 163},
    {sipName_Recursive, static_cast<int>( ::QMutex::Recursive), 163},
};

PyDoc_STRVAR(doc_QMutex, "\1QMutex(mode: QMutex.RecursionMode = QMutex.NonRecursive)");


static pyqt5ClassPluginDef plugin_QMutex = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QMutex = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMutex,
        {0},
        &plugin_QMutex
    },
    {
        sipNameNr_QMutex,
        {0, 0, 1},
        4, methods_QMutex,
        2, enummembers_QMutex,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMutex,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMutex,
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
    dealloc_QMutex,
    0,
    0,
    0,
    release_QMutex,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};