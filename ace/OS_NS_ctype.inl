// -*- C++ -*-
// $Id$

#include "ace/os_include/os_ctype.h"

ACE_INLINE int
ACE_OS::ace_isalnum (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswalnum (c);
#else /* ACE_USES_WCHAR */
  return isalnum ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isalpha (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswalpha (c);
#else /* ACE_USES_WCHAR */
  return isalpha ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_iscntrl (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswcntrl (c);
#else /* ACE_USES_WCHAR */
  return iscntrl ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isdigit (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswdigit (c);
#else /* ACE_USES_WCHAR */
  return isdigit ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isgraph (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswgraph (c);
#else /* ACE_USES_WCHAR */
  return isgraph ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_islower (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswlower (c);
#else /* ACE_USES_WCHAR */
  return islower ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isprint (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswprint (c);
#else /* ACE_USES_WCHAR */
  return isprint ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_ispunct (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswpunct (c);
#else /* ACE_USES_WCHAR */
  return ispunct ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isspace (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswspace (c);
#else /* ACE_USES_WCHAR */
  return isspace ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isupper (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswupper (c);
#else /* ACE_USES_WCHAR */
  return isupper ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_isxdigit (const ACE_TCHAR c)
{
#if defined (ACE_USES_WCHAR)
  return iswxdigit (c);
#else /* ACE_USES_WCHAR */
  return isxdigit ((unsigned char) c);
#endif /* ACE_USES_WCHAR */
}

ACE_INLINE int
ACE_OS::ace_tolower (int c)
{
  return tolower (c);
}

#if defined (ACE_HAS_WCHAR) && !defined (ACE_LACKS_TOWLOWER)
ACE_INLINE wint_t
ACE_OS::ace_towlower (wint_t c)
{
  return towlower (c);
}
#endif /* ACE_HAS_WCHAR && !ACE_LACKS_TOWLOWER */

ACE_INLINE int
ACE_OS::ace_toupper (int c)
{
  return toupper (c);
}

#if defined (ACE_HAS_WCHAR) && !defined (ACE_LACKS_TOWUPPER)
ACE_INLINE wint_t
ACE_OS::ace_towupper (wint_t c)
{
  return towupper (c);
}
#endif /* ACE_HAS_WCHAR && !ACE_LACKS_TOWUPPER */
