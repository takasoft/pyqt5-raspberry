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

#include "sipAPIQtSql.h"

#line 26 "/home/pi/PyQt5_gpl-5.10.1/sip/QtSql/qsqlerror.sip"
#include <qsqlerror.h>
#line 29 "/home/pi/PyQt5_gpl-5.10.1/QtSql/sipQtSqlQSqlError.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/PyQt5_gpl-5.10.1/QtSql/sipQtSqlQSqlError.cpp"


PyDoc_STRVAR(doc_QSqlError_driverText, "driverText(self) -> str");

extern "C" {static PyObject *meth_QSqlError_driverText(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_driverText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->driverText());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_driverText, doc_QSqlError_driverText);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_setDriverText, "setDriverText(self, str)");

extern "C" {static PyObject *meth_QSqlError_setDriverText(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_setDriverText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlError, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDriverText(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_setDriverText, doc_QSqlError_setDriverText);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_databaseText, "databaseText(self) -> str");

extern "C" {static PyObject *meth_QSqlError_databaseText(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_databaseText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->databaseText());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_databaseText, doc_QSqlError_databaseText);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_setDatabaseText, "setDatabaseText(self, str)");

extern "C" {static PyObject *meth_QSqlError_setDatabaseText(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_setDatabaseText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlError, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDatabaseText(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_setDatabaseText, doc_QSqlError_setDatabaseText);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_type, "type(self) -> QSqlError.ErrorType");

extern "C" {static PyObject *meth_QSqlError_type(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
             ::QSqlError::ErrorType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QSqlError_ErrorType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_type, doc_QSqlError_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_setType, "setType(self, QSqlError.ErrorType)");

extern "C" {static PyObject *meth_QSqlError_setType(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QSqlError::ErrorType a0;
         ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSqlError, &sipCpp, sipType_QSqlError_ErrorType, &a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_setType, doc_QSqlError_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_number, "number(self) -> int");

extern "C" {static PyObject *meth_QSqlError_number(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_number(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->number();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_number, doc_QSqlError_number);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_setNumber, "setNumber(self, int)");

extern "C" {static PyObject *meth_QSqlError_setNumber(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_setNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlError, &sipCpp, &a0))
        {
            sipCpp->setNumber(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_setNumber, doc_QSqlError_setNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_text, "text(self) -> str");

extern "C" {static PyObject *meth_QSqlError_text(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_text, doc_QSqlError_text);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QSqlError_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_isValid, doc_QSqlError_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlError_nativeErrorCode, "nativeErrorCode(self) -> str");

extern "C" {static PyObject *meth_QSqlError_nativeErrorCode(PyObject *, PyObject *);}
static PyObject *meth_QSqlError_nativeErrorCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlError, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->nativeErrorCode());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlError, sipName_nativeErrorCode, doc_QSqlError_nativeErrorCode);

    return NULL;
}


extern "C" {static PyObject *slot_QSqlError___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSqlError___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSqlError *sipCpp = reinterpret_cast< ::QSqlError *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlError));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlError, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QSqlError::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql, ne_slot, sipType_QSqlError, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSqlError___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSqlError___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSqlError *sipCpp = reinterpret_cast< ::QSqlError *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlError));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QSqlError* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlError, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QSqlError::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql, eq_slot, sipType_QSqlError, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlError(void *, int);}
static void release_QSqlError(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSqlError *>(sipCppV);
}


extern "C" {static void assign_QSqlError(void *, SIP_SSIZE_T, void *);}
static void assign_QSqlError(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSqlError *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSqlError *>(sipSrc);
}


extern "C" {static void *array_QSqlError(SIP_SSIZE_T);}
static void *array_QSqlError(SIP_SSIZE_T sipNrElem)
{
    return new  ::QSqlError[sipNrElem];
}


extern "C" {static void *copy_QSqlError(const void *, SIP_SSIZE_T);}
static void *copy_QSqlError(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QSqlError(reinterpret_cast<const  ::QSqlError *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlError(sipSimpleWrapper *);}
static void dealloc_QSqlError(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSqlError(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSqlError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSqlError *sipCpp = 0;

    {
        const  ::QString& a0def = QString();
        const  ::QString* a0 = &a0def;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
         ::QSqlError::ErrorType a2 = QSqlError::NoError;
        const  ::QString& a3def = QString();
        const  ::QString* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            sipName_driverText,
            sipName_databaseText,
            sipName_type,
            sipName_errorCode,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1EJ1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QSqlError_ErrorType, &a2, sipType_QString,&a3, &a3State))
        {
            sipCpp = new  ::QSqlError(*a0,*a1,a2,*a3);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QSqlError::ErrorType a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1Ei", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QSqlError_ErrorType, &a2, &a3))
        {
            sipCpp = new  ::QSqlError(*a0,*a1,a2,a3);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const  ::QSqlError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlError, &a0))
        {
            sipCpp = new  ::QSqlError(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlError[] = {
    {(void *)slot_QSqlError___ne__, ne_slot},
    {(void *)slot_QSqlError___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlError[] = {
    {SIP_MLNAME_CAST(sipName_databaseText), meth_QSqlError_databaseText, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_databaseText)},
    {SIP_MLNAME_CAST(sipName_driverText), meth_QSqlError_driverText, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_driverText)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSqlError_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_isValid)},
    {SIP_MLNAME_CAST(sipName_nativeErrorCode), meth_QSqlError_nativeErrorCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_nativeErrorCode)},
    {SIP_MLNAME_CAST(sipName_number), meth_QSqlError_number, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_number)},
    {SIP_MLNAME_CAST(sipName_setDatabaseText), meth_QSqlError_setDatabaseText, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_setDatabaseText)},
    {SIP_MLNAME_CAST(sipName_setDriverText), meth_QSqlError_setDriverText, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_setDriverText)},
    {SIP_MLNAME_CAST(sipName_setNumber), meth_QSqlError_setNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_setNumber)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QSqlError_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_setType)},
    {SIP_MLNAME_CAST(sipName_text), meth_QSqlError_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_text)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSqlError_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlError_type)}
};

static sipEnumMemberDef enummembers_QSqlError[] = {
    {sipName_ConnectionError, static_cast<int>( ::QSqlError::ConnectionError), 15},
    {sipName_NoError, static_cast<int>( ::QSqlError::NoError), 15},
    {sipName_StatementError, static_cast<int>( ::QSqlError::StatementError), 15},
    {sipName_TransactionError, static_cast<int>( ::QSqlError::TransactionError), 15},
    {sipName_UnknownError, static_cast<int>( ::QSqlError::UnknownError), 15},
};

PyDoc_STRVAR(doc_QSqlError, "\1QSqlError(driverText: str = '', databaseText: str = '', type: QSqlError.ErrorType = QSqlError.NoError, errorCode: str = '')\n"
"QSqlError(str, str, QSqlError.ErrorType, int)\n"
"QSqlError(QSqlError)");


static pyqt5ClassPluginDef plugin_QSqlError = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtSql_QSqlError = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSqlError,
        {0},
        &plugin_QSqlError
    },
    {
        sipNameNr_QSqlError,
        {0, 0, 1},
        11, methods_QSqlError,
        5, enummembers_QSqlError,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlError,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSqlError,
    init_type_QSqlError,
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
    dealloc_QSqlError,
    assign_QSqlError,
    array_QSqlError,
    copy_QSqlError,
    release_QSqlError,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
