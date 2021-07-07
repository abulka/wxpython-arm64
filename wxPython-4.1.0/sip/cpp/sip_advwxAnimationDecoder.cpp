/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_adv.h"

        #include <wx/animdecod.h>

        #include <wx/stream.h>
        #include <wx/colour.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/image.h>


class sipwxAnimationDecoder : public  ::wxAnimationDecoder
{
public:
    sipwxAnimationDecoder();
    virtual ~sipwxAnimationDecoder();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtect_DoCanRead( ::wxInputStream&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DoCanRead( ::wxInputStream&) const SIP_OVERRIDE;
     ::wxColour GetTransparentColour(uint) const SIP_OVERRIDE;
    long GetDelay(uint) const SIP_OVERRIDE;
     ::wxAnimationDisposal GetDisposalMethod(uint) const SIP_OVERRIDE;
     ::wxPoint GetFramePosition(uint) const SIP_OVERRIDE;
     ::wxSize GetFrameSize(uint) const SIP_OVERRIDE;
    bool ConvertToImage(uint, ::wxImage*) const SIP_OVERRIDE;
     ::wxAnimationType GetType() const SIP_OVERRIDE;
     ::wxAnimationDecoder* Clone() const SIP_OVERRIDE;
    bool Load( ::wxInputStream&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxAnimationDecoder(const sipwxAnimationDecoder &);
    sipwxAnimationDecoder &operator = (const sipwxAnimationDecoder &);

    char sipPyMethods[10];
};

sipwxAnimationDecoder::sipwxAnimationDecoder():  ::wxAnimationDecoder(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxAnimationDecoder::~sipwxAnimationDecoder()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxAnimationDecoder::DoCanRead( ::wxInputStream& stream) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_AnimationDecoder,sipName_DoCanRead);

    if (!sipMeth)
        return 0;

    extern bool sipVH__adv_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__adv_37(sipGILState, 0, sipPySelf, sipMeth, stream);
}

 ::wxColour sipwxAnimationDecoder::GetTransparentColour(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_AnimationDecoder,sipName_GetTransparentColour);

    if (!sipMeth)
        return  ::wxColour();

    extern  ::wxColour sipVH__adv_45(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_45(sipGILState, 0, sipPySelf, sipMeth, frame);
}

long sipwxAnimationDecoder::GetDelay(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_AnimationDecoder,sipName_GetDelay);

    if (!sipMeth)
        return 0;

    extern long sipVH__adv_44(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_44(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxAnimationDisposal sipwxAnimationDecoder::GetDisposalMethod(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_AnimationDecoder,sipName_GetDisposalMethod);

    if (!sipMeth)
        return ::wxANIM_UNSPECIFIED;

    extern  ::wxAnimationDisposal sipVH__adv_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_43(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxPoint sipwxAnimationDecoder::GetFramePosition(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_AnimationDecoder,sipName_GetFramePosition);

    if (!sipMeth)
        return  ::wxPoint();

    extern  ::wxPoint sipVH__adv_42(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_42(sipGILState, 0, sipPySelf, sipMeth, frame);
}

 ::wxSize sipwxAnimationDecoder::GetFrameSize(uint frame) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_AnimationDecoder,sipName_GetFrameSize);

    if (!sipMeth)
        return  ::wxSize();

    extern  ::wxSize sipVH__adv_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint);

    return sipVH__adv_41(sipGILState, 0, sipPySelf, sipMeth, frame);
}

bool sipwxAnimationDecoder::ConvertToImage(uint frame, ::wxImage*image) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_AnimationDecoder,sipName_ConvertToImage);

    if (!sipMeth)
        return 0;

    extern bool sipVH__adv_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, uint, ::wxImage*);

    return sipVH__adv_40(sipGILState, 0, sipPySelf, sipMeth, frame, image);
}

 ::wxAnimationType sipwxAnimationDecoder::GetType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_AnimationDecoder,sipName_GetType);

    if (!sipMeth)
        return ::wxANIMATION_TYPE_INVALID;

    extern  ::wxAnimationType sipVH__adv_39(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__adv_39(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxAnimationDecoder* sipwxAnimationDecoder::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_AnimationDecoder,sipName_Clone);

    if (!sipMeth)
        return 0;

    extern  ::wxAnimationDecoder* sipVH__adv_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__adv_38(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxAnimationDecoder::Load( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_AnimationDecoder,sipName_Load);

    if (!sipMeth)
        return 0;

    extern bool sipVH__adv_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__adv_37(sipGILState, 0, sipPySelf, sipMeth, stream);
}

bool sipwxAnimationDecoder::sipProtect_DoCanRead( ::wxInputStream& stream) const
{
    return DoCanRead(stream);
}


PyDoc_STRVAR(doc_wxAnimationDecoder_Load, "Load(stream) -> bool\n"
"\n"
"Load the animation image frames from the given stream.");

extern "C" {static PyObject *meth_wxAnimationDecoder_Load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_Load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxInputStream* stream;
        int streamState = 0;
         ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_Load);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Load(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_Load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_CanRead, "CanRead(stream) -> bool\n"
"\n"
"Returns true if this decoder supports loading from the given stream.");

extern "C" {static PyObject *meth_wxAnimationDecoder_CanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_CanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxInputStream* stream;
        int streamState = 0;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanRead(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_CanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_Clone, "Clone() -> AnimationDecoder\n"
"\n"
"Create a copy of this decoder.");

extern "C" {static PyObject *meth_wxAnimationDecoder_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxAnimationDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAnimationDecoder, &sipCpp))
        {
             ::wxAnimationDecoder*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_Clone);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Clone();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxAnimationDecoder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_Clone, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetType, "GetType() -> AnimationType\n"
"\n"
"Return the animation type this decoder implements.");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetType(PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxAnimationDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAnimationDecoder, &sipCpp))
        {
             ::wxAnimationType sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetType);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetType();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxAnimationType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetType, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_ConvertToImage, "ConvertToImage(frame, image) -> bool\n"
