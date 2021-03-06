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

#line 38 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQList0100QPersistentModelIndex.cpp"

#line 70 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQList0100QPersistentModelIndex.cpp"


extern "C" {static void assign_QList_0100QPersistentModelIndex(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QPersistentModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QPersistentModelIndex> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QPersistentModelIndex> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QPersistentModelIndex(SIP_SSIZE_T);}
static void *array_QList_0100QPersistentModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QPersistentModelIndex>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QPersistentModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QPersistentModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QPersistentModelIndex>(reinterpret_cast<const QList< ::QPersistentModelIndex> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QPersistentModelIndex(void *, int);}
static void release_QList_0100QPersistentModelIndex(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QPersistentModelIndex> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QPersistentModelIndex(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QPersistentModelIndex(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QPersistentModelIndex> **sipCppPtr = reinterpret_cast<QList< ::QPersistentModelIndex> **>(sipCppPtrV);

#line 68 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QPersistentModelIndex> *ql = new QList<QPersistentModelIndex>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QPersistentModelIndex *t = reinterpret_cast<QPersistentModelIndex *>(
                sipForceConvertToType(itm, sipType_QPersistentModelIndex, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QPersistentModelIndex' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QPersistentModelIndex, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 143 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQList0100QPersistentModelIndex.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QPersistentModelIndex(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QPersistentModelIndex(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QPersistentModelIndex> *sipCpp = reinterpret_cast<QList< ::QPersistentModelIndex> *>(sipCppV);

#line 42 "/home/pi/PyQt5_gpl-5.10.1/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QPersistentModelIndex *t = new QPersistentModelIndex(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QPersistentModelIndex,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
#line 176 "/home/pi/PyQt5_gpl-5.10.1/QtCore/sipQtCoreQList0100QPersistentModelIndex.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QPersistentModelIndex = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2652,     /* QList<QPersistentModelIndex> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QPersistentModelIndex,
    array_QList_0100QPersistentModelIndex,
    copy_QList_0100QPersistentModelIndex,
    release_QList_0100QPersistentModelIndex,
    convertTo_QList_0100QPersistentModelIndex,
    convertFrom_QList_0100QPersistentModelIndex
};
