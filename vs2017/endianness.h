#if !defined (L_BIG_ENDIAN) && !defined (L_LITTLE_ENDIAN)
#  ifdef __BIG_ENDIAN__
#   define L_BIG_ENDIAN
#  else
#   define L_LITTLE_ENDIAN
#  endif
#endif