"\n"
"Convert given frame to wxImage.");

extern "C" {static PyObject *meth_wxAnimationDecoder_ConvertToImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_ConvertToImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
         ::wxImage* image;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BuJ8", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame, sipType_wxImage, &image))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_ConvertToImage);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ConvertToImage(frame,image);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_ConvertToImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetFrameSize, "GetFrameSize(frame) -> wx.Size");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetFrameSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetFrameSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame))
        {
             ::wxSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetFrameSize);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetFrameSize(frame));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetFrameSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetFramePosition, "GetFramePosition(frame) -> wx.Point");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetFramePosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetFramePosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame))
        {
             ::wxPoint*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetFramePosition);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetFramePosition(frame));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetFramePosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetDisposalMethod, "GetDisposalMethod(frame) -> AnimationDisposal\n"
"\n"
"What should be done after displaying this frame.");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetDisposalMethod(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetDisposalMethod(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame))
        {
             ::wxAnimationDisposal sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetDisposalMethod);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDisposalMethod(frame);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxAnimationDisposal);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetDisposalMethod, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetDelay, "GetDelay(frame) -> long\n"
"\n"
"Return the number of milliseconds this frame should be displayed.");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetDelay(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetDelay(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame))
        {
            long sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetDelay);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDelay(frame);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetDelay, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetTransparentColour, "GetTransparentColour(frame) -> wx.Colour\n"
"\n"
"The transparent colour for this frame, if any, or wxNullColour.");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetTransparentColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetTransparentColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        uint frame;
        const  ::wxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, &frame))
        {
             ::wxColour*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_GetTransparentColour);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetTransparentColour(frame));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetTransparentColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetAnimationSize, "GetAnimationSize() -> wx.Size");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetAnimationSize(PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetAnimationSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAnimationDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAnimationDecoder, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetAnimationSize());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetAnimationSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetBackgroundColour, "GetBackgroundColour() -> wx.Colour");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetBackgroundColour(PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetBackgroundColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAnimationDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAnimationDecoder, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetBackgroundColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetBackgroundColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_GetFrameCount, "GetFrameCount() -> unsignedint");

extern "C" {static PyObject *meth_wxAnimationDecoder_GetFrameCount(PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_GetFrameCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAnimationDecoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAnimationDecoder, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFrameCount();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_GetFrameCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAnimationDecoder_DoCanRead, "DoCanRead(stream) -> bool\n"
"\n"
"Checks the signature of the data in the given stream and returns true\n"
"if it appears to be a valid animation format recognized by the\n"
"animation decoder; this function should modify the stream current\n"
"position without taking care of restoring it since CanRead() will do\n"
"it.");

extern "C" {static PyObject *meth_wxAnimationDecoder_DoCanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoder_DoCanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxInputStream* stream;
        int streamState = 0;
        const sipwxAnimationDecoder *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAnimationDecoder, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AnimationDecoder, sipName_DoCanRead);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_DoCanRead(*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoder, sipName_DoCanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxAnimationDecoder(void *, const sipTypeDef *);}
static void *cast_wxAnimationDecoder(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxAnimationDecoder *sipCpp = reinterpret_cast< ::wxAnimationDecoder *>(sipCppV);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAnimationDecoder(void *, int);}
static void release_wxAnimationDecoder(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxAnimationDecoder *>(sipCppV);
    else
        delete reinterpret_cast< ::wxAnimationDecoder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxAnimationDecoder(sipSimpleWrapper *);}
static void dealloc_wxAnimationDecoder(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxAnimationDecoder *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAnimationDecoder(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxAnimationDecoder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAnimationDecoder(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxAnimationDecoder *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxAnimationDecoder();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxAnimationDecoder[] = {{48, 0, 1}};


static PyMethodDef methods_wxAnimationDecoder[] = {
    {SIP_MLNAME_CAST(sipName_CanRead), SIP_MLMETH_CAST(meth_wxAnimationDecoder_CanRead), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_CanRead)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxAnimationDecoder_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_Clone)},
    {SIP_MLNAME_CAST(sipName_ConvertToImage), SIP_MLMETH_CAST(meth_wxAnimationDecoder_ConvertToImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_ConvertToImage)},
    {SIP_MLNAME_CAST(sipName_DoCanRead), SIP_MLMETH_CAST(meth_wxAnimationDecoder_DoCanRead), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_DoCanRead)},
    {SIP_MLNAME_CAST(sipName_GetAnimationSize), meth_wxAnimationDecoder_GetAnimationSize, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetAnimationSize)},
    {SIP_MLNAME_CAST(sipName_GetBackgroundColour), meth_wxAnimationDecoder_GetBackgroundColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetBackgroundColour)},
    {SIP_MLNAME_CAST(sipName_GetDelay), SIP_MLMETH_CAST(meth_wxAnimationDecoder_GetDelay), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetDelay)},
    {SIP_MLNAME_CAST(sipName_GetDisposalMethod), SIP_MLMETH_CAST(meth_wxAnimationDecoder_GetDisposalMethod), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetDisposalMethod)},
    {SIP_MLNAME_CAST(sipName_GetFrameCount), meth_wxAnimationDecoder_GetFrameCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetFrameCount)},
    {SIP_MLNAME_CAST(sipName_GetFramePosition), SIP_MLMETH_CAST(meth_wxAnimationDecoder_GetFramePosition), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetFramePosition)},
    {SIP_MLNAME_CAST(sipName_GetFrameSize), SIP_MLMETH_CAST(meth_wxAnimationDecoder_GetFrameSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetFrameSize)},
    {SIP_MLNAME_CAST(sipName_GetTransparentColour), SIP_MLMETH_CAST(meth_wxAnimationDecoder_GetTransparentColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetTransparentColour)},
    {SIP_MLNAME_CAST(sipName_GetType), meth_wxAnimationDecoder_GetType, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_GetType)},
    {SIP_MLNAME_CAST(sipName_Load), SIP_MLMETH_CAST(meth_wxAnimationDecoder_Load), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoder_Load)}
};

sipVariableDef variables_wxAnimationDecoder[] = {
    {PropertyVariable, sipName_Type, &methods_wxAnimationDecoder[12], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FrameCount, &methods_wxAnimationDecoder[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BackgroundColour, &methods_wxAnimationDecoder[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AnimationSize, &methods_wxAnimationDecoder[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxAnimationDecoder, "AnimationDecoder()\n"
"\n"
"wxAnimationDecoder is used by wxAnimation for loading frames and other\n"
"information for the animation from the animation image file.");


sipClassTypeDef sipTypeDef__adv_wxAnimationDecoder = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxAnimationDecoder,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AnimationDecoder,
        {0, 0, 1},
        14, methods_wxAnimationDecoder,
        0, SIP_NULLPTR,
        4, variables_wxAnimationDecoder,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAnimationDecoder,
    -1,
    -1,
    supers_wxAnimationDecoder,
    SIP_NULLPTR,
    init_type_wxAnimationDecoder,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxAnimationDecoder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxAnimationDecoder,
    cast_wxAnimationDecoder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
