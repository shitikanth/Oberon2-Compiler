# 1 "scope.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "scope.cpp"
# 1 "scope.h" 1


# 1 "/usr/include/c++/4.4/tr1/unordered_map" 1 3
# 32 "/usr/include/c++/4.4/tr1/unordered_map" 3
       
# 33 "/usr/include/c++/4.4/tr1/unordered_map" 3





# 1 "/usr/include/c++/4.4/utility" 1 3
# 59 "/usr/include/c++/4.4/utility" 3
       
# 60 "/usr/include/c++/4.4/utility" 3

# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h" 1 3
# 39 "/usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 322 "/usr/include/features.h" 3 4
# 1 "/usr/include/bits/predefs.h" 1 3 4
# 323 "/usr/include/features.h" 2 3 4
# 355 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 353 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 354 "/usr/include/sys/cdefs.h" 2 3 4
# 356 "/usr/include/features.h" 2 3 4
# 387 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 388 "/usr/include/features.h" 2 3 4
# 40 "/usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h" 2 3
# 244 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 2 3
# 62 "/usr/include/c++/4.4/utility" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_relops.h" 1 3
# 67 "/usr/include/c++/4.4/bits/stl_relops.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  namespace rel_ops
  {
# 83 "/usr/include/c++/4.4/bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator!=(const _Tp& __x, const _Tp& __y)
      { return !(__x == __y); }
# 96 "/usr/include/c++/4.4/bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator>(const _Tp& __x, const _Tp& __y)
      { return __y < __x; }
# 109 "/usr/include/c++/4.4/bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator<=(const _Tp& __x, const _Tp& __y)
      { return !(__y < __x); }
# 122 "/usr/include/c++/4.4/bits/stl_relops.h" 3
    template <class _Tp>
      inline bool
      operator>=(const _Tp& __x, const _Tp& __y)
      { return !(__x < __y); }

  }

}
# 63 "/usr/include/c++/4.4/utility" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_pair.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_pair.h" 3
# 1 "/usr/include/c++/4.4/bits/move.h" 1 3
# 34 "/usr/include/c++/4.4/bits/move.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 45 "/usr/include/c++/4.4/cstddef" 2 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
# 35 "/usr/include/c++/4.4/bits/move.h" 2 3
# 1 "/usr/include/c++/4.4/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/4.4/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 36 "/usr/include/c++/4.4/bits/move.h" 2 3
# 66 "/usr/include/c++/4.4/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {







  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "/usr/include/c++/4.4/bits/stl_pair.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 98 "/usr/include/c++/4.4/bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 141 "/usr/include/c++/4.4/bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 213 "/usr/include/c++/4.4/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 259 "/usr/include/c++/4.4/bits/stl_pair.h" 3
}
# 64 "/usr/include/c++/4.4/utility" 2 3
# 39 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_algobase.h" 1 3
# 61 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 62 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/functexcept.h" 1 3
# 37 "/usr/include/c++/4.4/bits/functexcept.h" 3
# 1 "/usr/include/c++/4.4/exception_defines.h" 1 3
# 38 "/usr/include/c++/4.4/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

}
# 63 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 1 3
# 36 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
       
# 37 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 194 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 64 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/4.4/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/4.4/ext/type_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/4.4/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 52 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 97 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
       
# 64 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 67 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 79 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };

  struct output_iterator_tag { };

  struct forward_iterator_tag : public input_iterator_tag { };


  struct bidirectional_iterator_tag : public forward_iterator_tag { };


  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 102 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
       
# 64 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
# 108 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 166 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 195 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
}
# 69 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator.h" 1 3
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 89 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
              difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

    public:






      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 276 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 388 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 414 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 431 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 457 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 472 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 497 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 514 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 540 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 559 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 601 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 620 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 646 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }

}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 665 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 763 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/4.4/debug/debug.h" 1 3
# 47 "/usr/include/c++/4.4/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;


     

     

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator,
    bool _IsNormal = __is_normal_iterator<_Iterator>::__value>
    struct __niter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __niter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };


  template<typename _Iterator,
    bool _IsMove = __is_move_iterator<_Iterator>::__value>
    struct __miter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __miter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 333 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 371 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   __builtin_memmove(__result, __first,
       sizeof(_Tp) * (__last - __first));
   return __result + (__last - __first);
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>
   (std::__niter_base<_II>::__b(__first),
    std::__niter_base<_II>::__b(__last),
    std::__niter_base<_OI>::__b(__result)));
    }
# 456 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base<_II>::__b(__first),
        std::__miter_base<_II>::__b(__last), __result));
    }
# 509 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 537 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 567 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base<_BI1>::__b(__first),
     std::__niter_base<_BI1>::__b(__last),
     std::__niter_base<_BI2>::__b(__result)));
    }
# 626 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base<_BI1>::__b(__first),
        std::__miter_base<_BI1>::__b(__last), __result));
    }
# 684 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 728 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base<_ForwardIterator>::__b(__first),
      std::__niter_base<_ForwardIterator>::__b(__last), __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 783 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base<_OI>::__b(__first),
     __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 950 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base<_II1>::__b(__first1),
         std::__niter_base<_II1>::__b(__last1),
         std::__niter_base<_II2>::__b(__first2));
    }
# 982 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1013 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux
 (std::__niter_base<_II1>::__b(__first1),
  std::__niter_base<_II1>::__b(__last1),
  std::__niter_base<_II2>::__b(__first2),
  std::__niter_base<_II2>::__b(__last2));
    }
# 1048 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;


     
     
      ;
      ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1088 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1125 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 40 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/bits/allocator.h" 1 3
# 48 "/usr/include/c++/4.4/bits/allocator.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 1 3
# 34 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 3
# 1 "/usr/include/c++/4.4/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/4.4/ext/new_allocator.h" 3
# 1 "/usr/include/c++/4.4/new" 1 3
# 39 "/usr/include/c++/4.4/new" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 40 "/usr/include/c++/4.4/new" 2 3
# 1 "/usr/include/c++/4.4/exception" 1 3
# 35 "/usr/include/c++/4.4/exception" 3
#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 59 "/usr/include/c++/4.4/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 115 "/usr/include/c++/4.4/exception" 3
  bool uncaught_exception() throw();


}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 138 "/usr/include/c++/4.4/exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 41 "/usr/include/c++/4.4/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 91 "/usr/include/c++/4.4/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/4.4/ext/new_allocator.h" 2 3



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "/usr/include/c++/4.4/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__builtin_expect(__n > this->max_size(), false))
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "/usr/include/c++/4.4/ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 2 3
# 49 "/usr/include/c++/4.4/bits/allocator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 59 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };

}
# 41 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_function.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 99 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}


# 1 "/usr/include/c++/4.4/backward/binders.h" 1 3
# 60 "/usr/include/c++/4.4/backward/binders.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 96 "/usr/include/c++/4.4/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "/usr/include/c++/4.4/bits/stl_function.h" 2 3
# 42 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/bits/stringfwd.h" 1 3
# 38 "/usr/include/c++/4.4/bits/stringfwd.h" 3
       
# 39 "/usr/include/c++/4.4/bits/stringfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 75 "/usr/include/c++/4.4/bits/stringfwd.h" 3
}
# 43 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/tr1/type_traits" 1 3
# 32 "/usr/include/c++/4.4/tr1/type_traits" 3
       
# 33 "/usr/include/c++/4.4/tr1/type_traits" 3





# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 39 "/usr/include/c++/4.4/tr1/type_traits" 2 3
# 47 "/usr/include/c++/4.4/tr1/type_traits" 3
# 1 "/usr/include/c++/4.4/tr1_impl/type_traits" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
namespace std
{
namespace tr1 {
# 43 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
  struct __sfinae_types
  {
    typedef char __one;
    typedef struct { char __arr[2]; } __two;
  };
# 66 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static const _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
    };


  typedef integral_constant<bool, true> true_type;


  typedef integral_constant<bool, false> false_type;

  template<typename _Tp, _Tp __v>
    const _Tp integral_constant<_Tp, __v>::value;


  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };
  template<> struct __is_void_helper<void> : public integral_constant<bool, true> { };




  template<typename _Tp>
    struct is_void
    : public integral_constant<bool, (__is_void_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };
  template<> struct __is_integral_helper<bool> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<signed char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned char> : public integral_constant<bool, true> { };

  template<> struct __is_integral_helper<wchar_t> : public integral_constant<bool, true> { };





  template<> struct __is_integral_helper<short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long long> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_integral
    : public integral_constant<bool, (__is_integral_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };
  template<> struct __is_floating_point_helper<float> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<double> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<long double> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_floating_point
    : public integral_constant<bool, (__is_floating_point_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };


  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };
  template<typename _Tp> struct __is_pointer_helper<_Tp*> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_pointer
    : public integral_constant<bool, (__is_pointer_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };


  template<typename _Tp>
    struct is_reference;


  template<typename _Tp>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_object_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, !is_function<_Tp>::value> { };



  template<typename _Tp>
    struct is_member_object_pointer
    : public integral_constant<bool, (__is_member_object_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_function_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, is_function<_Tp>::value> { };



  template<typename _Tp>
    struct is_member_function_pointer
    : public integral_constant<bool, (__is_member_function_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };


  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };


  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };


  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };


  template<typename>
    struct is_function
    : public false_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };




  template<typename _Tp>
    struct is_arithmetic
    : public integral_constant<bool, (is_integral<_Tp>::value
          || is_floating_point<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_fundamental
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_void<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_object
    : public integral_constant<bool, !(is_function<_Tp>::value
           || is_reference<_Tp>::value
           || is_void<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_member_pointer;


  template<typename _Tp>
    struct is_scalar
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_enum<_Tp>::value
          || is_pointer<_Tp>::value
          || is_member_pointer<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };


  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, true> { };

  template<typename _Tp>
  struct is_member_pointer
    : public integral_constant<bool, (__is_member_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };



  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };


  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };


  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };


  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };


  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };


  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };


  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };


  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };


  template<typename, unsigned _Uint = 0>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };




  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };




  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };


  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };


  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };


  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };




  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };



  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };


  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };

  template<typename>
    struct remove_reference;


  template<typename _Tp>
    struct add_pointer
    { typedef typename remove_reference<_Tp>::type* type; };







}
}
# 48 "/usr/include/c++/4.4/tr1/type_traits" 2 3






namespace std
{
namespace tr1
{





  template<typename>
    struct is_reference
    : public false_type { };

  template<typename _Tp>
    struct is_reference<_Tp&>
    : public true_type { };

  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp) || is_void<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_trivial_constructor
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_trivial_copy
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_trivial_assign
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_trivial_destructor
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_nothrow_constructor
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_nothrow_copy
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename _Tp>
    struct has_nothrow_assign
    : public integral_constant<bool, is_pod<_Tp>::value>
    { };

  template<typename>
    struct __is_signed_helper
    : public false_type { };
  template<> struct __is_signed_helper<signed char> : public true_type { };
  template<> struct __is_signed_helper<short> : public true_type { };
  template<> struct __is_signed_helper<int> : public true_type { };
  template<> struct __is_signed_helper<long> : public true_type { };
  template<> struct __is_signed_helper<long long> : public true_type { };

  template<typename _Tp>
    struct is_signed
    : public integral_constant<bool, (__is_signed_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_unsigned_helper
    : public false_type { };
  template<> struct __is_unsigned_helper<unsigned char> : public true_type { };
  template<> struct __is_unsigned_helper<unsigned short> : public true_type { };
  template<> struct __is_unsigned_helper<unsigned int> : public true_type { };
  template<> struct __is_unsigned_helper<unsigned long> : public true_type { };
  template<> struct __is_unsigned_helper<unsigned long long> : public true_type { };

  template<typename _Tp>
    struct is_unsigned
    : public integral_constant<bool, (__is_unsigned_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename _Base, typename _Derived>
    struct __is_base_of_helper
    {
      typedef typename remove_cv<_Base>::type _NoCv_Base;
      typedef typename remove_cv<_Derived>::type _NoCv_Derived;
      static const bool __value = (is_same<_Base, _Derived>::value
       || (__is_base_of(_Base, _Derived)
           && !is_same<_NoCv_Base,
                       _NoCv_Derived>::value));
    };

  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool,
          __is_base_of_helper<_Base, _Derived>::__value>
    { };

  template<typename _From, typename _To>
    struct __is_convertible_simple
    : public __sfinae_types
    {
    private:
      static __one __test(_To);
      static __two __test(...);
      static _From __makeFrom();

    public:
      static const bool __value = sizeof(__test(__makeFrom())) == 1;
    };

  template<typename _Tp>
    struct add_reference;

  template<typename _Tp>
    struct __is_int_or_cref
    {
      typedef typename remove_reference<_Tp>::type __rr_Tp;
      static const bool __value = (is_integral<_Tp>::value
       || (is_integral<__rr_Tp>::value
           && is_const<__rr_Tp>::value
           && !is_volatile<__rr_Tp>::value));
    };

  template<typename _From, typename _To,
    bool = (is_void<_From>::value || is_void<_To>::value
     || is_function<_To>::value || is_array<_To>::value

     || (is_floating_point<typename
         remove_reference<_From>::type>::value
         && __is_int_or_cref<_To>::__value))>
    struct __is_convertible_helper
    {

      static const bool __value = (__is_convertible_simple<typename
       add_reference<_From>::type, _To>::__value);
    };

  template<typename _From, typename _To>
    struct __is_convertible_helper<_From, _To, true>
    { static const bool __value = (is_void<_To>::value
       || (__is_int_or_cref<_To>::__value
           && !is_void<_From>::value)); };

  template<typename _From, typename _To>
    struct is_convertible
    : public integral_constant<bool,
          __is_convertible_helper<_From, _To>::__value>
    { };


  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };


  template<typename _Tp, bool = (is_void<_Tp>::value
     || is_reference<_Tp>::value)>
    struct __add_reference_helper
    { typedef _Tp& type; };

  template<typename _Tp>
    struct __add_reference_helper<_Tp, true>
    { typedef _Tp type; };

  template<typename _Tp>
    struct add_reference
    : public __add_reference_helper<_Tp>
    { };


  template<std::size_t _Len, std::size_t _Align>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };


}
}
# 44 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/tr1/functional_hash.h" 1 3
# 33 "/usr/include/c++/4.4/tr1/functional_hash.h" 3
       
# 34 "/usr/include/c++/4.4/tr1/functional_hash.h" 3
# 46 "/usr/include/c++/4.4/tr1/functional_hash.h" 3
# 1 "/usr/include/c++/4.4/tr1_impl/functional_hash.h" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/functional_hash.h" 3
namespace std
{
namespace tr1 {




  template<typename _Tp>
    struct hash : public std::unary_function<_Tp, size_t>
    {
      size_t
      operator()(_Tp __val) const;
    };


  template<typename _Tp>
    struct hash<_Tp*> : public std::unary_function<_Tp*, size_t>
    {
      size_t
      operator()(_Tp* __p) const
      { return reinterpret_cast<size_t>(__p); }
    };
# 60 "/usr/include/c++/4.4/tr1_impl/functional_hash.h" 3
  template<> inline size_t hash<bool>::operator()(bool __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<char>::operator()(char __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<signed char>::operator()(signed char __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<unsigned char>::operator()(unsigned char __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<wchar_t>::operator()(wchar_t __val) const { return static_cast<size_t>(__val); };




  template<> inline size_t hash<short>::operator()(short __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<int>::operator()(int __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<long>::operator()(long __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<long long>::operator()(long long __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<unsigned short>::operator()(unsigned short __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<unsigned int>::operator()(unsigned int __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<unsigned long>::operator()(unsigned long __val) const { return static_cast<size_t>(__val); };
  template<> inline size_t hash<unsigned long long>::operator()(unsigned long long __val) const { return static_cast<size_t>(__val); };







  template<size_t = sizeof(size_t)>
    struct _Fnv_hash
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
 size_t __result = 0;
 for (; __length > 0; --__length)
   __result = (__result * 131) + *__first++;
 return __result;
      }
    };

  template<>
    struct _Fnv_hash<4>
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
 size_t __result = static_cast<size_t>(2166136261UL);
 for (; __length > 0; --__length)
   {
     __result ^= static_cast<size_t>(*__first++);
     __result *= static_cast<size_t>(16777619UL);
   }
 return __result;
      }
    };

  template<>
    struct _Fnv_hash<8>
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
 size_t __result =
   static_cast<size_t>(14695981039346656037ULL);
 for (; __length > 0; --__length)
   {
     __result ^= static_cast<size_t>(*__first++);
     __result *= static_cast<size_t>(1099511628211ULL);
   }
 return __result;
      }
    };


  template<>
    inline size_t
    hash<float>::operator()(float __val) const
    {
      size_t __result = 0;


      if (__val != 0.0f)
 __result = _Fnv_hash<>::hash(reinterpret_cast<const char*>(&__val),
         sizeof(__val));
      return __result;
    };


  template<>
    inline size_t
    hash<double>::operator()(double __val) const
    {
 size_t __result = 0;


 if (__val != 0.0)
   __result = _Fnv_hash<>::hash(reinterpret_cast<const char*>(&__val),
           sizeof(__val));
 return __result;
    };


  template<>
    size_t
    hash<long double>::operator()(long double __val) const;


  template<>
    size_t
    hash<string>::operator()(string) const;

  template<>
    size_t
    hash<const string&>::operator()(const string&) const;


  template<>
    size_t
    hash<wstring>::operator()(wstring) const;

  template<>
    size_t
    hash<const wstring&>::operator()(const wstring&) const;


}
}
# 47 "/usr/include/c++/4.4/tr1/functional_hash.h" 2 3
# 45 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 1 "/usr/include/c++/4.4/tr1/hashtable.h" 1 3
# 33 "/usr/include/c++/4.4/tr1/hashtable.h" 3
       
# 34 "/usr/include/c++/4.4/tr1/hashtable.h" 3
# 46 "/usr/include/c++/4.4/tr1/hashtable.h" 3
# 1 "/usr/include/c++/4.4/tr1_impl/hashtable" 1 3
# 48 "/usr/include/c++/4.4/tr1_impl/hashtable" 3
# 1 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
namespace std
{
namespace tr1 {

namespace __detail
{


  template<class _Iterator>
    inline typename std::iterator_traits<_Iterator>::difference_type
    __distance_fw(_Iterator __first, _Iterator __last,
    std::input_iterator_tag)
    { return 0; }

  template<class _Iterator>
    inline typename std::iterator_traits<_Iterator>::difference_type
    __distance_fw(_Iterator __first, _Iterator __last,
    std::forward_iterator_tag)
    { return std::distance(__first, __last); }

  template<class _Iterator>
    inline typename std::iterator_traits<_Iterator>::difference_type
    __distance_fw(_Iterator __first, _Iterator __last)
    {
      typedef typename std::iterator_traits<_Iterator>::iterator_category _Tag;
      return __distance_fw(__first, __last, _Tag());
    }

  template<typename _RAIter, typename _Tp>
    _RAIter
    __lower_bound(_RAIter __first, _RAIter __last, const _Tp& __val)
    {
      typedef typename std::iterator_traits<_RAIter>::difference_type _DType;

      _DType __len = __last - __first;
      while (__len > 0)
 {
   _DType __half = __len >> 1;
   _RAIter __middle = __first + __half;
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 88 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  template<typename _Value, bool __cache_hash_code>
    struct _Hash_node;

  template<typename _Value>
    struct _Hash_node<_Value, true>
    {
      _Value _M_v;
      std::size_t _M_hash_code;
      _Hash_node* _M_next;







    };

  template<typename _Value>
    struct _Hash_node<_Value, false>
    {
      _Value _M_v;
      _Hash_node* _M_next;







    };



  template<typename _Value, bool __cache>
    struct _Node_iterator_base
    {
      _Node_iterator_base(_Hash_node<_Value, __cache>* __p)
      : _M_cur(__p) { }

      void
      _M_incr()
      { _M_cur = _M_cur->_M_next; }

      _Hash_node<_Value, __cache>* _M_cur;
    };

  template<typename _Value, bool __cache>
    inline bool
    operator==(const _Node_iterator_base<_Value, __cache>& __x,
        const _Node_iterator_base<_Value, __cache>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Value, bool __cache>
    inline bool
    operator!=(const _Node_iterator_base<_Value, __cache>& __x,
        const _Node_iterator_base<_Value, __cache>& __y)
    { return __x._M_cur != __y._M_cur; }

  template<typename _Value, bool __constant_iterators, bool __cache>
    struct _Node_iterator
    : public _Node_iterator_base<_Value, __cache>
    {
      typedef _Value value_type;
      typedef typename
      __gnu_cxx::__conditional_type<__constant_iterators,
        const _Value*, _Value*>::__type
                                                       pointer;
      typedef typename
      __gnu_cxx::__conditional_type<__constant_iterators,
        const _Value&, _Value&>::__type
                                                       reference;
      typedef std::ptrdiff_t difference_type;
      typedef std::forward_iterator_tag iterator_category;

      _Node_iterator()
      : _Node_iterator_base<_Value, __cache>(0) { }

      explicit
      _Node_iterator(_Hash_node<_Value, __cache>* __p)
      : _Node_iterator_base<_Value, __cache>(__p) { }

      reference
      operator*() const
      { return this->_M_cur->_M_v; }

      pointer
      operator->() const
      { return &this->_M_cur->_M_v; }

      _Node_iterator&
      operator++()
      {
 this->_M_incr();
 return *this;
      }

      _Node_iterator
      operator++(int)
      {
 _Node_iterator __tmp(*this);
 this->_M_incr();
 return __tmp;
      }
    };

  template<typename _Value, bool __constant_iterators, bool __cache>
    struct _Node_const_iterator
    : public _Node_iterator_base<_Value, __cache>
    {
      typedef _Value value_type;
      typedef const _Value* pointer;
      typedef const _Value& reference;
      typedef std::ptrdiff_t difference_type;
      typedef std::forward_iterator_tag iterator_category;

      _Node_const_iterator()
      : _Node_iterator_base<_Value, __cache>(0) { }

      explicit
      _Node_const_iterator(_Hash_node<_Value, __cache>* __p)
      : _Node_iterator_base<_Value, __cache>(__p) { }

      _Node_const_iterator(const _Node_iterator<_Value, __constant_iterators,
      __cache>& __x)
      : _Node_iterator_base<_Value, __cache>(__x._M_cur) { }

      reference
      operator*() const
      { return this->_M_cur->_M_v; }

      pointer
      operator->() const
      { return &this->_M_cur->_M_v; }

      _Node_const_iterator&
      operator++()
      {
 this->_M_incr();
 return *this;
      }

      _Node_const_iterator
      operator++(int)
      {
 _Node_const_iterator __tmp(*this);
 this->_M_incr();
 return __tmp;
      }
    };

  template<typename _Value, bool __cache>
    struct _Hashtable_iterator_base
    {
      _Hashtable_iterator_base(_Hash_node<_Value, __cache>* __node,
          _Hash_node<_Value, __cache>** __bucket)
      : _M_cur_node(__node), _M_cur_bucket(__bucket) { }

      void
      _M_incr()
      {
 _M_cur_node = _M_cur_node->_M_next;
 if (!_M_cur_node)
   _M_incr_bucket();
      }

      void
      _M_incr_bucket();

      _Hash_node<_Value, __cache>* _M_cur_node;
      _Hash_node<_Value, __cache>** _M_cur_bucket;
    };



  template<typename _Value, bool __cache>
    void
    _Hashtable_iterator_base<_Value, __cache>::
    _M_incr_bucket()
    {
      ++_M_cur_bucket;


      while (!*_M_cur_bucket)
 ++_M_cur_bucket;
      _M_cur_node = *_M_cur_bucket;
    }

  template<typename _Value, bool __cache>
    inline bool
    operator==(const _Hashtable_iterator_base<_Value, __cache>& __x,
        const _Hashtable_iterator_base<_Value, __cache>& __y)
    { return __x._M_cur_node == __y._M_cur_node; }

  template<typename _Value, bool __cache>
    inline bool
    operator!=(const _Hashtable_iterator_base<_Value, __cache>& __x,
        const _Hashtable_iterator_base<_Value, __cache>& __y)
    { return __x._M_cur_node != __y._M_cur_node; }

  template<typename _Value, bool __constant_iterators, bool __cache>
    struct _Hashtable_iterator
    : public _Hashtable_iterator_base<_Value, __cache>
    {
      typedef _Value value_type;
      typedef typename
      __gnu_cxx::__conditional_type<__constant_iterators,
        const _Value*, _Value*>::__type
                                                       pointer;
      typedef typename
      __gnu_cxx::__conditional_type<__constant_iterators,
        const _Value&, _Value&>::__type
                                                       reference;
      typedef std::ptrdiff_t difference_type;
      typedef std::forward_iterator_tag iterator_category;

      _Hashtable_iterator()
      : _Hashtable_iterator_base<_Value, __cache>(0, 0) { }

      _Hashtable_iterator(_Hash_node<_Value, __cache>* __p,
     _Hash_node<_Value, __cache>** __b)
      : _Hashtable_iterator_base<_Value, __cache>(__p, __b) { }

      explicit
      _Hashtable_iterator(_Hash_node<_Value, __cache>** __b)
      : _Hashtable_iterator_base<_Value, __cache>(*__b, __b) { }

      reference
      operator*() const
      { return this->_M_cur_node->_M_v; }

      pointer
      operator->() const
      { return &this->_M_cur_node->_M_v; }

      _Hashtable_iterator&
      operator++()
      {
 this->_M_incr();
 return *this;
      }

      _Hashtable_iterator
      operator++(int)
      {
 _Hashtable_iterator __tmp(*this);
 this->_M_incr();
 return __tmp;
      }
    };

  template<typename _Value, bool __constant_iterators, bool __cache>
    struct _Hashtable_const_iterator
    : public _Hashtable_iterator_base<_Value, __cache>
    {
      typedef _Value value_type;
      typedef const _Value* pointer;
      typedef const _Value& reference;
      typedef std::ptrdiff_t difference_type;
      typedef std::forward_iterator_tag iterator_category;

      _Hashtable_const_iterator()
      : _Hashtable_iterator_base<_Value, __cache>(0, 0) { }

      _Hashtable_const_iterator(_Hash_node<_Value, __cache>* __p,
    _Hash_node<_Value, __cache>** __b)
      : _Hashtable_iterator_base<_Value, __cache>(__p, __b) { }

      explicit
      _Hashtable_const_iterator(_Hash_node<_Value, __cache>** __b)
      : _Hashtable_iterator_base<_Value, __cache>(*__b, __b) { }

      _Hashtable_const_iterator(const _Hashtable_iterator<_Value,
    __constant_iterators, __cache>& __x)
      : _Hashtable_iterator_base<_Value, __cache>(__x._M_cur_node,
        __x._M_cur_bucket) { }

      reference
      operator*() const
      { return this->_M_cur_node->_M_v; }

      pointer
      operator->() const
      { return &this->_M_cur_node->_M_v; }

      _Hashtable_const_iterator&
      operator++()
      {
 this->_M_incr();
 return *this;
      }

      _Hashtable_const_iterator
      operator++(int)
      {
 _Hashtable_const_iterator __tmp(*this);
 this->_M_incr();
 return __tmp;
      }
    };







  struct _Mod_range_hashing
  {
    typedef std::size_t first_argument_type;
    typedef std::size_t second_argument_type;
    typedef std::size_t result_type;

    result_type
    operator()(first_argument_type __num, second_argument_type __den) const
    { return __num % __den; }
  };






  struct _Default_ranged_hash { };



  struct _Prime_rehash_policy
  {
    _Prime_rehash_policy(float __z = 1.0)
    : _M_max_load_factor(__z), _M_growth_factor(2.f), _M_next_resize(0) { }

    float
    max_load_factor() const
    { return _M_max_load_factor; }


    std::size_t
    _M_next_bkt(std::size_t __n) const;


    std::size_t
    _M_bkt_for_elements(std::size_t __n) const;





    std::pair<bool, std::size_t>
    _M_need_rehash(std::size_t __n_bkt, std::size_t __n_elt,
     std::size_t __n_ins) const;

    enum { _S_n_primes = sizeof(unsigned long) != 8 ? 256 : 256 + 48 };

    float _M_max_load_factor;
    float _M_growth_factor;
    mutable std::size_t _M_next_resize;
  };

  extern const unsigned long __prime_list[];





  inline std::size_t
  _Prime_rehash_policy::
  _M_next_bkt(std::size_t __n) const
  {
    const unsigned long* __p = __lower_bound(__prime_list, __prime_list
          + _S_n_primes, __n);
    _M_next_resize =
      static_cast<std::size_t>(__builtin_ceil(*__p * _M_max_load_factor));
    return *__p;
  }



  inline std::size_t
  _Prime_rehash_policy::
  _M_bkt_for_elements(std::size_t __n) const
  {
    const float __min_bkts = __n / _M_max_load_factor;
    const unsigned long* __p = __lower_bound(__prime_list, __prime_list
          + _S_n_primes, __min_bkts);
    _M_next_resize =
      static_cast<std::size_t>(__builtin_ceil(*__p * _M_max_load_factor));
    return *__p;
  }
# 487 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  inline std::pair<bool, std::size_t>
  _Prime_rehash_policy::
  _M_need_rehash(std::size_t __n_bkt, std::size_t __n_elt,
   std::size_t __n_ins) const
  {
    if (__n_elt + __n_ins > _M_next_resize)
      {
 float __min_bkts = ((float(__n_ins) + float(__n_elt))
       / _M_max_load_factor);
 if (__min_bkts > __n_bkt)
   {
     __min_bkts = std::max(__min_bkts, _M_growth_factor * __n_bkt);
     const unsigned long* __p =
       __lower_bound(__prime_list, __prime_list + _S_n_primes,
       __min_bkts);
     _M_next_resize = static_cast<std::size_t>
       (__builtin_ceil(*__p * _M_max_load_factor));
     return std::make_pair(true, *__p);
   }
 else
   {
     _M_next_resize = static_cast<std::size_t>
       (__builtin_ceil(__n_bkt * _M_max_load_factor));
     return std::make_pair(false, 0);
   }
      }
    else
      return std::make_pair(false, 0);
  }
# 531 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  template<typename _Key, typename _Value, typename _Ex, bool __unique,
    typename _Hashtable>
    struct _Map_base { };

  template<typename _Key, typename _Pair, typename _Hashtable>
    struct _Map_base<_Key, _Pair, std::_Select1st<_Pair>, false, _Hashtable>
    {
      typedef typename _Pair::second_type mapped_type;
    };

  template<typename _Key, typename _Pair, typename _Hashtable>
    struct _Map_base<_Key, _Pair, std::_Select1st<_Pair>, true, _Hashtable>
    {
      typedef typename _Pair::second_type mapped_type;

      mapped_type&
      operator[](const _Key& __k);
# 558 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
    };

  template<typename _Key, typename _Pair, typename _Hashtable>
    typename _Map_base<_Key, _Pair, std::_Select1st<_Pair>,
         true, _Hashtable>::mapped_type&
    _Map_base<_Key, _Pair, std::_Select1st<_Pair>, true, _Hashtable>::
    operator[](const _Key& __k)
    {
      _Hashtable* __h = static_cast<_Hashtable*>(this);
      typename _Hashtable::_Hash_code_type __code = __h->_M_hash_code(__k);
      std::size_t __n = __h->_M_bucket_index(__k, __code,
          __h->_M_bucket_count);

      typename _Hashtable::_Node* __p =
 __h->_M_find_node(__h->_M_buckets[__n], __k, __code);
      if (!__p)
 return __h->_M_insert_bucket(std::make_pair(__k, mapped_type()),
         __n, __code)->second;
      return (__p->_M_v).second;
    }
# 619 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  template<typename _RehashPolicy, typename _Hashtable>
    struct _Rehash_base { };

  template<typename _Hashtable>
    struct _Rehash_base<_Prime_rehash_policy, _Hashtable>
    {
      float
      max_load_factor() const
      {
 const _Hashtable* __this = static_cast<const _Hashtable*>(this);
 return __this->__rehash_policy().max_load_factor();
      }

      void
      max_load_factor(float __z)
      {
 _Hashtable* __this = static_cast<_Hashtable*>(this);
 __this->__rehash_policy(_Prime_rehash_policy(__z));
      }
    };
# 652 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  template<typename _Key, typename _Value,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash,
    bool __cache_hash_code>
    struct _Hash_code_base;



  template<typename _Key, typename _Value,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash>
    struct _Hash_code_base<_Key, _Value, _ExtractKey, _Equal, _H1, _H2,
      _Hash, false>
    {
    protected:
      _Hash_code_base(const _ExtractKey& __ex, const _Equal& __eq,
        const _H1&, const _H2&, const _Hash& __h)
      : _M_extract(__ex), _M_eq(__eq), _M_ranged_hash(__h) { }

      typedef void* _Hash_code_type;

      _Hash_code_type
      _M_hash_code(const _Key& __key) const
      { return 0; }

      std::size_t
      _M_bucket_index(const _Key& __k, _Hash_code_type,
        std::size_t __n) const
      { return _M_ranged_hash(__k, __n); }

      std::size_t
      _M_bucket_index(const _Hash_node<_Value, false>* __p,
        std::size_t __n) const
      { return _M_ranged_hash(_M_extract(__p->_M_v), __n); }

      bool
      _M_compare(const _Key& __k, _Hash_code_type,
   _Hash_node<_Value, false>* __n) const
      { return _M_eq(__k, _M_extract(__n->_M_v)); }

      void
      _M_store_code(_Hash_node<_Value, false>*, _Hash_code_type) const
      { }

      void
      _M_copy_code(_Hash_node<_Value, false>*,
     const _Hash_node<_Value, false>*) const
      { }

      void
      _M_swap(_Hash_code_base& __x)
      {
 std::swap(_M_extract, __x._M_extract);
 std::swap(_M_eq, __x._M_eq);
 std::swap(_M_ranged_hash, __x._M_ranged_hash);
      }

    protected:
      _ExtractKey _M_extract;
      _Equal _M_eq;
      _Hash _M_ranged_hash;
    };
# 723 "/usr/include/c++/4.4/tr1_impl/hashtable_policy.h" 3
  template<typename _Key, typename _Value,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash>
    struct _Hash_code_base<_Key, _Value, _ExtractKey, _Equal, _H1, _H2,
      _Hash, true>;




  template<typename _Key, typename _Value,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2>
    struct _Hash_code_base<_Key, _Value, _ExtractKey, _Equal, _H1, _H2,
      _Default_ranged_hash, false>
    {
      typedef _H1 hasher;

      hasher
      hash_function() const
      { return _M_h1; }

    protected:
      _Hash_code_base(const _ExtractKey& __ex, const _Equal& __eq,
        const _H1& __h1, const _H2& __h2,
        const _Default_ranged_hash&)
      : _M_extract(__ex), _M_eq(__eq), _M_h1(__h1), _M_h2(__h2) { }

      typedef std::size_t _Hash_code_type;

      _Hash_code_type
      _M_hash_code(const _Key& __k) const
      { return _M_h1(__k); }

      std::size_t
      _M_bucket_index(const _Key&, _Hash_code_type __c,
        std::size_t __n) const
      { return _M_h2(__c, __n); }

      std::size_t
      _M_bucket_index(const _Hash_node<_Value, false>* __p,
        std::size_t __n) const
      { return _M_h2(_M_h1(_M_extract(__p->_M_v)), __n); }

      bool
      _M_compare(const _Key& __k, _Hash_code_type,
   _Hash_node<_Value, false>* __n) const
      { return _M_eq(__k, _M_extract(__n->_M_v)); }

      void
      _M_store_code(_Hash_node<_Value, false>*, _Hash_code_type) const
      { }

      void
      _M_copy_code(_Hash_node<_Value, false>*,
     const _Hash_node<_Value, false>*) const
      { }

      void
      _M_swap(_Hash_code_base& __x)
      {
 std::swap(_M_extract, __x._M_extract);
 std::swap(_M_eq, __x._M_eq);
 std::swap(_M_h1, __x._M_h1);
 std::swap(_M_h2, __x._M_h2);
      }

    protected:
      _ExtractKey _M_extract;
      _Equal _M_eq;
      _H1 _M_h1;
      _H2 _M_h2;
    };




  template<typename _Key, typename _Value,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2>
    struct _Hash_code_base<_Key, _Value, _ExtractKey, _Equal, _H1, _H2,
      _Default_ranged_hash, true>
    {
      typedef _H1 hasher;

      hasher
      hash_function() const
      { return _M_h1; }

    protected:
      _Hash_code_base(const _ExtractKey& __ex, const _Equal& __eq,
        const _H1& __h1, const _H2& __h2,
        const _Default_ranged_hash&)
      : _M_extract(__ex), _M_eq(__eq), _M_h1(__h1), _M_h2(__h2) { }

      typedef std::size_t _Hash_code_type;

      _Hash_code_type
      _M_hash_code(const _Key& __k) const
      { return _M_h1(__k); }

      std::size_t
      _M_bucket_index(const _Key&, _Hash_code_type __c,
        std::size_t __n) const
      { return _M_h2(__c, __n); }

      std::size_t
      _M_bucket_index(const _Hash_node<_Value, true>* __p,
        std::size_t __n) const
      { return _M_h2(__p->_M_hash_code, __n); }

      bool
      _M_compare(const _Key& __k, _Hash_code_type __c,
   _Hash_node<_Value, true>* __n) const
      { return __c == __n->_M_hash_code && _M_eq(__k, _M_extract(__n->_M_v)); }

      void
      _M_store_code(_Hash_node<_Value, true>* __n, _Hash_code_type __c) const
      { __n->_M_hash_code = __c; }

      void
      _M_copy_code(_Hash_node<_Value, true>* __to,
     const _Hash_node<_Value, true>* __from) const
      { __to->_M_hash_code = __from->_M_hash_code; }

      void
      _M_swap(_Hash_code_base& __x)
      {
 std::swap(_M_extract, __x._M_extract);
 std::swap(_M_eq, __x._M_eq);
 std::swap(_M_h1, __x._M_h1);
 std::swap(_M_h2, __x._M_h2);
      }

    protected:
      _ExtractKey _M_extract;
      _Equal _M_eq;
      _H1 _M_h1;
      _H2 _M_h2;
    };
}

}
}
# 49 "/usr/include/c++/4.4/tr1_impl/hashtable" 2 3

namespace std
{
namespace tr1 {
# 111 "/usr/include/c++/4.4/tr1_impl/hashtable" 3
  template<typename _Key, typename _Value, typename _Allocator,
    typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash,
    typename _RehashPolicy,
    bool __cache_hash_code,
    bool __constant_iterators,
    bool __unique_keys>
    class _Hashtable
    : public __detail::_Rehash_base<_RehashPolicy,
        _Hashtable<_Key, _Value, _Allocator,
            _ExtractKey,
            _Equal, _H1, _H2, _Hash,
            _RehashPolicy,
            __cache_hash_code,
            __constant_iterators,
            __unique_keys> >,
      public __detail::_Hash_code_base<_Key, _Value, _ExtractKey, _Equal,
           _H1, _H2, _Hash, __cache_hash_code>,
      public __detail::_Map_base<_Key, _Value, _ExtractKey, __unique_keys,
     _Hashtable<_Key, _Value, _Allocator,
         _ExtractKey,
         _Equal, _H1, _H2, _Hash,
         _RehashPolicy,
         __cache_hash_code,
         __constant_iterators,
         __unique_keys> >
    {
    public:
      typedef _Allocator allocator_type;
      typedef _Value value_type;
      typedef _Key key_type;
      typedef _Equal key_equal;


      typedef typename _Allocator::difference_type difference_type;
      typedef typename _Allocator::size_type size_type;
      typedef typename _Allocator::pointer pointer;
      typedef typename _Allocator::const_pointer const_pointer;
      typedef typename _Allocator::reference reference;
      typedef typename _Allocator::const_reference const_reference;

      typedef __detail::_Node_iterator<value_type, __constant_iterators,
           __cache_hash_code>
                                                          local_iterator;
      typedef __detail::_Node_const_iterator<value_type,
          __constant_iterators,
          __cache_hash_code>
                                                          const_local_iterator;

      typedef __detail::_Hashtable_iterator<value_type, __constant_iterators,
         __cache_hash_code>
                                                          iterator;
      typedef __detail::_Hashtable_const_iterator<value_type,
        __constant_iterators,
        __cache_hash_code>
                                                          const_iterator;

      template<typename _Key2, typename _Value2, typename _Ex2, bool __unique2,
        typename _Hashtable2>
        friend struct __detail::_Map_base;

    private:
      typedef __detail::_Hash_node<_Value, __cache_hash_code> _Node;
      typedef typename _Allocator::template rebind<_Node>::other
                                                        _Node_allocator_type;
      typedef typename _Allocator::template rebind<_Node*>::other
                                                        _Bucket_allocator_type;

      typedef typename _Allocator::template rebind<_Value>::other
                                                        _Value_allocator_type;

      _Node_allocator_type _M_node_allocator;
      _Node** _M_buckets;
      size_type _M_bucket_count;
      size_type _M_element_count;
      _RehashPolicy _M_rehash_policy;

      _Node*
      _M_allocate_node(const value_type& __v);

      void
      _M_deallocate_node(_Node* __n);

      void
      _M_deallocate_nodes(_Node**, size_type);

      _Node**
      _M_allocate_buckets(size_type __n);

      void
      _M_deallocate_buckets(_Node**, size_type __n);

    public:

      _Hashtable(size_type __bucket_hint,
   const _H1&, const _H2&, const _Hash&,
   const _Equal&, const _ExtractKey&,
   const allocator_type&);

      template<typename _InputIterator>
        _Hashtable(_InputIterator __first, _InputIterator __last,
     size_type __bucket_hint,
     const _H1&, const _H2&, const _Hash&,
     const _Equal&, const _ExtractKey&,
     const allocator_type&);

      _Hashtable(const _Hashtable&);





      _Hashtable&
      operator=(const _Hashtable&);

      ~_Hashtable();




      void swap(_Hashtable&);



      iterator
      begin()
      {
 iterator __i(_M_buckets);
 if (!__i._M_cur_node)
   __i._M_incr_bucket();
 return __i;
      }

      const_iterator
      begin() const
      {
 const_iterator __i(_M_buckets);
 if (!__i._M_cur_node)
   __i._M_incr_bucket();
 return __i;
      }

      iterator
      end()
      { return iterator(_M_buckets + _M_bucket_count); }

      const_iterator
      end() const
      { return const_iterator(_M_buckets + _M_bucket_count); }
# 276 "/usr/include/c++/4.4/tr1_impl/hashtable" 3
      size_type
      size() const
      { return _M_element_count; }

      bool
      empty() const
      { return size() == 0; }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_node_allocator); }

      _Value_allocator_type
      _M_get_Value_allocator() const
      { return _Value_allocator_type(_M_node_allocator); }

      size_type
      max_size() const
      { return _M_node_allocator.max_size(); }


      key_equal
      key_eq() const
      { return this->_M_eq; }




      size_type
      bucket_count() const
      { return _M_bucket_count; }

      size_type
      max_bucket_count() const
      { return max_size(); }

      size_type
      bucket_size(size_type __n) const
      { return std::distance(begin(__n), end(__n)); }

      size_type
      bucket(const key_type& __k) const
      {
 return this->_M_bucket_index(__k, this->_M_hash_code(__k),
         bucket_count());
      }

      local_iterator
      begin(size_type __n)
      { return local_iterator(_M_buckets[__n]); }

      local_iterator
      end(size_type)
      { return local_iterator(0); }

      const_local_iterator
      begin(size_type __n) const
      { return const_local_iterator(_M_buckets[__n]); }

      const_local_iterator
      end(size_type) const
      { return const_local_iterator(0); }
# 350 "/usr/include/c++/4.4/tr1_impl/hashtable" 3
      float
      load_factor() const
      {
 return static_cast<float>(size()) / static_cast<float>(bucket_count());
      }





      const _RehashPolicy&
      __rehash_policy() const
      { return _M_rehash_policy; }

      void
      __rehash_policy(const _RehashPolicy&);


      iterator
      find(const key_type& __k);

      const_iterator
      find(const key_type& __k) const;

      size_type
      count(const key_type& __k) const;

      std::pair<iterator, iterator>
      equal_range(const key_type& __k);

      std::pair<const_iterator, const_iterator>
      equal_range(const key_type& __k) const;

    private:




      typedef typename __gnu_cxx::__conditional_type<__unique_keys,
              std::pair<iterator, bool>, iterator>::__type
        _Insert_Return_Type;

      typedef typename __gnu_cxx::__conditional_type<__unique_keys,
       std::_Select1st<_Insert_Return_Type>,
         std::_Identity<_Insert_Return_Type>
                                   >::__type
        _Insert_Conv_Type;

      _Node*
      _M_find_node(_Node*, const key_type&,
     typename _Hashtable::_Hash_code_type) const;

      iterator
      _M_insert_bucket(const value_type&, size_type,
         typename _Hashtable::_Hash_code_type);

      std::pair<iterator, bool>
      _M_insert(const value_type&, std::tr1:: true_type);

      iterator
      _M_insert(const value_type&, std::tr1:: false_type);

      void
      _M_erase_node(_Node*, _Node**);

    public:

      _Insert_Return_Type
      insert(const value_type& __v)
      { return _M_insert(__v, std::tr1:: integral_constant<bool,
    __unique_keys>()); }

      iterator
      insert(iterator, const value_type& __v)
      { return iterator(_Insert_Conv_Type()(this->insert(__v))); }

      const_iterator
      insert(const_iterator, const value_type& __v)
      { return const_iterator(_Insert_Conv_Type()(this->insert(__v))); }

      template<typename _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last);







      iterator
      erase(iterator);

      const_iterator
      erase(const_iterator);

      size_type
      erase(const key_type&);

      iterator
      erase(iterator, iterator);

      const_iterator
      erase(const_iterator, const_iterator);

      void
      clear();


      void rehash(size_type __n);

    private:

      void _M_rehash(size_type __n);
    };



  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::_Node*
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_allocate_node(const value_type& __v)
    {
      _Node* __n = _M_node_allocator.allocate(1);
      try
 {



   _M_get_Value_allocator().construct(&__n->_M_v, __v);

   __n->_M_next = 0;
   return __n;
 }
      catch(...)
 {
   _M_node_allocator.deallocate(__n, 1);
   throw;
 }
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_deallocate_node(_Node* __n)
    {



      _M_get_Value_allocator().destroy(&__n->_M_v);

      _M_node_allocator.deallocate(__n, 1);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_deallocate_nodes(_Node** __array, size_type __n)
    {
      for (size_type __i = 0; __i < __n; ++__i)
 {
   _Node* __p = __array[__i];
   while (__p)
     {
       _Node* __tmp = __p;
       __p = __p->_M_next;
       _M_deallocate_node(__tmp);
     }
   __array[__i] = 0;
 }
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::_Node**
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_allocate_buckets(size_type __n)
    {
      _Bucket_allocator_type __alloc(_M_node_allocator);



      _Node** __p = __alloc.allocate(__n + 1);
      std::fill(__p, __p + __n, (_Node*) 0);
      __p[__n] = reinterpret_cast<_Node*>(0x1000);
      return __p;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_deallocate_buckets(_Node** __p, size_type __n)
    {
      _Bucket_allocator_type __alloc(_M_node_allocator);
      __alloc.deallocate(__p, __n + 1);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _Hashtable(size_type __bucket_hint,
        const _H1& __h1, const _H2& __h2, const _Hash& __h,
        const _Equal& __eq, const _ExtractKey& __exk,
        const allocator_type& __a)
    : __detail::_Rehash_base<_RehashPolicy, _Hashtable>(),
      __detail::_Hash_code_base<_Key, _Value, _ExtractKey, _Equal,
    _H1, _H2, _Hash, __chc>(__exk, __eq,
       __h1, __h2, __h),
      __detail::_Map_base<_Key, _Value, _ExtractKey, __uk, _Hashtable>(),
      _M_node_allocator(__a),
      _M_bucket_count(0),
      _M_element_count(0),
      _M_rehash_policy()
    {
      _M_bucket_count = _M_rehash_policy._M_next_bkt(__bucket_hint);
      _M_buckets = _M_allocate_buckets(_M_bucket_count);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    template<typename _InputIterator>
      _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
      _Hashtable(_InputIterator __f, _InputIterator __l,
   size_type __bucket_hint,
   const _H1& __h1, const _H2& __h2, const _Hash& __h,
   const _Equal& __eq, const _ExtractKey& __exk,
   const allocator_type& __a)
      : __detail::_Rehash_base<_RehashPolicy, _Hashtable>(),
 __detail::_Hash_code_base<_Key, _Value, _ExtractKey, _Equal,
      _H1, _H2, _Hash, __chc>(__exk, __eq,
         __h1, __h2, __h),
 __detail::_Map_base<_Key, _Value, _ExtractKey, __uk, _Hashtable>(),
 _M_node_allocator(__a),
 _M_bucket_count(0),
 _M_element_count(0),
 _M_rehash_policy()
      {
 _M_bucket_count = std::max(_M_rehash_policy._M_next_bkt(__bucket_hint),
       _M_rehash_policy.
       _M_bkt_for_elements(__detail::
             __distance_fw(__f,
             __l)));
 _M_buckets = _M_allocate_buckets(_M_bucket_count);
 try
   {
     for (; __f != __l; ++__f)
       this->insert(*__f);
   }
 catch(...)
   {
     clear();
     _M_deallocate_buckets(_M_buckets, _M_bucket_count);
     throw;
   }
      }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _Hashtable(const _Hashtable& __ht)
    : __detail::_Rehash_base<_RehashPolicy, _Hashtable>(__ht),
      __detail::_Hash_code_base<_Key, _Value, _ExtractKey, _Equal,
    _H1, _H2, _Hash, __chc>(__ht),
      __detail::_Map_base<_Key, _Value, _ExtractKey, __uk, _Hashtable>(__ht),
      _M_node_allocator(__ht._M_node_allocator),
      _M_bucket_count(__ht._M_bucket_count),
      _M_element_count(__ht._M_element_count),
      _M_rehash_policy(__ht._M_rehash_policy)
    {
      _M_buckets = _M_allocate_buckets(_M_bucket_count);
      try
 {
   for (size_type __i = 0; __i < __ht._M_bucket_count; ++__i)
     {
       _Node* __n = __ht._M_buckets[__i];
       _Node** __tail = _M_buckets + __i;
       while (__n)
  {
    *__tail = _M_allocate_node(__n->_M_v);
    this->_M_copy_code(*__tail, __n);
    __tail = &((*__tail)->_M_next);
    __n = __n->_M_next;
  }
     }
 }
      catch(...)
 {
   clear();
   _M_deallocate_buckets(_M_buckets, _M_bucket_count);
   throw;
 }
    }
# 701 "/usr/include/c++/4.4/tr1_impl/hashtable" 3
  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>&
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    operator=(const _Hashtable& __ht)
    {
      _Hashtable __tmp(__ht);
      this->swap(__tmp);
      return *this;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    ~_Hashtable()
    {
      clear();
      _M_deallocate_buckets(_M_buckets, _M_bucket_count);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::



    swap(_Hashtable& __x)

    {



      __detail::_Hash_code_base<_Key, _Value, _ExtractKey, _Equal,
 _H1, _H2, _Hash, __chc>::_M_swap(__x);



      std::__alloc_swap<_Node_allocator_type>::_S_do_it(_M_node_allocator,
       __x._M_node_allocator);

      std::swap(_M_rehash_policy, __x._M_rehash_policy);
      std::swap(_M_buckets, __x._M_buckets);
      std::swap(_M_bucket_count, __x._M_bucket_count);
      std::swap(_M_element_count, __x._M_element_count);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    __rehash_policy(const _RehashPolicy& __pol)
    {
      _M_rehash_policy = __pol;
      size_type __n_bkt = __pol._M_bkt_for_elements(_M_element_count);
      if (__n_bkt > _M_bucket_count)
 _M_rehash(__n_bkt);
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    find(const key_type& __k)
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      _Node* __p = _M_find_node(_M_buckets[__n], __k, __code);
      return __p ? iterator(__p, _M_buckets + __n) : this->end();
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::const_iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    find(const key_type& __k) const
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      _Node* __p = _M_find_node(_M_buckets[__n], __k, __code);
      return __p ? const_iterator(__p, _M_buckets + __n) : this->end();
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::size_type
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    count(const key_type& __k) const
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      std::size_t __result = 0;
      for (_Node* __p = _M_buckets[__n]; __p; __p = __p->_M_next)
 if (this->_M_compare(__k, __code, __p))
   ++__result;
      return __result;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    std::pair<typename _Hashtable<_Key, _Value, _Allocator,
      _ExtractKey, _Equal, _H1,
      _H2, _Hash, _RehashPolicy,
      __chc, __cit, __uk>::iterator,
       typename _Hashtable<_Key, _Value, _Allocator,
      _ExtractKey, _Equal, _H1,
      _H2, _Hash, _RehashPolicy,
      __chc, __cit, __uk>::iterator>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    equal_range(const key_type& __k)
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      _Node** __head = _M_buckets + __n;
      _Node* __p = _M_find_node(*__head, __k, __code);

      if (__p)
 {
   _Node* __p1 = __p->_M_next;
   for (; __p1; __p1 = __p1->_M_next)
     if (!this->_M_compare(__k, __code, __p1))
       break;

   iterator __first(__p, __head);
   iterator __last(__p1, __head);
   if (!__p1)
     __last._M_incr_bucket();
   return std::make_pair(__first, __last);
 }
      else
 return std::make_pair(this->end(), this->end());
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    std::pair<typename _Hashtable<_Key, _Value, _Allocator,
      _ExtractKey, _Equal, _H1,
      _H2, _Hash, _RehashPolicy,
      __chc, __cit, __uk>::const_iterator,
       typename _Hashtable<_Key, _Value, _Allocator,
      _ExtractKey, _Equal, _H1,
      _H2, _Hash, _RehashPolicy,
      __chc, __cit, __uk>::const_iterator>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    equal_range(const key_type& __k) const
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      _Node** __head = _M_buckets + __n;
      _Node* __p = _M_find_node(*__head, __k, __code);

      if (__p)
 {
   _Node* __p1 = __p->_M_next;
   for (; __p1; __p1 = __p1->_M_next)
     if (!this->_M_compare(__k, __code, __p1))
       break;

   const_iterator __first(__p, __head);
   const_iterator __last(__p1, __head);
   if (!__p1)
     __last._M_incr_bucket();
   return std::make_pair(__first, __last);
 }
      else
 return std::make_pair(this->end(), this->end());
    }



  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey,
   _Equal, _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::_Node*
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_find_node(_Node* __p, const key_type& __k,
  typename _Hashtable::_Hash_code_type __code) const
    {
      for (; __p; __p = __p->_M_next)
 if (this->_M_compare(__k, __code, __p))
   return __p;
      return false;
    }


  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_insert_bucket(const value_type& __v, size_type __n,
      typename _Hashtable::_Hash_code_type __code)
    {
      std::pair<bool, std::size_t> __do_rehash
 = _M_rehash_policy._M_need_rehash(_M_bucket_count,
       _M_element_count, 1);



      _Node* __new_node = _M_allocate_node(__v);

      try
 {
   if (__do_rehash.first)
     {
       const key_type& __k = this->_M_extract(__v);
       __n = this->_M_bucket_index(__k, __code, __do_rehash.second);
       _M_rehash(__do_rehash.second);
     }

   __new_node->_M_next = _M_buckets[__n];
   this->_M_store_code(__new_node, __code);
   _M_buckets[__n] = __new_node;
   ++_M_element_count;
   return iterator(__new_node, _M_buckets + __n);
 }
      catch(...)
 {
   _M_deallocate_node(__new_node);
   throw;
 }
    }


  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    std::pair<typename _Hashtable<_Key, _Value, _Allocator,
      _ExtractKey, _Equal, _H1,
      _H2, _Hash, _RehashPolicy,
      __chc, __cit, __uk>::iterator, bool>
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_insert(const value_type& __v, std::tr1:: true_type)
    {
      const key_type& __k = this->_M_extract(__v);
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      size_type __n = this->_M_bucket_index(__k, __code, _M_bucket_count);

      if (_Node* __p = _M_find_node(_M_buckets[__n], __k, __code))
 return std::make_pair(iterator(__p, _M_buckets + __n), false);
      return std::make_pair(_M_insert_bucket(__v, __n, __code), true);
    }


  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_insert(const value_type& __v, std::tr1:: false_type)
    {
      std::pair<bool, std::size_t> __do_rehash
 = _M_rehash_policy._M_need_rehash(_M_bucket_count,
       _M_element_count, 1);
      if (__do_rehash.first)
 _M_rehash(__do_rehash.second);

      const key_type& __k = this->_M_extract(__v);
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      size_type __n = this->_M_bucket_index(__k, __code, _M_bucket_count);


      _Node* __prev = _M_find_node(_M_buckets[__n], __k, __code);
      _Node* __new_node = _M_allocate_node(__v);

      if (__prev)
 {
   __new_node->_M_next = __prev->_M_next;
   __prev->_M_next = __new_node;
 }
      else
 {
   __new_node->_M_next = _M_buckets[__n];
   _M_buckets[__n] = __new_node;
 }
      this->_M_store_code(__new_node, __code);

      ++_M_element_count;
      return iterator(__new_node, _M_buckets + __n);
    }


  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_erase_node(_Node* __p, _Node** __b)
    {
      _Node* __cur = *__b;
      if (__cur == __p)
 *__b = __cur->_M_next;
      else
 {
   _Node* __next = __cur->_M_next;
   while (__next != __p)
     {
       __cur = __next;
       __next = __cur->_M_next;
     }
   __cur->_M_next = __next->_M_next;
 }

      _M_deallocate_node(__p);
      --_M_element_count;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    template<typename _InputIterator>
      void
      _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
      insert(_InputIterator __first, _InputIterator __last)
      {
 size_type __n_elt = __detail::__distance_fw(__first, __last);
 std::pair<bool, std::size_t> __do_rehash
   = _M_rehash_policy._M_need_rehash(_M_bucket_count,
         _M_element_count, __n_elt);
 if (__do_rehash.first)
   _M_rehash(__do_rehash.second);

 for (; __first != __last; ++__first)
   this->insert(*__first);
      }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    erase(iterator __it)
    {
      iterator __result = __it;
      ++__result;
      _M_erase_node(__it._M_cur_node, __it._M_cur_bucket);
      return __result;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::const_iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    erase(const_iterator __it)
    {
      const_iterator __result = __it;
      ++__result;
      _M_erase_node(__it._M_cur_node, __it._M_cur_bucket);
      return __result;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::size_type
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    erase(const key_type& __k)
    {
      typename _Hashtable::_Hash_code_type __code = this->_M_hash_code(__k);
      std::size_t __n = this->_M_bucket_index(__k, __code, _M_bucket_count);
      size_type __result = 0;

      _Node** __slot = _M_buckets + __n;
      while (*__slot && !this->_M_compare(__k, __code, *__slot))
 __slot = &((*__slot)->_M_next);

      _Node** __saved_slot = 0;
      while (*__slot && this->_M_compare(__k, __code, *__slot))
 {



   if (&this->_M_extract((*__slot)->_M_v) != &__k)
     {
              _Node* __p = *__slot;
              *__slot = __p->_M_next;
       _M_deallocate_node(__p);
       --_M_element_count;
       ++__result;
     }
   else
     {
       __saved_slot = __slot;
       __slot = &((*__slot)->_M_next);
     }
 }

      if (__saved_slot)
 {
   _Node* __p = *__saved_slot;
   *__saved_slot = __p->_M_next;
   _M_deallocate_node(__p);
   --_M_element_count;
   ++__result;
 }

      return __result;
    }




  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    erase(iterator __first, iterator __last)
    {
      while (__first != __last)
 __first = this->erase(__first);
      return __last;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    typename _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
   _H1, _H2, _Hash, _RehashPolicy,
   __chc, __cit, __uk>::const_iterator
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    erase(const_iterator __first, const_iterator __last)
    {
      while (__first != __last)
 __first = this->erase(__first);
      return __last;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    clear()
    {
      _M_deallocate_nodes(_M_buckets, _M_bucket_count);
      _M_element_count = 0;
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    rehash(size_type __n)
    {
      _M_rehash(std::max(_M_rehash_policy._M_next_bkt(__n),
    _M_rehash_policy._M_bkt_for_elements(_M_element_count
             + 1)));
    }

  template<typename _Key, typename _Value,
    typename _Allocator, typename _ExtractKey, typename _Equal,
    typename _H1, typename _H2, typename _Hash, typename _RehashPolicy,
    bool __chc, bool __cit, bool __uk>
    void
    _Hashtable<_Key, _Value, _Allocator, _ExtractKey, _Equal,
        _H1, _H2, _Hash, _RehashPolicy, __chc, __cit, __uk>::
    _M_rehash(size_type __n)
    {
      _Node** __new_array = _M_allocate_buckets(__n);
      try
 {
   for (size_type __i = 0; __i < _M_bucket_count; ++__i)
     while (_Node* __p = _M_buckets[__i])
       {
  std::size_t __new_index = this->_M_bucket_index(__p, __n);
  _M_buckets[__i] = __p->_M_next;
  __p->_M_next = __new_array[__new_index];
  __new_array[__new_index] = __p;
       }
   _M_deallocate_buckets(_M_buckets, _M_bucket_count);
   _M_bucket_count = __n;
   _M_buckets = __new_array;
 }
      catch(...)
 {




   _M_deallocate_nodes(__new_array, __n);
   _M_deallocate_buckets(__new_array, __n);
   _M_deallocate_nodes(_M_buckets, _M_bucket_count);
   _M_element_count = 0;
   throw;
 }
    }

}
}
# 47 "/usr/include/c++/4.4/tr1/hashtable.h" 2 3
# 46 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 54 "/usr/include/c++/4.4/tr1/unordered_map" 3
# 1 "/usr/include/c++/4.4/tr1_impl/unordered_map" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
namespace std
{
namespace tr1 {



  template<class _Key, class _Tp,
    class _Hash = hash<_Key>,
    class _Pred = std::equal_to<_Key>,
    class _Alloc = std::allocator<std::pair<const _Key, _Tp> >,
    bool __cache_hash_code = false>
    class __unordered_map
    : public _Hashtable<_Key, std::pair<const _Key, _Tp>, _Alloc,
   std::_Select1st<std::pair<const _Key, _Tp> >, _Pred,
   _Hash, __detail::_Mod_range_hashing,
   __detail::_Default_ranged_hash,
   __detail::_Prime_rehash_policy,
   __cache_hash_code, false, true>
    {
      typedef _Hashtable<_Key, std::pair<const _Key, _Tp>, _Alloc,
    std::_Select1st<std::pair<const _Key, _Tp> >, _Pred,
    _Hash, __detail::_Mod_range_hashing,
    __detail::_Default_ranged_hash,
    __detail::_Prime_rehash_policy,
    __cache_hash_code, false, true>
        _Base;

    public:
      typedef typename _Base::size_type size_type;
      typedef typename _Base::hasher hasher;
      typedef typename _Base::key_equal key_equal;
      typedef typename _Base::allocator_type allocator_type;

      explicit
      __unordered_map(size_type __n = 10,
        const hasher& __hf = hasher(),
        const key_equal& __eql = key_equal(),
        const allocator_type& __a = allocator_type())
      : _Base(__n, __hf, __detail::_Mod_range_hashing(),
       __detail::_Default_ranged_hash(),
       __eql, std::_Select1st<std::pair<const _Key, _Tp> >(), __a)
      { }

      template<typename _InputIterator>
        __unordered_map(_InputIterator __f, _InputIterator __l,
   size_type __n = 10,
   const hasher& __hf = hasher(),
   const key_equal& __eql = key_equal(),
   const allocator_type& __a = allocator_type())
 : _Base(__f, __l, __n, __hf, __detail::_Mod_range_hashing(),
  __detail::_Default_ranged_hash(),
  __eql, std::_Select1st<std::pair<const _Key, _Tp> >(), __a)
 { }





    };

  template<class _Key, class _Tp,
    class _Hash = hash<_Key>,
    class _Pred = std::equal_to<_Key>,
    class _Alloc = std::allocator<std::pair<const _Key, _Tp> >,
    bool __cache_hash_code = false>
    class __unordered_multimap
    : public _Hashtable<_Key, std::pair<const _Key, _Tp>,
   _Alloc,
   std::_Select1st<std::pair<const _Key, _Tp> >, _Pred,
   _Hash, __detail::_Mod_range_hashing,
   __detail::_Default_ranged_hash,
   __detail::_Prime_rehash_policy,
   __cache_hash_code, false, false>
    {
      typedef _Hashtable<_Key, std::pair<const _Key, _Tp>,
    _Alloc,
    std::_Select1st<std::pair<const _Key, _Tp> >, _Pred,
    _Hash, __detail::_Mod_range_hashing,
    __detail::_Default_ranged_hash,
    __detail::_Prime_rehash_policy,
    __cache_hash_code, false, false>
        _Base;

    public:
      typedef typename _Base::size_type size_type;
      typedef typename _Base::hasher hasher;
      typedef typename _Base::key_equal key_equal;
      typedef typename _Base::allocator_type allocator_type;

      explicit
      __unordered_multimap(size_type __n = 10,
      const hasher& __hf = hasher(),
      const key_equal& __eql = key_equal(),
      const allocator_type& __a = allocator_type())
      : _Base(__n, __hf, __detail::_Mod_range_hashing(),
       __detail::_Default_ranged_hash(),
       __eql, std::_Select1st<std::pair<const _Key, _Tp> >(), __a)
      { }


      template<typename _InputIterator>
        __unordered_multimap(_InputIterator __f, _InputIterator __l,
        typename _Base::size_type __n = 0,
        const hasher& __hf = hasher(),
        const key_equal& __eql = key_equal(),
        const allocator_type& __a = allocator_type())
 : _Base(__f, __l, __n, __hf, __detail::_Mod_range_hashing(),
  __detail::_Default_ranged_hash(),
  __eql, std::_Select1st<std::pair<const _Key, _Tp> >(), __a)
        { }





    };

  template<class _Key, class _Tp, class _Hash, class _Pred, class _Alloc,
    bool __cache_hash_code>
    inline void
    swap(__unordered_map<_Key, _Tp, _Hash, _Pred,
  _Alloc, __cache_hash_code>& __x,
  __unordered_map<_Key, _Tp, _Hash, _Pred,
  _Alloc, __cache_hash_code>& __y)
    { __x.swap(__y); }

  template<class _Key, class _Tp, class _Hash, class _Pred, class _Alloc,
    bool __cache_hash_code>
    inline void
    swap(__unordered_multimap<_Key, _Tp, _Hash, _Pred,
  _Alloc, __cache_hash_code>& __x,
  __unordered_multimap<_Key, _Tp, _Hash, _Pred,
  _Alloc, __cache_hash_code>& __y)
    { __x.swap(__y); }
# 184 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
  template<class _Key, class _Tp,
    class _Hash = hash<_Key>,
    class _Pred = std::equal_to<_Key>,
    class _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class unordered_map
    : public __unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc>
    {
      typedef __unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc> _Base;

    public:
      typedef typename _Base::value_type value_type;
      typedef typename _Base::size_type size_type;
      typedef typename _Base::hasher hasher;
      typedef typename _Base::key_equal key_equal;
      typedef typename _Base::allocator_type allocator_type;

      explicit
      unordered_map(size_type __n = 10,
      const hasher& __hf = hasher(),
      const key_equal& __eql = key_equal(),
      const allocator_type& __a = allocator_type())
      : _Base(__n, __hf, __eql, __a)
      { }

      template<typename _InputIterator>
        unordered_map(_InputIterator __f, _InputIterator __l,
        size_type __n = 10,
        const hasher& __hf = hasher(),
        const key_equal& __eql = key_equal(),
        const allocator_type& __a = allocator_type())
 : _Base(__f, __l, __n, __hf, __eql, __a)
        { }
# 246 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
    };
# 266 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
  template<class _Key, class _Tp,
    class _Hash = hash<_Key>,
    class _Pred = std::equal_to<_Key>,
    class _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class unordered_multimap
    : public __unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc>
    {
      typedef __unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc> _Base;

    public:
      typedef typename _Base::value_type value_type;
      typedef typename _Base::size_type size_type;
      typedef typename _Base::hasher hasher;
      typedef typename _Base::key_equal key_equal;
      typedef typename _Base::allocator_type allocator_type;

      explicit
      unordered_multimap(size_type __n = 10,
    const hasher& __hf = hasher(),
    const key_equal& __eql = key_equal(),
    const allocator_type& __a = allocator_type())
      : _Base(__n, __hf, __eql, __a)
      { }


      template<typename _InputIterator>
        unordered_multimap(_InputIterator __f, _InputIterator __l,
      typename _Base::size_type __n = 0,
      const hasher& __hf = hasher(),
      const key_equal& __eql = key_equal(),
      const allocator_type& __a = allocator_type())
 : _Base(__f, __l, __n, __hf, __eql, __a)
        { }
# 329 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
    };

  template<class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
    inline void
    swap(unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc>& __x,
  unordered_map<_Key, _Tp, _Hash, _Pred, _Alloc>& __y)
    { __x.swap(__y); }

  template<class _Key, class _Tp, class _Hash, class _Pred, class _Alloc>
    inline void
    swap(unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc>& __x,
  unordered_multimap<_Key, _Tp, _Hash, _Pred, _Alloc>& __y)
    { __x.swap(__y); }
# 369 "/usr/include/c++/4.4/tr1_impl/unordered_map" 3
}
}
# 55 "/usr/include/c++/4.4/tr1/unordered_map" 2 3
# 4 "scope.h" 2
# 1 "/usr/include/c++/4.4/string" 1 3
# 38 "/usr/include/c++/4.4/string" 3
       
# 39 "/usr/include/c++/4.4/string" 3



# 1 "/usr/include/c++/4.4/bits/char_traits.h" 1 3
# 39 "/usr/include/c++/4.4/bits/char_traits.h" 3
       
# 40 "/usr/include/c++/4.4/bits/char_traits.h" 3


# 1 "/usr/include/c++/4.4/bits/postypes.h" 1 3
# 40 "/usr/include/c++/4.4/bits/postypes.h" 3
       
# 41 "/usr/include/c++/4.4/bits/postypes.h" 3

# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 41 "/usr/include/c++/4.4/cwchar" 3
       
# 42 "/usr/include/c++/4.4/cwchar" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 45 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 37 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 38 "/usr/include/wchar.h" 2 3 4


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 41 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 43 "/usr/include/wchar.h" 2 3 4
# 52 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 352 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 53 "/usr/include/wchar.h" 2 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;



# 129 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     throw ();


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     throw ();


extern int wcscmp (__const wchar_t *__s1, __const wchar_t *__s2)
     throw () __attribute__ ((__pure__));

extern int wcsncmp (__const wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));




extern int wcscasecmp (__const wchar_t *__s1, __const wchar_t *__s2) throw ();


extern int wcsncasecmp (__const wchar_t *__s1, __const wchar_t *__s2,
   size_t __n) throw ();



# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 178 "/usr/include/wchar.h" 2 3 4

extern int wcscasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (__const wchar_t *__s1, __const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         __const wchar_t *__restrict __s2, size_t __n) throw ();








extern int wcscoll_l (__const wchar_t *__s1, __const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, __const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (__const wchar_t *__s) throw () __attribute__ ((__malloc__));





extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcschr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcsrchr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));









extern wchar_t *wcschrnul (__const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (__const wchar_t *__wcs, __const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (__const wchar_t *__wcs, __const wchar_t *__accept)
     throw () __attribute__ ((__pure__));


extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, __const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcspbrk (__const wchar_t *__wcs,
           __const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsstr (wchar_t *__haystack, __const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcsstr (__const wchar_t *__haystack,
          __const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));






extern wchar_t *wcstok (wchar_t *__restrict __s,
   __const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (__const wchar_t *__s) throw () __attribute__ ((__pure__));





extern "C++" wchar_t *wcswcs (wchar_t *__haystack, __const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcswcs (__const wchar_t *__haystack,
          __const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
# 303 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (__const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));






extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wmemchr (__const wchar_t *__s, wchar_t __c,
           size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));






extern int wmemcmp (__const wchar_t *__restrict __s1,
      __const wchar_t *__restrict __s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    __const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     __const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (__const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         __const char *__restrict __s, size_t __n,
         mbstate_t *__p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (__const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (__const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();

# 403 "/usr/include/wchar.h" 3 4



extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    __const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    __const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     __const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     __const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (__const wchar_t *__s, size_t __n) throw ();






extern double wcstod (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (__const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (__const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (__const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 528 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (__const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (__const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (__const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__dest, __const wchar_t *__src) throw ();



extern wchar_t *wcpncpy (wchar_t *__dest, __const wchar_t *__src, size_t __n)
     throw ();
# 578 "/usr/include/wchar.h" 3 4
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       __const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (__const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       __const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (__const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      __const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (__const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (__const wchar_t *__restrict __s,
      __const wchar_t *__restrict __format, ...)
     throw () ;
# 678 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (__const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (__const wchar_t *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 734 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (__const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 799 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 825 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 835 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (__const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   __const wchar_t *__restrict __format,
   __const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     __const wchar_t *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 889 "/usr/include/wchar.h" 3 4
}
# 48 "/usr/include/c++/4.4/cwchar" 2 3
# 65 "/usr/include/c++/4.4/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::mbstate_t;

}
# 139 "/usr/include/c++/4.4/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
# 234 "/usr/include/c++/4.4/cwchar" 3
}







namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  using ::wcstold;
# 258 "/usr/include/c++/4.4/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 43 "/usr/include/c++/4.4/bits/postypes.h" 2 3
# 70 "/usr/include/c++/4.4/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 90 "/usr/include/c++/4.4/bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 111 "/usr/include/c++/4.4/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "/usr/include/c++/4.4/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 239 "/usr/include/c++/4.4/bits/postypes.h" 3
}
# 43 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 41 "/usr/include/c++/4.4/cwchar" 3
       
# 42 "/usr/include/c++/4.4/cwchar" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 45 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/c++/4.4/cwchar" 2 3
# 44 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 52 "/usr/include/c++/4.4/bits/char_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 64 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 89 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 230 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 43 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/localefwd.h" 1 3
# 39 "/usr/include/c++/4.4/bits/localefwd.h" 3
       
# 40 "/usr/include/c++/4.4/bits/localefwd.h" 3


# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 1 3
# 40 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 3
       
# 41 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 3

# 1 "/usr/include/c++/4.4/clocale" 1 3
# 41 "/usr/include/c++/4.4/clocale" 3
       
# 42 "/usr/include/c++/4.4/clocale" 3


# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 27 "/usr/include/bits/locale.h" 3 4
enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};
# 31 "/usr/include/locale.h" 2 3 4

extern "C" {
# 51 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 121 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, __const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();


# 152 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, __const char *__locale,
        __locale_t __base) throw ();
# 187 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 45 "/usr/include/c++/4.4/clocale" 2 3
# 53 "/usr/include/c++/4.4/clocale" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 43 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  extern "C" __typeof(uselocale) __uselocale;

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 85 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }

}
# 43 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/iosfwd" 1 3
# 38 "/usr/include/c++/4.4/iosfwd" 3
       
# 39 "/usr/include/c++/4.4/iosfwd" 3





namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  class ios_base;
# 127 "/usr/include/c++/4.4/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 44 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/cctype" 1 3
# 41 "/usr/include/c++/4.4/cctype" 3
       
# 42 "/usr/include/c++/4.4/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 29 "/usr/include/ctype.h" 2 3 4

extern "C" {
# 41 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 42 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 323 "/usr/include/ctype.h" 3 4
}
# 45 "/usr/include/c++/4.4/cctype" 2 3
# 64 "/usr/include/c++/4.4/cctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 45 "/usr/include/c++/4.4/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 46 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/ostream_insert.h" 1 3
# 33 "/usr/include/c++/4.4/bits/ostream_insert.h" 3
       
# 34 "/usr/include/c++/4.4/bits/ostream_insert.h" 3


# 1 "/usr/include/c++/4.4/cxxabi-forced.h" 1 3
# 29 "/usr/include/c++/4.4/cxxabi-forced.h" 3
#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();
    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "/usr/include/c++/4.4/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 47 "/usr/include/c++/4.4/string" 2 3






# 1 "/usr/include/c++/4.4/bits/basic_string.h" 1 3
# 39 "/usr/include/c++/4.4/bits/basic_string.h" 3
       
# 40 "/usr/include/c++/4.4/bits/basic_string.h" 3

# 1 "/usr/include/c++/4.4/ext/atomicity.h" 1 3
# 34 "/usr/include/c++/4.4/ext/atomicity.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h" 1 3
# 30 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 1 3
# 41 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 25 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 30 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 31 "/usr/include/sched.h" 2 3 4



# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 35 "/usr/include/sched.h" 2 3 4


typedef __pid_t pid_t;





# 1 "/usr/include/bits/sched.h" 1 3 4
# 74 "/usr/include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


}







struct __sched_param
  {
    int __sched_priority;
  };
# 116 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 199 "/usr/include/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () ;
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 44 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, __const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          __const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         __const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 26 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 390 "/usr/include/time.h" 3 4
extern int getdate_err;
# 399 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 413 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 27 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;
# 67 "/usr/include/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
# 170 "/usr/include/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 29 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/setjmp.h" 2 3 4






typedef int __jmp_buf[6];
# 30 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 31 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 115 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 147 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 182 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 220 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      __const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     __const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ();







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (__const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (__const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (__const pthread_attr_t *__restrict
           __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           __const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (__const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (__const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (__const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (__const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (__const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (__const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     __const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (__const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      __const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, __const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       __const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 478 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 490 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 524 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 726 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          __const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        __const struct timespec *__restrict
        __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (__const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
# 790 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (__const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (__const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (__const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (__const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (__const pthread_mutexattr_t *__attr,
     int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (__const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 872 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    __const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         __const pthread_condattr_t *__restrict
         __cond_attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 984 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __const struct timespec *__restrict
       __abstime) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (__const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (__const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1028 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     __const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (__const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1095 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    __const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1129 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();
# 1143 "/usr/include/pthread.h" 3 4
}
# 42 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 2 3
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 221 "/usr/include/unistd.h" 3 4
typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 187 "/usr/include/getopt.h" 3 4
}
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1101 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__libc_block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();
# 1160 "/usr/include/unistd.h" 3 4
}
# 43 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 2 3

typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;
# 118 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join")));
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal")));
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self")));
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach")));
static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));
static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield")));

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));


static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock")));


static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy")));

static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait")));
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy")));


static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 237 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw_pthread_cancel;
  return __gthread_active_ptr != 0;
}
# 675 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
    void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}



static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
      const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}



static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}
# 818 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}



static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
         const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}



static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
     const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
          __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait_recursive (__gthread_cond_t *__cond,
        __gthread_recursive_mutex_t *__mutex,
        const __gthread_time_t *__abs_timeout)
{
  return __gthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}
# 163 "/usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "/usr/include/c++/4.4/ext/atomicity.h" 2 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h" 1 3
# 32 "/usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "/usr/include/c++/4.4/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "/usr/include/c++/4.4/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 42 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

# 1 "/usr/include/c++/4.4/initializer_list" 1 3
# 44 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 103 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "/usr/include/c++/4.4/bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "/usr/include/c++/4.4/bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      inline
      basic_string();




      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 464 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 495 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 528 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 553 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }

    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 652 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 665 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }





      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 694 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }




      bool
      empty() const
      { return this->size() == 0; }
# 722 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
# 739 "/usr/include/c++/4.4/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

 ;

 ;
 _M_leak();
 return _M_data()[__pos];
      }
# 760 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 779 "/usr/include/c++/4.4/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 835 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 850 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
 ;
 return this->append(__s, traits_type::length(__s));
      }
# 882 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 904 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 943 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 959 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 971 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return this->assign(__s, traits_type::length(__s));
      }
# 987 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 999 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1027 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1042 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1070 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1092 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1115 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1133 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1156 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1173 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1197 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1213 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {
 ;

 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1233 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1252 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1274 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1298 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1317 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1340 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1358 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1376 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {
 ;

 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1397 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1418 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {
 ;

 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1440 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
   ;

   ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {
 ;

 ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1515 "/usr/include/c++/4.4/bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct(static_cast<size_type>(__beg), __end, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1591 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1601 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1611 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1643 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1656 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1670 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1687 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1700 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1715 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1728 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1745 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1758 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1773 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1786 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1805 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1819 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1834 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1847 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1866 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1880 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 1895 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 1909 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 1926 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 1939 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 1955 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 1968 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 1985 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2000 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2018 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2048 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2072 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2090 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2113 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2138 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()

    : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }
# 2159 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2230 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2276 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2313 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2350 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2387 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2424 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2461 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2478 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2496 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2519 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2536 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 54 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/basic_string.tcc" 1 3
# 42 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
       
# 43 "/usr/include/c++/4.4/bits/basic_string.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 try
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 if (__builtin_expect(__gnu_cxx::__is_null_pointer(__beg)
        && __beg != __end, 0))
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 try
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {

      if (__n == 0 && __a == _Alloc())
 return _S_empty_rep()._M_refdata();


      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 241 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
      ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
      ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
       ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {
       ;





       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
       ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {

      if (_M_rep() == &_S_empty_rep())
 return;

      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 578 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 57 "/usr/include/c++/4.4/string" 2 3
# 5 "scope.h" 2
# 1 "/usr/include/c++/4.4/algorithm" 1 3
# 59 "/usr/include/c++/4.4/algorithm" 3
       
# 60 "/usr/include/c++/4.4/algorithm" 3


# 1 "/usr/include/c++/4.4/bits/stl_algo.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_algo.h" 3
# 1 "/usr/include/c++/4.4/cstdlib" 1 3
# 41 "/usr/include/c++/4.4/cstdlib" 3
       
# 42 "/usr/include/c++/4.4/cstdlib" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 45 "/usr/include/c++/4.4/cstdlib" 2 3
# 68 "/usr/include/c++/4.4/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

# 240 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;
# 71 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 141 "/usr/include/sys/types.h" 3 4
typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 274 "/usr/include/sys/types.h" 3 4
}
# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 69 "/usr/include/c++/4.4/cstdlib" 2 3
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;


  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }

}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  using ::lldiv_t;





  using ::_Exit;


  inline long long
  abs(long long __x) { return __x >= 0 ? __x : -__x; }


  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;

}

namespace std __attribute__ ((__visibility__ ("default"))) {


  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::abs;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;

}
# 61 "/usr/include/c++/4.4/bits/stl_algo.h" 2 3
# 1 "/usr/include/c++/4.4/bits/algorithmfwd.h" 1 3
# 33 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
       
# 34 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3






namespace std __attribute__ ((__visibility__ ("default"))) {
# 198 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _FIter, typename _Tp>
    bool
    binary_search(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    bool
    binary_search(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _IIter, typename _OIter>
    _OIter
    copy(_IIter, _IIter, _OIter);

  template<typename _BIter1, typename _BIter2>
    _BIter2
    copy_backward(_BIter1, _BIter1, _BIter2);
# 227 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _FIter, typename _Tp>
    pair<_FIter, _FIter>
    equal_range(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    pair<_FIter, _FIter>
    equal_range(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _FIter, typename _Tp>
    void
    fill(_FIter, _FIter, const _Tp&);
# 246 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _OIter, typename _Size, typename _Tp>
    _OIter
    fill_n(_OIter, _Size, const _Tp&);



  template<typename _FIter1, typename _FIter2>
    _FIter1
    find_end(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1
    find_end(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);
# 273 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _IIter1, typename _IIter2>
    bool
    includes(_IIter1, _IIter1, _IIter2, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _Compare>
    bool
    includes(_IIter1, _IIter1, _IIter2, _IIter2, _Compare);

  template<typename _BIter>
    void
    inplace_merge(_BIter, _BIter, _BIter);

  template<typename _BIter, typename _Compare>
    void
    inplace_merge(_BIter, _BIter, _BIter, _Compare);
# 327 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _FIter1, typename _FIter2>
    void
    iter_swap(_FIter1, _FIter2);

  template<typename _FIter, typename _Tp>
    _FIter
    lower_bound(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    _FIter
    lower_bound(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _RAIter>
    void
    make_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    make_heap(_RAIter, _RAIter, _Compare);

  template<typename _Tp>
    const _Tp&
    max(const _Tp&, const _Tp&);

  template<typename _Tp, typename _Compare>
    const _Tp&
    max(const _Tp&, const _Tp&, _Compare);




  template<typename _Tp>
    const _Tp&
    min(const _Tp&, const _Tp&);

  template<typename _Tp, typename _Compare>
    const _Tp&
    min(const _Tp&, const _Tp&, _Compare);
# 412 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _BIter>
    bool
    next_permutation(_BIter, _BIter);

  template<typename _BIter, typename _Compare>
    bool
    next_permutation(_BIter, _BIter, _Compare);
# 429 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _IIter, typename _RAIter>
    _RAIter
    partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter);

  template<typename _IIter, typename _RAIter, typename _Compare>
    _RAIter
    partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter, _Compare);
# 450 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _RAIter>
    void
    pop_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    pop_heap(_RAIter, _RAIter, _Compare);

  template<typename _BIter>
    bool
    prev_permutation(_BIter, _BIter);

  template<typename _BIter, typename _Compare>
    bool
    prev_permutation(_BIter, _BIter, _Compare);

  template<typename _RAIter>
    void
    push_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    push_heap(_RAIter, _RAIter, _Compare);



  template<typename _FIter, typename _Tp>
    _FIter
    remove(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Predicate>
    _FIter
    remove_if(_FIter, _FIter, _Predicate);

  template<typename _IIter, typename _OIter, typename _Tp>
    _OIter
    remove_copy(_IIter, _IIter, _OIter, const _Tp&);

  template<typename _IIter, typename _OIter, typename _Predicate>
    _OIter
    remove_copy_if(_IIter, _IIter, _OIter, _Predicate);



  template<typename _IIter, typename _OIter, typename _Tp>
    _OIter
    replace_copy(_IIter, _IIter, _OIter, const _Tp&, const _Tp&);

  template<typename _Iter, typename _OIter, typename _Predicate, typename _Tp>
    _OIter
    replace_copy_if(_Iter, _Iter, _OIter, _Predicate, const _Tp&);



  template<typename _BIter>
    void
    reverse(_BIter, _BIter);

  template<typename _BIter, typename _OIter>
    _OIter
    reverse_copy(_BIter, _BIter, _OIter);

  template<typename _FIter>
    void
    rotate(_FIter, _FIter, _FIter);

  template<typename _FIter, typename _OIter>
    _OIter
    rotate_copy(_FIter, _FIter, _FIter, _OIter);
# 527 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _RAIter>
    void
    sort_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    sort_heap(_RAIter, _RAIter, _Compare);

  template<typename _BIter, typename _Predicate>
    _BIter
    stable_partition(_BIter, _BIter, _Predicate);

  template<typename _Tp>
    void
    swap(_Tp&, _Tp&);

  template<typename _Tp, size_t _Nm>
    void
    swap(_Tp (&)[_Nm], _Tp (&)[_Nm]);

  template<typename _FIter1, typename _FIter2>
    _FIter2
    swap_ranges(_FIter1, _FIter1, _FIter2);



  template<typename _FIter>
    _FIter
    unique(_FIter, _FIter);

  template<typename _FIter, typename _BinaryPredicate>
    _FIter
    unique(_FIter, _FIter, _BinaryPredicate);



  template<typename _FIter, typename _Tp>
    _FIter
    upper_bound(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    _FIter
    upper_bound(_FIter, _FIter, const _Tp&, _Compare);

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _FIter>
    _FIter
    adjacent_find(_FIter, _FIter);

  template<typename _FIter, typename _BinaryPredicate>
    _FIter
    adjacent_find(_FIter, _FIter, _BinaryPredicate);

  template<typename _IIter, typename _Tp>
    typename iterator_traits<_IIter>::difference_type
    count(_IIter, _IIter, const _Tp&);

  template<typename _IIter, typename _Predicate>
    typename iterator_traits<_IIter>::difference_type
    count_if(_IIter, _IIter, _Predicate);

  template<typename _IIter1, typename _IIter2>
    bool
    equal(_IIter1, _IIter1, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    bool
    equal(_IIter1, _IIter1, _IIter2, _BinaryPredicate);

  template<typename _IIter, typename _Tp>
    _IIter
    find(_IIter, _IIter, const _Tp&);

  template<typename _FIter1, typename _FIter2>
    _FIter1
    find_first_of(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1
    find_first_of(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);

  template<typename _IIter, typename _Predicate>
    _IIter
    find_if(_IIter, _IIter, _Predicate);

  template<typename _IIter, typename _Funct>
    _Funct
    for_each(_IIter, _IIter, _Funct);

  template<typename _FIter, typename _Generator>
    void
    generate(_FIter, _FIter, _Generator);
# 630 "/usr/include/c++/4.4/bits/algorithmfwd.h" 3
  template<typename _OIter, typename _Size, typename _Generator>
    _OIter
    generate_n(_OIter, _Size, _Generator);

  template<typename _IIter1, typename _IIter2>
    bool
    lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _Compare>
    bool
    lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2, _Compare);

  template<typename _FIter>
    _FIter
    max_element(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    _FIter
    max_element(_FIter, _FIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _Compare>
    _OIter
    merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _FIter>
    _FIter
    min_element(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    _FIter
    min_element(_FIter, _FIter, _Compare);

  template<typename _IIter1, typename _IIter2>
    pair<_IIter1, _IIter2>
    mismatch(_IIter1, _IIter1, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    pair<_IIter1, _IIter2>
    mismatch(_IIter1, _IIter1, _IIter2, _BinaryPredicate);

  template<typename _RAIter>
    void
    nth_element(_RAIter, _RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    nth_element(_RAIter, _RAIter, _RAIter, _Compare);

  template<typename _RAIter>
    void
    partial_sort(_RAIter, _RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    partial_sort(_RAIter, _RAIter, _RAIter, _Compare);

  template<typename _BIter, typename _Predicate>
    _BIter
    partition(_BIter, _BIter, _Predicate);

  template<typename _RAIter>
    void
    random_shuffle(_RAIter, _RAIter);

  template<typename _RAIter, typename _Generator>
    void
    random_shuffle(_RAIter, _RAIter, _Generator&);

  template<typename _FIter, typename _Tp>
    void
    replace(_FIter, _FIter, const _Tp&, const _Tp&);

  template<typename _FIter, typename _Predicate, typename _Tp>
    void
    replace_if(_FIter, _FIter, _Predicate, const _Tp&);

  template<typename _FIter1, typename _FIter2>
    _FIter1
    search(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1
    search(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);

  template<typename _FIter, typename _Size, typename _Tp>
    _FIter
    search_n(_FIter, _FIter, _Size, const _Tp&);

  template<typename _FIter, typename _Size, typename _Tp,
    typename _BinaryPredicate>
    _FIter
    search_n(_FIter, _FIter, _Size, const _Tp&, _BinaryPredicate);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _Compare>
    _OIter
    set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _Compare>
    _OIter
    set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _Compare>
    _OIter
    set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2,
        _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _Compare>
    _OIter
    set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _RAIter>
    void
    sort(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    sort(_RAIter, _RAIter, _Compare);

  template<typename _RAIter>
    void
    stable_sort(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void
    stable_sort(_RAIter, _RAIter, _Compare);

  template<typename _IIter, typename _OIter, typename _UnaryOperation>
    _OIter
    transform(_IIter, _IIter, _OIter, _UnaryOperation);

  template<typename _IIter1, typename _IIter2, typename _OIter,
    typename _BinaryOperation>
    _OIter
    transform(_IIter1, _IIter1, _IIter2, _OIter, _BinaryOperation);

  template<typename _IIter, typename _OIter>
    _OIter
    unique_copy(_IIter, _IIter, _OIter);

  template<typename _IIter, typename _OIter, typename _BinaryPredicate>
    _OIter
    unique_copy(_IIter, _IIter, _OIter, _BinaryPredicate);

}
# 62 "/usr/include/c++/4.4/bits/stl_algo.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_heap.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_heap.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {






  template<typename _RandomAccessIterator, typename _Distance>
    _Distance
    __is_heap_until(_RandomAccessIterator __first, _Distance __n)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
 {
   if (__first[__parent] < __first[__child])
     return __child;
   if ((__child & 1) == 0)
     ++__parent;
 }
      return __n;
    }

  template<typename _RandomAccessIterator, typename _Distance,
    typename _Compare>
    _Distance
    __is_heap_until(_RandomAccessIterator __first, _Distance __n,
      _Compare __comp)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
 {
   if (__comp(__first[__parent], __first[__child]))
     return __child;
   if ((__child & 1) == 0)
     ++__parent;
 }
      return __n;
    }



  template<typename _RandomAccessIterator, typename _Distance>
    inline bool
    __is_heap(_RandomAccessIterator __first, _Distance __n)
    { return std::__is_heap_until(__first, __n) == __n; }

  template<typename _RandomAccessIterator, typename _Compare,
    typename _Distance>
    inline bool
    __is_heap(_RandomAccessIterator __first, _Compare __comp, _Distance __n)
    { return std::__is_heap_until(__first, __n, __comp) == __n; }

  template<typename _RandomAccessIterator>
    inline bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    { return std::__is_heap(__first, std::distance(__first, __last)); }

  template<typename _RandomAccessIterator, typename _Compare>
    inline bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    { return std::__is_heap(__first, __comp, std::distance(__first, __last)); }




  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __push_heap(_RandomAccessIterator __first,
  _Distance __holeIndex, _Distance __topIndex, _Tp __value)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex && *(__first + __parent) < __value)
 {
   *(__first + __holeIndex) = (*(__first + __parent));
   __holeIndex = __parent;
   __parent = (__holeIndex - 1) / 2;
 }
      *(__first + __holeIndex) = (__value);
    }
# 152 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

     
      ;
      ;

      _ValueType __value = (*(__last - 1));
      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
         _DistanceType(0), (__value));
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp,
    typename _Compare>
    void
    __push_heap(_RandomAccessIterator __first, _Distance __holeIndex,
  _Distance __topIndex, _Tp __value, _Compare __comp)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex
      && __comp(*(__first + __parent), __value))
 {
   *(__first + __holeIndex) = (*(__first + __parent));
   __holeIndex = __parent;
   __parent = (__holeIndex - 1) / 2;
 }
      *(__first + __holeIndex) = (__value);
    }
# 201 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

      ;
      ;

      _ValueType __value = (*(__last - 1));
      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
         _DistanceType(0), (__value), __comp);
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
    _Distance __len, _Tp __value)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = __holeIndex;
      while (__secondChild < (__len - 1) / 2)
 {
   __secondChild = 2 * (__secondChild + 1);
   if (*(__first + __secondChild) < *(__first + (__secondChild - 1)))
     __secondChild--;
   *(__first + __holeIndex) = (*(__first + __secondChild));
   __holeIndex = __secondChild;
 }
      if ((__len & 1) == 0 && __secondChild == (__len - 2) / 2)
 {
   __secondChild = 2 * (__secondChild + 1);
   *(__first + __holeIndex) = (*(__first + (__secondChild - 1)));

   __holeIndex = __secondChild - 1;
 }
      std::__push_heap(__first, __holeIndex, __topIndex,
         (__value));
    }

  template<typename _RandomAccessIterator>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
        _RandomAccessIterator __result)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;

      _ValueType __value = (*__result);
      *__result = (*__first);
      std::__adjust_heap(__first, _DistanceType(0),
    _DistanceType(__last - __first),
    (__value));
    }
# 274 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator>
    inline void
    pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      --__last;
      std::__pop_heap(__first, __last, __last);
    }

  template<typename _RandomAccessIterator, typename _Distance,
    typename _Tp, typename _Compare>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
    _Distance __len, _Tp __value, _Compare __comp)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = __holeIndex;
      while (__secondChild < (__len - 1) / 2)
 {
   __secondChild = 2 * (__secondChild + 1);
   if (__comp(*(__first + __secondChild),
       *(__first + (__secondChild - 1))))
     __secondChild--;
   *(__first + __holeIndex) = (*(__first + __secondChild));
   __holeIndex = __secondChild;
 }
      if ((__len & 1) == 0 && __secondChild == (__len - 2) / 2)
 {
   __secondChild = 2 * (__secondChild + 1);
   *(__first + __holeIndex) = (*(__first + (__secondChild - 1)));

   __holeIndex = __secondChild - 1;
 }
      std::__push_heap(__first, __holeIndex, __topIndex,
         (__value), __comp);
    }

  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
        _RandomAccessIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;

      _ValueType __value = (*__result);
      *__result = (*__first);
      std::__adjust_heap(__first, _DistanceType(0),
    _DistanceType(__last - __first),
    (__value), __comp);
    }
# 348 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    pop_heap(_RandomAccessIterator __first,
      _RandomAccessIterator __last, _Compare __comp)
    {

     

      ;
      ;

      --__last;
      std::__pop_heap(__first, __last, __last, __comp);
    }
# 371 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator>
    void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

     
      ;

      if (__last - __first < 2)
 return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
 {
   _ValueType __value = (*(__first + __parent));
   std::__adjust_heap(__first, __parent, __len, (__value));
   if (__parent == 0)
     return;
   __parent--;
 }
    }
# 411 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

      ;

      if (__last - __first < 2)
 return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
 {
   _ValueType __value = (*(__first + __parent));
   std::__adjust_heap(__first, __parent, __len, (__value),
        __comp);
   if (__parent == 0)
     return;
   __parent--;
 }
    }
# 450 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {

     

     

      ;
      ;

      while (__last - __first > 1)
 {
   --__last;
   std::__pop_heap(__first, __last, __last);
 }
    }
# 479 "/usr/include/c++/4.4/bits/stl_heap.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {

     

      ;
      ;

      while (__last - __first > 1)
 {
   --__last;
   std::__pop_heap(__first, __last, __last, __comp);
 }
    }
# 576 "/usr/include/c++/4.4/bits/stl_heap.h" 3
}
# 63 "/usr/include/c++/4.4/bits/stl_algo.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 1 3
# 61 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
# 1 "/usr/include/c++/4.4/bits/stl_construct.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {





  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, const _T2& __value)
    {


      ::new(static_cast<void*>(__p)) _T1(__value);
    }




  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }

  template<bool>
    struct _Destroy_aux
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator __first, _ForwardIterator __last)
 {
   for (; __first != __last; ++__first)
     std::_Destroy(&*__first);
 }
    };

  template<>
    struct _Destroy_aux<true>
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator, _ForwardIterator) { }
    };






  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;
      std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
 __destroy(__first, __last);
    }







  template <typename _Tp> class allocator;

  template<typename _ForwardIterator, typename _Allocator>
    void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      _Allocator& __alloc)
    {
      for (; __first != __last; ++__first)
 __alloc.destroy(&*__first);
    }

  template<typename _ForwardIterator, typename _Tp>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      allocator<_Tp>&)
    {
      _Destroy(__first, __last);
    }

}
# 62 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<bool>
    struct __uninitialized_copy
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result)
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++__first, ++__cur)
  ::new(static_cast<void*>(&*__cur)) typename
      iterator_traits<_ForwardIterator>::value_type(*__first);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__result, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_copy<true>
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result)
        { return std::copy(__first, __last, __result); }
    };
# 105 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
         _ForwardIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType2;

      return std::__uninitialized_copy<(__is_pod(_ValueType1)
     && __is_pod(_ValueType2))>::
 uninitialized_copy(__first, __last, __result);
    }


  template<bool>
    struct __uninitialized_fill
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
      _ForwardIterator __last, const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++__cur)
  std::_Construct(&*__cur, __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill<true>
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
      _ForwardIterator __last, const _Tp& __x)
        { std::fill(__first, __last, __x); }
    };
# 162 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
         const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      std::__uninitialized_fill<__is_pod(_ValueType)>::
 uninitialized_fill(__first, __last, __x);
    }


  template<bool>
    struct __uninitialized_fill_n
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
        const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; --__n, ++__cur)
  std::_Construct(&*__cur, __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill_n<true>
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
        const _Tp& __x)
        { std::fill_n(__first, __n, __x); }
    };
# 216 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline void
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      std::__uninitialized_fill_n<__is_pod(_ValueType)>::
 uninitialized_fill_n(__first, __n, __x);
    }







  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __result;
      try
 {
   for (; __first != __last; ++__first, ++__cur)
     __alloc.construct(&*__cur, *__first);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__result, __cur, __alloc);
   throw;
 }
    }

  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator<_Tp>&)
    { return std::uninitialized_copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a((__first),
      (__last),
      __result, __alloc);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Allocator>
    void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __cur != __last; ++__cur)
     __alloc.construct(&*__cur, __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Tp, typename _Tp2>
    inline void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator>
    void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __n > 0; --__n, ++__cur)
     __alloc.construct(&*__cur, __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2>
    inline void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill_n(__first, __n, __x); }
# 330 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_copy_move(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_copy_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_move_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }





  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_copy(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_move_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_copy_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_fill_move(_ForwardIterator __result, _ForwardIterator __mid,
         const _Tp& __x, _InputIterator __first,
         _InputIterator __last, _Allocator& __alloc)
    {
      std::__uninitialized_fill_a(__result, __mid, __x, __alloc);
      try
 {
   return std::__uninitialized_move_a(__first, __last, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator>
    inline void
    __uninitialized_move_fill(_InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp& __x,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid2 = std::__uninitialized_move_a(__first1, __last1,
           __first2,
           __alloc);
      try
 {
   std::__uninitialized_fill_a(__mid2, __last2, __x, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__first2, __mid2, __alloc);
   throw;
 }
    }
# 476 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
}
# 63 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 83 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
  template<typename _Tp>
    pair<_Tp*, ptrdiff_t>
    get_temporary_buffer(ptrdiff_t __len)
    {
      const ptrdiff_t __max =
 __gnu_cxx::__numeric_traits<ptrdiff_t>::__max / sizeof(_Tp);
      if (__len > __max)
 __len = __max;

      while (__len > 0)
 {
   _Tp* __tmp = static_cast<_Tp*>(::operator new(__len * sizeof(_Tp),
       std::nothrow));
   if (__tmp != 0)
     return std::pair<_Tp*, ptrdiff_t>(__tmp, __len);
   __len /= 2;
 }
      return std::pair<_Tp*, ptrdiff_t>(static_cast<_Tp*>(0), 0);
    }
# 110 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
  template<typename _Tp>
    inline void
    return_temporary_buffer(_Tp* __p)
    { ::operator delete(__p, std::nothrow); }







  template<typename _ForwardIterator, typename _Tp>
    class _Temporary_buffer
    {

     

    public:
      typedef _Tp value_type;
      typedef value_type* pointer;
      typedef pointer iterator;
      typedef ptrdiff_t size_type;

    protected:
      size_type _M_original_len;
      size_type _M_len;
      pointer _M_buffer;

    public:

      size_type
      size() const
      { return _M_len; }


      size_type
      requested_size() const
      { return _M_original_len; }


      iterator
      begin()
      { return _M_buffer; }


      iterator
      end()
      { return _M_buffer + _M_len; }





      _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last);

      ~_Temporary_buffer()
      {
 std::_Destroy(_M_buffer, _M_buffer + _M_len);
 std::return_temporary_buffer(_M_buffer);
      }

    private:

      _Temporary_buffer(const _Temporary_buffer&);

      void
      operator=(const _Temporary_buffer&);
    };

  template<typename _ForwardIterator, typename _Tp>
    _Temporary_buffer<_ForwardIterator, _Tp>::
    _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last)
    : _M_original_len(std::distance(__first, __last)),
      _M_len(0), _M_buffer(0)
    {
      try
 {
   std::pair<pointer, size_type> __p(std::get_temporary_buffer<
         value_type>(_M_original_len));
   _M_buffer = __p.first;
   _M_len = __p.second;
   if (!__is_pod(_Tp) && _M_len > 0)
     std::uninitialized_fill_n(_M_buffer, _M_len, *__first);
 }
      catch(...)
 {
   std::return_temporary_buffer(_M_buffer);
   _M_buffer = 0;
   _M_len = 0;
   throw;
 }
    }

}
# 64 "/usr/include/c++/4.4/bits/stl_algo.h" 2 3





namespace std __attribute__ ((__visibility__ ("default"))) {
# 83 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _Tp>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c)
    {

     
      if (__a < __b)
 if (__b < __c)
   return __b;
 else if (__a < __c)
   return __c;
 else
   return __a;
      else if (__a < __c)
 return __a;
      else if (__b < __c)
 return __c;
      else
 return __b;
    }
# 117 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c, _Compare __comp)
    {

     

      if (__comp(__a, __b))
 if (__comp(__b, __c))
   return __b;
 else if (__comp(__a, __c))
   return __c;
 else
   return __a;
      else if (__comp(__a, __c))
 return __a;
      else if (__comp(__b, __c))
 return __c;
      else
 return __b;
    }




  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    __find(_InputIterator __first, _InputIterator __last,
    const _Tp& __val, input_iterator_tag)
    {
      while (__first != __last && !(*__first == __val))
 ++__first;
      return __first;
    }


  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    __find_if(_InputIterator __first, _InputIterator __last,
       _Predicate __pred, input_iterator_tag)
    {
      while (__first != __last && !bool(__pred(*__first)))
 ++__first;
      return __first;
    }


  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    __find(_RandomAccessIterator __first, _RandomAccessIterator __last,
    const _Tp& __val, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
 __trip_count = (__last - __first) >> 2;

      for (; __trip_count > 0; --__trip_count)
 {
   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;
 }

      switch (__last - __first)
 {
 case 3:
   if (*__first == __val)
     return __first;
   ++__first;
 case 2:
   if (*__first == __val)
     return __first;
   ++__first;
 case 1:
   if (*__first == __val)
     return __first;
   ++__first;
 case 0:
 default:
   return __last;
 }
    }


  template<typename _RandomAccessIterator, typename _Predicate>
    _RandomAccessIterator
    __find_if(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Predicate __pred, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
 __trip_count = (__last - __first) >> 2;

      for (; __trip_count > 0; --__trip_count)
 {
   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;
 }

      switch (__last - __first)
 {
 case 3:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 2:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 1:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 0:
 default:
   return __last;
 }
    }
# 338 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Integer, typename _Tp>
    _ForwardIterator
    __search_n(_ForwardIterator __first, _ForwardIterator __last,
        _Integer __count, const _Tp& __val,
        std::forward_iterator_tag)
    {
      __first = std::find(__first, __last, __val);
      while (__first != __last)
 {
   typename iterator_traits<_ForwardIterator>::difference_type
     __n = __count;
   _ForwardIterator __i = __first;
   ++__i;
   while (__i != __last && __n != 1 && *__i == __val)
     {
       ++__i;
       --__n;
     }
   if (__n == 1)
     return __first;
   if (__i == __last)
     return __last;
   __first = std::find(++__i, __last, __val);
 }
      return __last;
    }






  template<typename _RandomAccessIter, typename _Integer, typename _Tp>
    _RandomAccessIter
    __search_n(_RandomAccessIter __first, _RandomAccessIter __last,
        _Integer __count, const _Tp& __val,
        std::random_access_iterator_tag)
    {

      typedef typename std::iterator_traits<_RandomAccessIter>::difference_type
 _DistanceType;

      _DistanceType __tailSize = __last - __first;
      const _DistanceType __pattSize = __count;

      if (__tailSize < __pattSize)
        return __last;

      const _DistanceType __skipOffset = __pattSize - 1;
      _RandomAccessIter __lookAhead = __first + __skipOffset;
      __tailSize -= __pattSize;

      while (1)
 {


   while (!(*__lookAhead == __val))
     {
       if (__tailSize < __pattSize)
  return __last;
       __lookAhead += __pattSize;
       __tailSize -= __pattSize;
     }
   _DistanceType __remainder = __skipOffset;
   for (_RandomAccessIter __backTrack = __lookAhead - 1;
        *__backTrack == __val; --__backTrack)
     {
       if (--__remainder == 0)
  return (__lookAhead - __skipOffset);
     }
   if (__remainder > __tailSize)
     return __last;
   __lookAhead += __remainder;
   __tailSize -= __remainder;
 }
    }
# 423 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Integer, typename _Tp,
           typename _BinaryPredicate>
    _ForwardIterator
    __search_n(_ForwardIterator __first, _ForwardIterator __last,
        _Integer __count, const _Tp& __val,
        _BinaryPredicate __binary_pred, std::forward_iterator_tag)
    {
      while (__first != __last && !bool(__binary_pred(*__first, __val)))
        ++__first;

      while (__first != __last)
 {
   typename iterator_traits<_ForwardIterator>::difference_type
     __n = __count;
   _ForwardIterator __i = __first;
   ++__i;
   while (__i != __last && __n != 1 && bool(__binary_pred(*__i, __val)))
     {
       ++__i;
       --__n;
     }
   if (__n == 1)
     return __first;
   if (__i == __last)
     return __last;
   __first = ++__i;
   while (__first != __last
   && !bool(__binary_pred(*__first, __val)))
     ++__first;
 }
      return __last;
    }







  template<typename _RandomAccessIter, typename _Integer, typename _Tp,
    typename _BinaryPredicate>
    _RandomAccessIter
    __search_n(_RandomAccessIter __first, _RandomAccessIter __last,
        _Integer __count, const _Tp& __val,
        _BinaryPredicate __binary_pred, std::random_access_iterator_tag)
    {

      typedef typename std::iterator_traits<_RandomAccessIter>::difference_type
 _DistanceType;

      _DistanceType __tailSize = __last - __first;
      const _DistanceType __pattSize = __count;

      if (__tailSize < __pattSize)
        return __last;

      const _DistanceType __skipOffset = __pattSize - 1;
      _RandomAccessIter __lookAhead = __first + __skipOffset;
      __tailSize -= __pattSize;

      while (1)
 {


   while (!bool(__binary_pred(*__lookAhead, __val)))
     {
       if (__tailSize < __pattSize)
  return __last;
       __lookAhead += __pattSize;
       __tailSize -= __pattSize;
     }
   _DistanceType __remainder = __skipOffset;
   for (_RandomAccessIter __backTrack = __lookAhead - 1;
        __binary_pred(*__backTrack, __val); --__backTrack)
     {
       if (--__remainder == 0)
  return (__lookAhead - __skipOffset);
     }
   if (__remainder > __tailSize)
     return __last;
   __lookAhead += __remainder;
   __tailSize -= __remainder;
 }
    }


  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
        _ForwardIterator2 __first2, _ForwardIterator2 __last2,
        forward_iterator_tag, forward_iterator_tag)
    {
      if (__first2 == __last2)
 return __last1;
      else
 {
   _ForwardIterator1 __result = __last1;
   while (1)
     {
       _ForwardIterator1 __new_result
  = std::search(__first1, __last1, __first2, __last2);
       if (__new_result == __last1)
  return __result;
       else
  {
    __result = __new_result;
    __first1 = __new_result;
    ++__first1;
  }
     }
 }
    }

  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
        _ForwardIterator2 __first2, _ForwardIterator2 __last2,
        forward_iterator_tag, forward_iterator_tag,
        _BinaryPredicate __comp)
    {
      if (__first2 == __last2)
 return __last1;
      else
 {
   _ForwardIterator1 __result = __last1;
   while (1)
     {
       _ForwardIterator1 __new_result
  = std::search(__first1, __last1, __first2,
      __last2, __comp);
       if (__new_result == __last1)
  return __result;
       else
  {
    __result = __new_result;
    __first1 = __new_result;
    ++__first1;
  }
     }
 }
    }


  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
        _BidirectionalIterator1 __last1,
        _BidirectionalIterator2 __first2,
        _BidirectionalIterator2 __last2,
        bidirectional_iterator_tag, bidirectional_iterator_tag)
    {

     

     


      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1),
             __rlast1,
             _RevIterator2(__last2),
             __rlast2);

      if (__rresult == __rlast1)
 return __last1;
      else
 {
   _BidirectionalIterator1 __result = __rresult.base();
   std::advance(__result, -std::distance(__first2, __last2));
   return __result;
 }
    }

  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BinaryPredicate>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
        _BidirectionalIterator1 __last1,
        _BidirectionalIterator2 __first2,
        _BidirectionalIterator2 __last2,
        bidirectional_iterator_tag, bidirectional_iterator_tag,
        _BinaryPredicate __comp)
    {

     

     


      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1), __rlast1,
         _RevIterator2(__last2), __rlast2,
         __comp);

      if (__rresult == __rlast1)
 return __last1;
      else
 {
   _BidirectionalIterator1 __result = __rresult.base();
   std::advance(__result, -std::distance(__first2, __last2));
   return __result;
 }
    }
# 661 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
      _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {

     
     
     


      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
        std::__iterator_category(__first1),
        std::__iterator_category(__first2));
    }
# 707 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
      _ForwardIterator2 __first2, _ForwardIterator2 __last2,
      _BinaryPredicate __comp)
    {

     
     
     


      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
        std::__iterator_category(__first1),
        std::__iterator_category(__first2),
        __comp);
    }
# 886 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    remove_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result, const _Tp& __value)
    {

     
     

     

      ;

      for (; __first != __last; ++__first)
 if (!(*__first == __value))
   {
     *__result = *__first;
     ++__result;
   }
      return __result;
    }
# 923 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator,
    typename _Predicate>
    _OutputIterator
    remove_copy_if(_InputIterator __first, _InputIterator __last,
     _OutputIterator __result, _Predicate __pred)
    {

     
     

     

      ;

      for (; __first != __last; ++__first)
 if (!bool(__pred(*__first)))
   {
     *__result = *__first;
     ++__result;
   }
      return __result;
    }
# 1098 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    remove(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __value)
    {

     

     

      ;

      __first = std::find(__first, __last, __value);
      if(__first == __last)
        return __first;
      _ForwardIterator __result = __first;
      ++__first;
      for(; __first != __last; ++__first)
        if(!(*__first == __value))
          {
            *__result = (*__first);
            ++__result;
          }
      return __result;
    }
# 1141 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    remove_if(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      __first = std::find_if(__first, __last, __pred);
      if(__first == __last)
        return __first;
      _ForwardIterator __result = __first;
      ++__first;
      for(; __first != __last; ++__first)
        if(!bool(__pred(*__first)))
          {
            *__result = (*__first);
            ++__result;
          }
      return __result;
    }
# 1181 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last)
    {

     

     

      ;


      __first = std::adjacent_find(__first, __last);
      if (__first == __last)
 return __last;


      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
 if (!(*__dest == *__first))
   *++__dest = (*__first);
      return ++__dest;
    }
# 1221 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last,
           _BinaryPredicate __binary_pred)
    {

     

     


      ;


      __first = std::adjacent_find(__first, __last, __binary_pred);
      if (__first == __last)
 return __last;


      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
 if (!bool(__binary_pred(*__dest, *__first)))
   *++__dest = (*__first);
      return ++__dest;
    }






  template<typename _ForwardIterator, typename _OutputIterator>
    _OutputIterator
    __unique_copy(_ForwardIterator __first, _ForwardIterator __last,
    _OutputIterator __result,
    forward_iterator_tag, output_iterator_tag)
    {

      _ForwardIterator __next = __first;
      *__result = *__first;
      while (++__next != __last)
 if (!(*__first == *__next))
   {
     __first = __next;
     *++__result = *__first;
   }
      return ++__result;
    }






  template<typename _InputIterator, typename _OutputIterator>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _OutputIterator __result,
    input_iterator_tag, output_iterator_tag)
    {

      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
 if (!(__value == *__first))
   {
     __value = *__first;
     *++__result = __value;
   }
      return ++__result;
    }






  template<typename _InputIterator, typename _ForwardIterator>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _ForwardIterator __result,
    input_iterator_tag, forward_iterator_tag)
    {

      *__result = *__first;
      while (++__first != __last)
 if (!(*__result == *__first))
   *++__result = *__first;
      return ++__result;
    }







  template<typename _ForwardIterator, typename _OutputIterator,
    typename _BinaryPredicate>
    _OutputIterator
    __unique_copy(_ForwardIterator __first, _ForwardIterator __last,
    _OutputIterator __result, _BinaryPredicate __binary_pred,
    forward_iterator_tag, output_iterator_tag)
    {

     



      _ForwardIterator __next = __first;
      *__result = *__first;
      while (++__next != __last)
 if (!bool(__binary_pred(*__first, *__next)))
   {
     __first = __next;
     *++__result = *__first;
   }
      return ++__result;
    }







  template<typename _InputIterator, typename _OutputIterator,
    typename _BinaryPredicate>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _OutputIterator __result, _BinaryPredicate __binary_pred,
    input_iterator_tag, output_iterator_tag)
    {

     



      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
 if (!bool(__binary_pred(__value, *__first)))
   {
     __value = *__first;
     *++__result = __value;
   }
      return ++__result;
    }







  template<typename _InputIterator, typename _ForwardIterator,
    typename _BinaryPredicate>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _ForwardIterator __result, _BinaryPredicate __binary_pred,
    input_iterator_tag, forward_iterator_tag)
    {

     



      *__result = *__first;
      while (++__first != __last)
 if (!bool(__binary_pred(*__result, *__first)))
   *++__result = *__first;
      return ++__result;
    }






  template<typename _BidirectionalIterator>
    void
    __reverse(_BidirectionalIterator __first, _BidirectionalIterator __last,
       bidirectional_iterator_tag)
    {
      while (true)
 if (__first == __last || __first == --__last)
   return;
 else
   {
     std::iter_swap(__first, __last);
     ++__first;
   }
    }






  template<typename _RandomAccessIterator>
    void
    __reverse(_RandomAccessIterator __first, _RandomAccessIterator __last,
       random_access_iterator_tag)
    {
      if (__first == __last)
 return;
      --__last;
      while (__first < __last)
 {
   std::iter_swap(__first, __last);
   ++__first;
   --__last;
 }
    }
# 1449 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator>
    inline void
    reverse(_BidirectionalIterator __first, _BidirectionalIterator __last)
    {

     

      ;
      std::__reverse(__first, __last, std::__iterator_category(__first));
    }
# 1476 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator, typename _OutputIterator>
    _OutputIterator
    reverse_copy(_BidirectionalIterator __first, _BidirectionalIterator __last,
   _OutputIterator __result)
    {

     

     

      ;

      while (__first != __last)
 {
   --__last;
   *__result = *__last;
   ++__result;
 }
      return __result;
    }





  template<typename _EuclideanRingElement>
    _EuclideanRingElement
    __gcd(_EuclideanRingElement __m, _EuclideanRingElement __n)
    {
      while (__n != 0)
 {
   _EuclideanRingElement __t = __m % __n;
   __m = __n;
   __n = __t;
 }
      return __m;
    }


  template<typename _ForwardIterator>
    void
    __rotate(_ForwardIterator __first,
      _ForwardIterator __middle,
      _ForwardIterator __last,
      forward_iterator_tag)
    {
      if (__first == __middle || __last == __middle)
 return;

      _ForwardIterator __first2 = __middle;
      do
 {
   std::iter_swap(__first, __first2);
   ++__first;
   ++__first2;
   if (__first == __middle)
     __middle = __first2;
 }
      while (__first2 != __last);

      __first2 = __middle;

      while (__first2 != __last)
 {
   std::iter_swap(__first, __first2);
   ++__first;
   ++__first2;
   if (__first == __middle)
     __middle = __first2;
   else if (__first2 == __last)
     __first2 = __middle;
 }
    }


  template<typename _BidirectionalIterator>
    void
    __rotate(_BidirectionalIterator __first,
      _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
       bidirectional_iterator_tag)
    {

     


      if (__first == __middle || __last == __middle)
 return;

      std::__reverse(__first, __middle, bidirectional_iterator_tag());
      std::__reverse(__middle, __last, bidirectional_iterator_tag());

      while (__first != __middle && __middle != __last)
 {
   std::iter_swap(__first, --__last);
   ++__first;
 }

      if (__first == __middle)
 std::__reverse(__middle, __last, bidirectional_iterator_tag());
      else
 std::__reverse(__first, __middle, bidirectional_iterator_tag());
    }


  template<typename _RandomAccessIterator>
    void
    __rotate(_RandomAccessIterator __first,
      _RandomAccessIterator __middle,
      _RandomAccessIterator __last,
      random_access_iterator_tag)
    {

     


      if (__first == __middle || __last == __middle)
 return;

      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      const _Distance __n = __last - __first;
      const _Distance __k = __middle - __first;
      const _Distance __l = __n - __k;

      if (__k == __l)
 {
   std::swap_ranges(__first, __middle, __middle);
   return;
 }

      const _Distance __d = std::__gcd(__n, __k);

      for (_Distance __i = 0; __i < __d; __i++)
 {
   _ValueType __tmp = (*__first);
   _RandomAccessIterator __p = __first;

   if (__k < __l)
     {
       for (_Distance __j = 0; __j < __l / __d; __j++)
  {
    if (__p > __first + __l)
      {
        *__p = (*(__p - __l));
        __p -= __l;
      }

    *__p = (*(__p + __k));
    __p += __k;
  }
     }
   else
     {
       for (_Distance __j = 0; __j < __k / __d - 1; __j ++)
  {
    if (__p < __last - __k)
      {
        *__p = (*(__p + __k));
        __p += __k;
      }
    *__p = (*(__p - __l));
    __p -= __l;
  }
     }

   *__p = (__tmp);
   ++__first;
 }
    }
# 1669 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator>
    inline void
    rotate(_ForwardIterator __first, _ForwardIterator __middle,
    _ForwardIterator __last)
    {

     

      ;
      ;

      typedef typename iterator_traits<_ForwardIterator>::iterator_category
 _IterType;
      std::__rotate(__first, __middle, __last, _IterType());
    }
# 1703 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _OutputIterator>
    _OutputIterator
    rotate_copy(_ForwardIterator __first, _ForwardIterator __middle,
                _ForwardIterator __last, _OutputIterator __result)
    {

     
     

      ;
      ;

      return std::copy(__first, __middle,
                       std::copy(__middle, __last, __result));
    }


  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    __partition(_ForwardIterator __first, _ForwardIterator __last,
  _Predicate __pred, forward_iterator_tag)
    {
      if (__first == __last)
 return __first;

      while (__pred(*__first))
 if (++__first == __last)
   return __first;

      _ForwardIterator __next = __first;

      while (++__next != __last)
 if (__pred(*__next))
   {
     std::iter_swap(__first, __next);
     ++__first;
   }

      return __first;
    }


  template<typename _BidirectionalIterator, typename _Predicate>
    _BidirectionalIterator
    __partition(_BidirectionalIterator __first, _BidirectionalIterator __last,
  _Predicate __pred, bidirectional_iterator_tag)
    {
      while (true)
 {
   while (true)
     if (__first == __last)
       return __first;
     else if (__pred(*__first))
       ++__first;
     else
       break;
   --__last;
   while (true)
     if (__first == __last)
       return __first;
     else if (!bool(__pred(*__last)))
       --__last;
     else
       break;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }




  template<typename _ForwardIterator, typename _Predicate, typename _Distance>
    _ForwardIterator
    __inplace_stable_partition(_ForwardIterator __first,
          _ForwardIterator __last,
          _Predicate __pred, _Distance __len)
    {
      if (__len == 1)
 return __pred(*__first) ? __last : __first;
      _ForwardIterator __middle = __first;
      std::advance(__middle, __len / 2);
      _ForwardIterator __begin = std::__inplace_stable_partition(__first,
         __middle,
         __pred,
         __len / 2);
      _ForwardIterator __end = std::__inplace_stable_partition(__middle, __last,
              __pred,
              __len
              - __len / 2);
      std::rotate(__begin, __middle, __end);
      std::advance(__begin, std::distance(__middle, __end));
      return __begin;
    }


  template<typename _ForwardIterator, typename _Pointer, typename _Predicate,
    typename _Distance>
    _ForwardIterator
    __stable_partition_adaptive(_ForwardIterator __first,
    _ForwardIterator __last,
    _Predicate __pred, _Distance __len,
    _Pointer __buffer,
    _Distance __buffer_size)
    {
      if (__len <= __buffer_size)
 {
   _ForwardIterator __result1 = __first;
   _Pointer __result2 = __buffer;
   for (; __first != __last; ++__first)
     if (__pred(*__first))
       {
  *__result1 = *__first;
  ++__result1;
       }
     else
       {
  *__result2 = *__first;
  ++__result2;
       }
   std::copy(__buffer, __result2, __result1);
   return __result1;
 }
      else
 {
   _ForwardIterator __middle = __first;
   std::advance(__middle, __len / 2);
   _ForwardIterator __begin =
     std::__stable_partition_adaptive(__first, __middle, __pred,
          __len / 2, __buffer,
          __buffer_size);
   _ForwardIterator __end =
     std::__stable_partition_adaptive(__middle, __last, __pred,
          __len - __len / 2,
          __buffer, __buffer_size);
   std::rotate(__begin, __middle, __end);
   std::advance(__begin, std::distance(__middle, __end));
   return __begin;
 }
    }
# 1861 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    stable_partition(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      if (__first == __last)
 return __first;
      else
 {
   typedef typename iterator_traits<_ForwardIterator>::value_type
     _ValueType;
   typedef typename iterator_traits<_ForwardIterator>::difference_type
     _DistanceType;

   _Temporary_buffer<_ForwardIterator, _ValueType> __buf(__first,
        __last);
 if (__buf.size() > 0)
   return
     std::__stable_partition_adaptive(__first, __last, __pred,
       _DistanceType(__buf.requested_size()),
       __buf.begin(),
       _DistanceType(__buf.size()));
 else
   return
     std::__inplace_stable_partition(__first, __last, __pred,
      _DistanceType(__buf.requested_size()));
 }
    }


  template<typename _RandomAccessIterator>
    void
    __heap_select(_RandomAccessIterator __first,
    _RandomAccessIterator __middle,
    _RandomAccessIterator __last)
    {
      std::make_heap(__first, __middle);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
 if (*__i < *__first)
   std::__pop_heap(__first, __middle, __i);
    }


  template<typename _RandomAccessIterator, typename _Compare>
    void
    __heap_select(_RandomAccessIterator __first,
    _RandomAccessIterator __middle,
    _RandomAccessIterator __last, _Compare __comp)
    {
      std::make_heap(__first, __middle, __comp);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
 if (__comp(*__i, *__first))
   std::__pop_heap(__first, __middle, __i, __comp);
    }
# 1943 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _RandomAccessIterator>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
        _RandomAccessIterator __result_first,
        _RandomAccessIterator __result_last)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     
     

     

     
      ;
      ;

      if (__result_first == __result_last)
 return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
 {
   *__result_real_last = *__first;
   ++__result_real_last;
   ++__first;
 }
      std::make_heap(__result_first, __result_real_last);
      while (__first != __last)
 {
   if (*__first < *__result_first)
     std::__adjust_heap(__result_first, _DistanceType(0),
          _DistanceType(__result_real_last
          - __result_first),
          _InputValueType(*__first));
   ++__first;
 }
      std::sort_heap(__result_first, __result_real_last);
      return __result_real_last;
    }
# 2009 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _RandomAccessIterator, typename _Compare>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
        _RandomAccessIterator __result_first,
        _RandomAccessIterator __result_last,
        _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     
     

     

     

     

      ;
      ;

      if (__result_first == __result_last)
 return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
 {
   *__result_real_last = *__first;
   ++__result_real_last;
   ++__first;
 }
      std::make_heap(__result_first, __result_real_last, __comp);
      while (__first != __last)
 {
   if (__comp(*__first, *__result_first))
     std::__adjust_heap(__result_first, _DistanceType(0),
          _DistanceType(__result_real_last
          - __result_first),
          _InputValueType(*__first),
          __comp);
   ++__first;
 }
      std::sort_heap(__result_first, __result_real_last, __comp);
      return __result_real_last;
    }


  template<typename _RandomAccessIterator, typename _Tp>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__val < *__next)
 {
   *__last = *__next;
   __last = __next;
   --__next;
 }
      *__last = __val;
    }


  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val,
         _Compare __comp)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__comp(__val, *__next))
 {
   *__last = *__next;
   __last = __next;
   --__next;
 }
      *__last = __val;
    }


  template<typename _RandomAccessIterator>
    void
    __insertion_sort(_RandomAccessIterator __first,
       _RandomAccessIterator __last)
    {
      if (__first == __last)
 return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 {
   typename iterator_traits<_RandomAccessIterator>::value_type
     __val = *__i;
   if (__val < *__first)
     {
       std::copy_backward(__first, __i, __i + 1);
       *__first = __val;
     }
   else
     std::__unguarded_linear_insert(__i, __val);
 }
    }


  template<typename _RandomAccessIterator, typename _Compare>
    void
    __insertion_sort(_RandomAccessIterator __first,
       _RandomAccessIterator __last, _Compare __comp)
    {
      if (__first == __last) return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 {
   typename iterator_traits<_RandomAccessIterator>::value_type
     __val = *__i;
   if (__comp(__val, *__first))
     {
       std::copy_backward(__first, __i, __i + 1);
       *__first = __val;
     }
   else
     std::__unguarded_linear_insert(__i, __val, __comp);
 }
    }


  template<typename _RandomAccessIterator>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
          _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
 std::__unguarded_linear_insert(__i, _ValueType(*__i));
    }


  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
          _RandomAccessIterator __last, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
 std::__unguarded_linear_insert(__i, _ValueType(*__i), __comp);
    }





  enum { _S_threshold = 16 };


  template<typename _RandomAccessIterator>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last)
    {
      if (__last - __first > int(_S_threshold))
 {
   std::__insertion_sort(__first, __first + int(_S_threshold));
   std::__unguarded_insertion_sort(__first + int(_S_threshold), __last);
 }
      else
 std::__insertion_sort(__first, __last);
    }


  template<typename _RandomAccessIterator, typename _Compare>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first > int(_S_threshold))
 {
   std::__insertion_sort(__first, __first + int(_S_threshold), __comp);
   std::__unguarded_insertion_sort(__first + int(_S_threshold), __last,
       __comp);
 }
      else
 std::__insertion_sort(__first, __last, __comp);
    }


  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
     _RandomAccessIterator __last, _Tp __pivot)
    {
      while (true)
 {
   while (*__first < __pivot)
     ++__first;
   --__last;
   while (__pivot < *__last)
     --__last;
   if (!(__first < __last))
     return __first;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }


  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
     _RandomAccessIterator __last,
     _Tp __pivot, _Compare __comp)
    {
      while (true)
 {
   while (__comp(*__first, __pivot))
     ++__first;
   --__last;
   while (__comp(__pivot, *__last))
     --__last;
   if (!(__first < __last))
     return __first;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }


  template<typename _RandomAccessIterator, typename _Size>
    void
    __introsort_loop(_RandomAccessIterator __first,
       _RandomAccessIterator __last,
       _Size __depth_limit)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > int(_S_threshold))
 {
   if (__depth_limit == 0)
     {
       std::partial_sort(__first, __last, __last);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last
          - 1))));
   std::__introsort_loop(__cut, __last, __depth_limit);
   __last = __cut;
 }
    }


  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    void
    __introsort_loop(_RandomAccessIterator __first,
       _RandomAccessIterator __last,
       _Size __depth_limit, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > int(_S_threshold))
 {
   if (__depth_limit == 0)
     {
       std::partial_sort(__first, __last, __last, __comp);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last - 1),
        __comp)),
           __comp);
   std::__introsort_loop(__cut, __last, __depth_limit, __comp);
   __last = __cut;
 }
    }


  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }



  template<typename _RandomAccessIterator, typename _Size>
    void
    __introselect(_RandomAccessIterator __first, _RandomAccessIterator __nth,
    _RandomAccessIterator __last, _Size __depth_limit)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > 3)
 {
   if (__depth_limit == 0)
     {
       std::__heap_select(__first, __nth + 1, __last);


       std::iter_swap(__first, __nth);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last
          - 1))));
   if (__cut <= __nth)
     __first = __cut;
   else
     __last = __cut;
 }
      std::__insertion_sort(__first, __last);
    }

  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    void
    __introselect(_RandomAccessIterator __first, _RandomAccessIterator __nth,
    _RandomAccessIterator __last, _Size __depth_limit,
    _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > 3)
 {
   if (__depth_limit == 0)
     {
       std::__heap_select(__first, __nth + 1, __last, __comp);

       std::iter_swap(__first, __nth);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last - 1),
        __comp)),
           __comp);
   if (__cut <= __nth)
     __first = __cut;
   else
     __last = __cut;
 }
      std::__insertion_sort(__first, __last, __comp);
    }
# 2418 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 2469 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

      ;


      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(*__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 2518 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__val < *__middle)
     __len = __half;
   else
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
 }
      return __first;
    }
# 2569 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

      ;


      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__val, *__middle))
     __len = __half;
   else
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
 }
      return __first;
    }
# 2624 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     
     
      ;
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else if (__val < *__middle)
     __len = __half;
   else
     {
       __left = std::lower_bound(__first, __middle, __val);
       std::advance(__first, __len);
       __right = std::upper_bound(++__middle, __first, __val);
       return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
     }
 }
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }
# 2686 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val,
  _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

     

      ;

      ;


      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(*__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else if (__comp(__val, *__middle))
     __len = __half;
   else
     {
       __left = std::lower_bound(__first, __middle, __val, __comp);
       std::advance(__first, __len);
       __right = std::upper_bound(++__middle, __first, __val, __comp);
       return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
     }
 }
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }
# 2747 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;


     
     
      ;
      ;

      _ForwardIterator __i = std::lower_bound(__first, __last, __val);
      return __i != __last && !(__val < *__i);
    }
# 2780 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;


     
     

      ;

      ;


      _ForwardIterator __i = std::lower_bound(__first, __last, __val, __comp);
      return __i != __last && !bool(__comp(__val, *__i));
    }




  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BidirectionalIterator3>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
       _BidirectionalIterator1 __last1,
       _BidirectionalIterator2 __first2,
       _BidirectionalIterator2 __last2,
       _BidirectionalIterator3 __result)
    {
      if (__first1 == __last1)
 return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
 return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
 {
   if (*__last2 < *__last1)
     {
       *--__result = *__last1;
       if (__first1 == __last1)
  return std::copy_backward(__first2, ++__last2, __result);
       --__last1;
     }
   else
     {
       *--__result = *__last2;
       if (__first2 == __last2)
  return std::copy_backward(__first1, ++__last1, __result);
       --__last2;
     }
 }
    }


  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BidirectionalIterator3, typename _Compare>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
       _BidirectionalIterator1 __last1,
       _BidirectionalIterator2 __first2,
       _BidirectionalIterator2 __last2,
       _BidirectionalIterator3 __result,
       _Compare __comp)
    {
      if (__first1 == __last1)
 return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
 return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
 {
   if (__comp(*__last2, *__last1))
     {
       *--__result = *__last1;
       if (__first1 == __last1)
  return std::copy_backward(__first2, ++__last2, __result);
       --__last1;
     }
   else
     {
       *--__result = *__last2;
       if (__first2 == __last2)
  return std::copy_backward(__first1, ++__last1, __result);
       --__last2;
     }
 }
    }


  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _Distance>
    _BidirectionalIterator1
    __rotate_adaptive(_BidirectionalIterator1 __first,
        _BidirectionalIterator1 __middle,
        _BidirectionalIterator1 __last,
        _Distance __len1, _Distance __len2,
        _BidirectionalIterator2 __buffer,
        _Distance __buffer_size)
    {
      _BidirectionalIterator2 __buffer_end;
      if (__len1 > __len2 && __len2 <= __buffer_size)
 {
   __buffer_end = std::copy(__middle, __last, __buffer);
   std::copy_backward(__first, __middle, __last);
   return std::copy(__buffer, __buffer_end, __first);
 }
      else if (__len1 <= __buffer_size)
 {
   __buffer_end = std::copy(__first, __middle, __buffer);
   std::copy(__middle, __last, __first);
   return std::copy_backward(__buffer, __buffer_end, __last);
 }
      else
 {
   std::rotate(__first, __middle, __last);
   std::advance(__first, std::distance(__middle, __last));
   return __first;
 }
    }


  template<typename _BidirectionalIterator, typename _Distance,
    typename _Pointer>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
       _BidirectionalIterator __last,
       _Distance __len1, _Distance __len2,
       _Pointer __buffer, _Distance __buffer_size)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
   std::merge(__buffer, __buffer_end, __middle, __last,
    __first);
 }
      else if (__len2 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
   std::__merge_backward(__first, __middle, __buffer,
    __buffer_end, __last);
 }
      else
 {
   _BidirectionalIterator __first_cut = __first;
   _BidirectionalIterator __second_cut = __middle;
   _Distance __len11 = 0;
   _Distance __len22 = 0;
   if (__len1 > __len2)
     {
       __len11 = __len1 / 2;
       std::advance(__first_cut, __len11);
       __second_cut = std::lower_bound(__middle, __last,
           *__first_cut);
       __len22 = std::distance(__middle, __second_cut);
     }
   else
     {
       __len22 = __len2 / 2;
       std::advance(__second_cut, __len22);
       __first_cut = std::upper_bound(__first, __middle,
          *__second_cut);
       __len11 = std::distance(__first, __first_cut);
     }
   _BidirectionalIterator __new_middle =
     std::__rotate_adaptive(__first_cut, __middle, __second_cut,
       __len1 - __len11, __len22, __buffer,
       __buffer_size);
   std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
    __len22, __buffer, __buffer_size);
   std::__merge_adaptive(__new_middle, __second_cut, __last,
    __len1 - __len11,
    __len2 - __len22, __buffer, __buffer_size);
 }
    }


  template<typename _BidirectionalIterator, typename _Distance,
    typename _Pointer, typename _Compare>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
       _BidirectionalIterator __last,
       _Distance __len1, _Distance __len2,
       _Pointer __buffer, _Distance __buffer_size,
       _Compare __comp)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
   std::merge(__buffer, __buffer_end, __middle, __last,
    __first, __comp);
 }
      else if (__len2 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
   std::__merge_backward(__first, __middle, __buffer, __buffer_end,
    __last, __comp);
 }
      else
 {
   _BidirectionalIterator __first_cut = __first;
   _BidirectionalIterator __second_cut = __middle;
   _Distance __len11 = 0;
   _Distance __len22 = 0;
   if (__len1 > __len2)
     {
       __len11 = __len1 / 2;
       std::advance(__first_cut, __len11);
       __second_cut = std::lower_bound(__middle, __last, *__first_cut,
           __comp);
       __len22 = std::distance(__middle, __second_cut);
     }
   else
     {
       __len22 = __len2 / 2;
       std::advance(__second_cut, __len22);
       __first_cut = std::upper_bound(__first, __middle, *__second_cut,
          __comp);
       __len11 = std::distance(__first, __first_cut);
     }
   _BidirectionalIterator __new_middle =
     std::__rotate_adaptive(__first_cut, __middle, __second_cut,
       __len1 - __len11, __len22, __buffer,
       __buffer_size);
   std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
    __len22, __buffer, __buffer_size, __comp);
   std::__merge_adaptive(__new_middle, __second_cut, __last,
    __len1 - __len11,
    __len2 - __len22, __buffer,
    __buffer_size, __comp);
 }
    }


  template<typename _BidirectionalIterator, typename _Distance>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
      _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
      _Distance __len1, _Distance __len2)
    {
      if (__len1 == 0 || __len2 == 0)
 return;
      if (__len1 + __len2 == 2)
 {
   if (*__middle < *__first)
     std::iter_swap(__first, __middle);
   return;
 }
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
 {
   __len11 = __len1 / 2;
   std::advance(__first_cut, __len11);
   __second_cut = std::lower_bound(__middle, __last, *__first_cut);
   __len22 = std::distance(__middle, __second_cut);
 }
      else
 {
   __len22 = __len2 / 2;
   std::advance(__second_cut, __len22);
   __first_cut = std::upper_bound(__first, __middle, *__second_cut);
   __len11 = std::distance(__first, __first_cut);
 }
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
      __len11, __len22);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
      __len1 - __len11, __len2 - __len22);
    }


  template<typename _BidirectionalIterator, typename _Distance,
    typename _Compare>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
                           _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
      _Distance __len1, _Distance __len2,
      _Compare __comp)
    {
      if (__len1 == 0 || __len2 == 0)
 return;
      if (__len1 + __len2 == 2)
 {
   if (__comp(*__middle, *__first))
     std::iter_swap(__first, __middle);
   return;
 }
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
 {
   __len11 = __len1 / 2;
   std::advance(__first_cut, __len11);
   __second_cut = std::lower_bound(__middle, __last, *__first_cut,
       __comp);
   __len22 = std::distance(__middle, __second_cut);
 }
      else
 {
   __len22 = __len2 / 2;
   std::advance(__second_cut, __len22);
   __first_cut = std::upper_bound(__first, __middle, *__second_cut,
      __comp);
   __len11 = std::distance(__first, __first_cut);
 }
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
      __len11, __len22, __comp);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
      __len1 - __len11, __len2 - __len22, __comp);
    }
# 3128 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator>
    void
    inplace_merge(_BidirectionalIterator __first,
    _BidirectionalIterator __middle,
    _BidirectionalIterator __last)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;


     

     
      ;
      ;

      if (__first == __middle || __middle == __last)
 return;

      _DistanceType __len1 = std::distance(__first, __middle);
      _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
          __last);
      if (__buf.begin() == 0)
 std::__merge_without_buffer(__first, __middle, __last, __len1, __len2);
      else
 std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
         __buf.begin(), _DistanceType(__buf.size()));
    }
# 3183 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator, typename _Compare>
    void
    inplace_merge(_BidirectionalIterator __first,
    _BidirectionalIterator __middle,
    _BidirectionalIterator __last,
    _Compare __comp)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;


     

     

      ;
      ;

      if (__first == __middle || __middle == __last)
 return;

      const _DistanceType __len1 = std::distance(__first, __middle);
      const _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
          __last);
      if (__buf.begin() == 0)
 std::__merge_without_buffer(__first, __middle, __last, __len1,
        __len2, __comp);
      else
 std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
         __buf.begin(), _DistanceType(__buf.size()),
         __comp);
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
    typename _Distance>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
        _RandomAccessIterator1 __last,
        _RandomAccessIterator2 __result,
        _Distance __step_size)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
 {
   __result = std::merge(__first, __first + __step_size,
        __first + __step_size,
        __first + __two_step,
        __result);
   __first += __two_step;
 }

      __step_size = std::min(_Distance(__last - __first), __step_size);
      std::merge(__first, __first + __step_size,
       __first + __step_size, __last,
       __result);
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
    typename _Distance, typename _Compare>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
        _RandomAccessIterator1 __last,
        _RandomAccessIterator2 __result, _Distance __step_size,
        _Compare __comp)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
 {
   __result = std::merge(__first, __first + __step_size,
    __first + __step_size, __first + __two_step,
    __result,
    __comp);
   __first += __two_step;
 }
      __step_size = std::min(_Distance(__last - __first), __step_size);

      std::merge(__first, __first + __step_size,
       __first + __step_size, __last, __result, __comp);
    }

  template<typename _RandomAccessIterator, typename _Distance>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
      _Distance __chunk_size)
    {
      while (__last - __first >= __chunk_size)
 {
   std::__insertion_sort(__first, __first + __chunk_size);
   __first += __chunk_size;
 }
      std::__insertion_sort(__first, __last);
    }

  template<typename _RandomAccessIterator, typename _Distance,
    typename _Compare>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
      _Distance __chunk_size, _Compare __comp)
    {
      while (__last - __first >= __chunk_size)
 {
   std::__insertion_sort(__first, __first + __chunk_size, __comp);
   __first += __chunk_size;
 }
      std::__insertion_sort(__first, __last, __comp);
    }

  enum { _S_chunk_size = 7 };

  template<typename _RandomAccessIterator, typename _Pointer>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
        _RandomAccessIterator __last,
                             _Pointer __buffer)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size);

      while (__step_size < __len)
 {
   std::__merge_sort_loop(__first, __last, __buffer, __step_size);
   __step_size *= 2;
   std::__merge_sort_loop(__buffer, __buffer_last, __first, __step_size);
   __step_size *= 2;
 }
    }

  template<typename _RandomAccessIterator, typename _Pointer, typename _Compare>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
        _RandomAccessIterator __last,
                             _Pointer __buffer, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size, __comp);

      while (__step_size < __len)
 {
   std::__merge_sort_loop(__first, __last, __buffer,
     __step_size, __comp);
   __step_size *= 2;
   std::__merge_sort_loop(__buffer, __buffer_last, __first,
     __step_size, __comp);
   __step_size *= 2;
 }
    }

  template<typename _RandomAccessIterator, typename _Pointer,
    typename _Distance>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
 {
   std::__stable_sort_adaptive(__first, __middle,
          __buffer, __buffer_size);
   std::__stable_sort_adaptive(__middle, __last,
          __buffer, __buffer_size);
 }
      else
 {
   std::__merge_sort_with_buffer(__first, __middle, __buffer);
   std::__merge_sort_with_buffer(__middle, __last, __buffer);
 }
      std::__merge_adaptive(__first, __middle, __last,
       _Distance(__middle - __first),
       _Distance(__last - __middle),
       __buffer, __buffer_size);
    }

  template<typename _RandomAccessIterator, typename _Pointer,
    typename _Distance, typename _Compare>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size,
                           _Compare __comp)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
 {
   std::__stable_sort_adaptive(__first, __middle, __buffer,
          __buffer_size, __comp);
   std::__stable_sort_adaptive(__middle, __last, __buffer,
          __buffer_size, __comp);
 }
      else
 {
   std::__merge_sort_with_buffer(__first, __middle, __buffer, __comp);
   std::__merge_sort_with_buffer(__middle, __last, __buffer, __comp);
 }
      std::__merge_adaptive(__first, __middle, __last,
       _Distance(__middle - __first),
       _Distance(__last - __middle),
       __buffer, __buffer_size,
       __comp);
    }


  template<typename _RandomAccessIterator>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
     _RandomAccessIterator __last)
    {
      if (__last - __first < 15)
 {
   std::__insertion_sort(__first, __last);
   return;
 }
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle);
      std::__inplace_stable_sort(__middle, __last);
      std::__merge_without_buffer(__first, __middle, __last,
      __middle - __first,
      __last - __middle);
    }


  template<typename _RandomAccessIterator, typename _Compare>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
     _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first < 15)
 {
   std::__insertion_sort(__first, __last, __comp);
   return;
 }
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle, __comp);
      std::__inplace_stable_sort(__middle, __last, __comp);
      std::__merge_without_buffer(__first, __middle, __last,
      __middle - __first,
      __last - __middle,
      __comp);
    }
# 3468 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     
     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first2 < *__first1)
   return false;
 else if(*__first1 < *__first2)
   ++__first1;
 else
   ++__first1, ++__first2;

      return __first2 == __last2;
    }
# 3517 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _Compare>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2,
      _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first2, *__first1))
   return false;
 else if(__comp(*__first1, *__first2))
   ++__first1;
 else
   ++__first1, ++__first2;

      return __first2 == __last2;
    }
# 3572 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator>
    bool
    next_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last)
    {

     

     

      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (*__i < *__ii)
     {
       _BidirectionalIterator __j = __last;
       while (!(*__i < *--__j))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
# 3629 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    next_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last, _Compare __comp)
    {

     

     


      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (__comp(*__i, *__ii))
     {
       _BidirectionalIterator __j = __last;
       while (!bool(__comp(*__i, *--__j)))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
# 3685 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator>
    bool
    prev_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last)
    {

     

     

      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (*__ii < *__i)
     {
       _BidirectionalIterator __j = __last;
       while (!(*--__j < *__i))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
# 3742 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    prev_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last, _Compare __comp)
    {

     

     


      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (__comp(*__ii, *__i))
     {
       _BidirectionalIterator __j = __last;
       while (!bool(__comp(*--__j, *__i)))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
# 3802 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    replace_copy(_InputIterator __first, _InputIterator __last,
   _OutputIterator __result,
   const _Tp& __old_value, const _Tp& __new_value)
    {

     
     

     

      ;

      for (; __first != __last; ++__first, ++__result)
 if (*__first == __old_value)
   *__result = __new_value;
 else
   *__result = *__first;
      return __result;
    }
# 3839 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator,
    typename _Predicate, typename _Tp>
    _OutputIterator
    replace_copy_if(_InputIterator __first, _InputIterator __last,
      _OutputIterator __result,
      _Predicate __pred, const _Tp& __new_value)
    {

     
     

     

      ;

      for (; __first != __last; ++__first, ++__result)
 if (__pred(*__first))
   *__result = __new_value;
 else
   *__result = *__first;
      return __result;
    }
# 4176 "/usr/include/c++/4.4/bits/stl_algo.h" 3
}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 4192 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _Function>
    _Function
    for_each(_InputIterator __first, _InputIterator __last, _Function __f)
    {

     
      ;
      for (; __first != __last; ++__first)
 __f(*__first);
      return __f;
    }
# 4213 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    find(_InputIterator __first, _InputIterator __last,
  const _Tp& __val)
    {

     
     

      ;
      return std::__find(__first, __last, __val,
           std::__iterator_category(__first));
    }
# 4237 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    find_if(_InputIterator __first, _InputIterator __last,
     _Predicate __pred)
    {

     
     

      ;
      return std::__find_if(__first, __last, __pred,
       std::__iterator_category(__first));
    }
# 4266 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _ForwardIterator>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
    _ForwardIterator __first2, _ForwardIterator __last2)
    {

     
     
     


      ;
      ;

      for (; __first1 != __last1; ++__first1)
 for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
   if (*__first1 == *__iter)
     return __first1;
      return __last1;
    }
# 4305 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _ForwardIterator,
    typename _BinaryPredicate>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
    _ForwardIterator __first2, _ForwardIterator __last2,
    _BinaryPredicate __comp)
    {

     
     
     


      ;
      ;

      for (; __first1 != __last1; ++__first1)
 for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
   if (__comp(*__first1, *__iter))
     return __first1;
      return __last1;
    }
# 4337 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;
      if (__first == __last)
 return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
 {
   if (*__first == *__next)
     return __first;
   __first = __next;
 }
      return __last;
    }
# 4369 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last,
    _BinaryPredicate __binary_pred)
    {

     
     


      ;
      if (__first == __last)
 return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
 {
   if (__binary_pred(*__first, *__next))
     return __first;
   __first = __next;
 }
      return __last;
    }
# 4401 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _Tp>
    typename iterator_traits<_InputIterator>::difference_type
    count(_InputIterator __first, _InputIterator __last, const _Tp& __value)
    {

     
     

      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
 if (*__first == __value)
   ++__n;
      return __n;
    }
# 4426 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _Predicate>
    typename iterator_traits<_InputIterator>::difference_type
    count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {

     
     

      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
 if (__pred(*__first))
   ++__n;
      return __n;
    }
# 4466 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
    _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {

     
     
     


      ;
      ;


      if (__first1 == __last1 || __first2 == __last2)
 return __first1;


      _ForwardIterator2 __p1(__first2);
      if (++__p1 == __last2)
 return std::find(__first1, __last1, *__first2);


      _ForwardIterator2 __p;
      _ForwardIterator1 __current = __first1;

      for (;;)
 {
   __first1 = std::find(__first1, __last1, *__first2);
   if (__first1 == __last1)
     return __last1;

   __p = __p1;
   __current = __first1;
   if (++__current == __last1)
     return __last1;

   while (*__current == *__p)
     {
       if (++__p == __last2)
  return __first1;
       if (++__current == __last1)
  return __last1;
     }
   ++__first1;
 }
      return __first1;
    }
# 4537 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
    _ForwardIterator2 __first2, _ForwardIterator2 __last2,
    _BinaryPredicate __predicate)
    {

     
     
     


      ;
      ;


      if (__first1 == __last1 || __first2 == __last2)
 return __first1;


      _ForwardIterator2 __p1(__first2);
      if (++__p1 == __last2)
 {
   while (__first1 != __last1
   && !bool(__predicate(*__first1, *__first2)))
     ++__first1;
   return __first1;
 }


      _ForwardIterator2 __p;
      _ForwardIterator1 __current = __first1;

      for (;;)
 {
   while (__first1 != __last1
   && !bool(__predicate(*__first1, *__first2)))
     ++__first1;
   if (__first1 == __last1)
     return __last1;

   __p = __p1;
   __current = __first1;
   if (++__current == __last1)
     return __last1;

   while (__predicate(*__current, *__p))
     {
       if (++__p == __last2)
  return __first1;
       if (++__current == __last1)
  return __last1;
     }
   ++__first1;
 }
      return __first1;
    }
# 4611 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Integer, typename _Tp>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
      _Integer __count, const _Tp& __val)
    {

     
     

      ;

      if (__count <= 0)
 return __first;
      if (__count == 1)
 return std::find(__first, __last, __val);
      return std::__search_n(__first, __last, __count, __val,
        std::__iterator_category(__first));
    }
# 4647 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Integer, typename _Tp,
           typename _BinaryPredicate>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
      _Integer __count, const _Tp& __val,
      _BinaryPredicate __binary_pred)
    {

     
     

      ;

      if (__count <= 0)
 return __first;
      if (__count == 1)
 {
   while (__first != __last && !bool(__binary_pred(*__first, __val)))
     ++__first;
   return __first;
 }
      return std::__search_n(__first, __last, __count, __val, __binary_pred,
        std::__iterator_category(__first));
    }
# 4689 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator,
    typename _UnaryOperation>
    _OutputIterator
    transform(_InputIterator __first, _InputIterator __last,
       _OutputIterator __result, _UnaryOperation __unary_op)
    {

     
     


      ;

      for (; __first != __last; ++__first, ++__result)
 *__result = __unary_op(*__first);
      return __result;
    }
# 4725 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _BinaryOperation>
    _OutputIterator
    transform(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _OutputIterator __result,
       _BinaryOperation __binary_op)
    {

     
     
     


      ;

      for (; __first1 != __last1; ++__first1, ++__first2, ++__result)
 *__result = __binary_op(*__first1, *__first2);
      return __result;
    }
# 4758 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Tp>
    void
    replace(_ForwardIterator __first, _ForwardIterator __last,
     const _Tp& __old_value, const _Tp& __new_value)
    {

     

     

     

      ;

      for (; __first != __last; ++__first)
 if (*__first == __old_value)
   *__first = __new_value;
    }
# 4790 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Predicate, typename _Tp>
    void
    replace_if(_ForwardIterator __first, _ForwardIterator __last,
        _Predicate __pred, const _Tp& __new_value)
    {

     

     

     

      ;

      for (; __first != __last; ++__first)
 if (__pred(*__first))
   *__first = __new_value;
    }
# 4822 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Generator>
    void
    generate(_ForwardIterator __first, _ForwardIterator __last,
      _Generator __gen)
    {

     
     

      ;

      for (; __first != __last; ++__first)
 *__first = __gen();
    }
# 4850 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _OutputIterator, typename _Size, typename _Generator>
    _OutputIterator
    generate_n(_OutputIterator __first, _Size __n, _Generator __gen)
    {

     



      for (; __n > 0; --__n, ++__first)
 *__first = __gen();
      return __first;
    }
# 4886 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result)
    {

     
     

     

      ;

      if (__first == __last)
 return __result;
      return std::__unique_copy(__first, __last, __result,
    std::__iterator_category(__first),
    std::__iterator_category(__result));
    }
# 4925 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator, typename _OutputIterator,
    typename _BinaryPredicate>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result,
  _BinaryPredicate __binary_pred)
    {

     
     

      ;

      if (__first == __last)
 return __result;
      return std::__unique_copy(__first, __last, __result, __binary_pred,
    std::__iterator_category(__first),
    std::__iterator_category(__result));
    }
# 4957 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator>
    inline void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {

     

      ;

      if (__first != __last)
 for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
   std::iter_swap(__i, __first + (std::rand() % ((__i - __first) + 1)));
    }
# 4985 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator, typename _RandomNumberGenerator>
    void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last,
     _RandomNumberGenerator& __rand)
    {

     

      ;

      if (__first == __last)
 return;
      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 std::iter_swap(__i, __first + __rand((__i - __first) + 1));
    }
# 5017 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Predicate>
    inline _ForwardIterator
    partition(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      return std::__partition(__first, __last, __pred,
         std::__iterator_category(__first));
    }
# 5051 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator>
    inline void
    partial_sort(_RandomAccessIterator __first,
   _RandomAccessIterator __middle,
   _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      std::__heap_select(__first, __middle, __last);
      std::sort_heap(__first, __middle);
    }
# 5090 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    partial_sort(_RandomAccessIterator __first,
   _RandomAccessIterator __middle,
   _RandomAccessIterator __last,
   _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;
      ;

      std::__heap_select(__first, __middle, __last, __comp);
      std::sort_heap(__first, __middle, __comp);
    }
# 5128 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator>
    inline void
    nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth,
  _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      if (__first == __last || __nth == __last)
 return;

      std::__introselect(__first, __nth, __last,
    std::__lg(__last - __first) * 2);
    }
# 5167 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth,
  _RandomAccessIterator __last, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;
      ;

      if (__first == __last || __nth == __last)
 return;

      std::__introselect(__first, __nth, __last,
    std::__lg(__last - __first) * 2, __comp);
    }
# 5205 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;

      if (__first != __last)
 {
   std::__introsort_loop(__first, __last,
    std::__lg(__last - __first) * 2);
   std::__final_insertion_sort(__first, __last);
 }
    }
# 5241 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
  _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;

      if (__first != __last)
 {
   std::__introsort_loop(__first, __last,
    std::__lg(__last - __first) * 2, __comp);
   std::__final_insertion_sort(__first, __last, __comp);
 }
    }
# 5282 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2, _InputIterator2 __last2,
   _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (*__first2 < *__first1)
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
# 5345 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2, _InputIterator2 __last2,
   _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (__comp(*__first2, *__first1))
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
# 5405 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     

     
      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType> __buf(__first,
         __last);
      if (__buf.begin() == 0)
 std::__inplace_stable_sort(__first, __last);
      else
 std::__stable_sort_adaptive(__first, __last, __buf.begin(),
        _DistanceType(__buf.size()));
    }
# 5447 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
  _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     

     


      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType> __buf(__first,
         __last);
      if (__buf.begin() == 0)
 std::__inplace_stable_sort(__first, __last, __comp);
      else
 std::__stable_sort_adaptive(__first, __last, __buf.begin(),
        _DistanceType(__buf.size()), __comp);
    }
# 5493 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     
     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (*__first1 < *__first2)
     {
       *__result = *__first1;
       ++__first1;
     }
   else if (*__first2 < *__first1)
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
       ++__first2;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
# 5560 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (__comp(*__first1, *__first2))
     {
       *__result = *__first1;
       ++__first1;
     }
   else if (__comp(*__first2, *__first1))
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
       ++__first2;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
# 5627 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     
     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   ++__first1;
 else if (*__first2 < *__first1)
   ++__first2;
 else
   {
     *__result = *__first1;
     ++__first1;
     ++__first2;
     ++__result;
   }
      return __result;
    }
# 5684 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   ++__first1;
 else if (__comp(*__first2, *__first1))
   ++__first2;
 else
   {
     *__result = *__first1;
     ++__first1;
     ++__first2;
     ++__result;
   }
      return __result;
    }
# 5742 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
     _InputIterator2 __first2, _InputIterator2 __last2,
     _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     
     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (*__first2 < *__first1)
   ++__first2;
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first1, __last1, __result);
    }
# 5803 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
     _InputIterator2 __first2, _InputIterator2 __last2,
     _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (__comp(*__first2, *__first1))
   ++__first2;
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first1, __last1, __result);
    }
# 5861 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     
     
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (*__first2 < *__first1)
   {
     *__result = *__first2;
     ++__first2;
     ++__result;
   }
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first2, __last2, std::copy(__first1,
          __last1, __result));
    }
# 5927 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _OutputIterator __result,
        _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
 _ValueType2;


     
     
     

     

     

     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (__comp(*__first2, *__first1))
   {
     *__result = *__first2;
     ++__first2;
     ++__result;
   }
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first2, __last2,
         std::copy(__first1, __last1, __result));
    }
# 5984 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (*__first < *__result)
   __result = __first;
      return __result;
    }
# 6012 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last,
  _Compare __comp)
    {

     
     


      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (__comp(*__first, *__result))
   __result = __first;
      return __result;
    }
# 6040 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (*__result < *__first)
   __result = __first;
      return __result;
    }
# 6068 "/usr/include/c++/4.4/bits/stl_algo.h" 3
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last,
  _Compare __comp)
    {

     
     


      ;

      if (__first == __last) return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (__comp(*__result, *__first))
   __result = __first;
      return __result;
    }

}
# 63 "/usr/include/c++/4.4/algorithm" 2 3
# 6 "scope.h" 2
# 1 "/usr/include/c++/4.4/iterator" 1 3
# 58 "/usr/include/c++/4.4/iterator" 3
       
# 59 "/usr/include/c++/4.4/iterator" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 62 "/usr/include/c++/4.4/iterator" 2 3



# 1 "/usr/include/c++/4.4/ostream" 1 3
# 38 "/usr/include/c++/4.4/ostream" 3
       
# 39 "/usr/include/c++/4.4/ostream" 3

# 1 "/usr/include/c++/4.4/ios" 1 3
# 37 "/usr/include/c++/4.4/ios" 3
       
# 38 "/usr/include/c++/4.4/ios" 3





# 1 "/usr/include/c++/4.4/bits/ios_base.h" 1 3
# 39 "/usr/include/c++/4.4/bits/ios_base.h" 3
       
# 40 "/usr/include/c++/4.4/bits/ios_base.h" 3



# 1 "/usr/include/c++/4.4/bits/locale_classes.h" 1 3
# 39 "/usr/include/c++/4.4/bits/locale_classes.h" 3
       
# 40 "/usr/include/c++/4.4/bits/locale_classes.h" 3





namespace std __attribute__ ((__visibility__ ("default"))) {
# 61 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale() throw();
# 125 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw ();







    bool
    operator!=(const locale& __other) const throw ()
    { return !(this->operator==(__other)); }
# 251 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 6 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 366 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc);

    static void
    _S_destroy_c_locale(__c_locale& __cloc);



    static __c_locale
    _S_get_c_locale();

    static const char*
    _S_get_c_name();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 426 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw ();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const;
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 569 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 586 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 603 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 630 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 644 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 661 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 680 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 694 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const;

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const;

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 723 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 739 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 752 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const;

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const;


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const;

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const;



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}


# 1 "/usr/include/c++/4.4/bits/locale_classes.tcc" 1 3
# 37 "/usr/include/c++/4.4/bits/locale_classes.tcc" 3
       
# 38 "/usr/include/c++/4.4/bits/locale_classes.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      try
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   throw;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      try
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      catch(...)
 {
   delete [] __c;
   throw;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 810 "/usr/include/c++/4.4/bits/locale_classes.h" 2 3
# 44 "/usr/include/c++/4.4/bits/ios_base.h" 2 3
# 54 "/usr/include/c++/4.4/bits/ios_base.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 263 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 338 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 369 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 401 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 427 "/usr/include/c++/4.4/bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 444 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 456 "/usr/include/c++/4.4/bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:




    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;




    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void);


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 565 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 581 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 598 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 624 "/usr/include/c++/4.4/bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 675 "/usr/include/c++/4.4/bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 687 "/usr/include/c++/4.4/bits/ios_base.h" 3
    locale
    imbue(const locale& __loc);
# 698 "/usr/include/c++/4.4/bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 709 "/usr/include/c++/4.4/bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 728 "/usr/include/c++/4.4/bits/ios_base.h" 3
    static int
    xalloc() throw();
# 744 "/usr/include/c++/4.4/bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 765 "/usr/include/c++/4.4/bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 782 "/usr/include/c++/4.4/bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 44 "/usr/include/c++/4.4/ios" 2 3
# 1 "/usr/include/c++/4.4/streambuf" 1 3
# 37 "/usr/include/c++/4.4/streambuf" 3
       
# 38 "/usr/include/c++/4.4/streambuf" 3
# 46 "/usr/include/c++/4.4/streambuf" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "/usr/include/c++/4.4/streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "/usr/include/c++/4.4/streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "/usr/include/c++/4.4/streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "/usr/include/c++/4.4/streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "/usr/include/c++/4.4/streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "/usr/include/c++/4.4/streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 347 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 372 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 399 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 425 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 439 "/usr/include/c++/4.4/streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 457 "/usr/include/c++/4.4/streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 473 "/usr/include/c++/4.4/streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 484 "/usr/include/c++/4.4/streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 504 "/usr/include/c++/4.4/streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 520 "/usr/include/c++/4.4/streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 530 "/usr/include/c++/4.4/streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 551 "/usr/include/c++/4.4/streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 566 "/usr/include/c++/4.4/streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 577 "/usr/include/c++/4.4/streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 589 "/usr/include/c++/4.4/streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 602 "/usr/include/c++/4.4/streambuf" 3
      virtual int
      sync() { return 0; }
# 624 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 640 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 662 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 675 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 699 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 717 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 742 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 757 "/usr/include/c++/4.4/streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}


# 1 "/usr/include/c++/4.4/bits/streambuf.tcc" 1 3
# 38 "/usr/include/c++/4.4/bits/streambuf.tcc" 3
       
# 39 "/usr/include/c++/4.4/bits/streambuf.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 797 "/usr/include/c++/4.4/streambuf" 2 3
# 45 "/usr/include/c++/4.4/ios" 2 3
# 1 "/usr/include/c++/4.4/bits/basic_ios.h" 1 3
# 35 "/usr/include/c++/4.4/bits/basic_ios.h" 3
       
# 36 "/usr/include/c++/4.4/bits/basic_ios.h" 3



# 1 "/usr/include/c++/4.4/bits/locale_facets.h" 1 3
# 39 "/usr/include/c++/4.4/bits/locale_facets.h" 3
       
# 40 "/usr/include/c++/4.4/bits/locale_facets.h" 3

# 1 "/usr/include/c++/4.4/cwctype" 1 3
# 41 "/usr/include/c++/4.4/cwctype" 3
       
# 42 "/usr/include/c++/4.4/cwctype" 3




# 1 "/usr/include/wctype.h" 1 3 4
# 34 "/usr/include/wctype.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 35 "/usr/include/wctype.h" 2 3 4
# 50 "/usr/include/wctype.h" 3 4



typedef unsigned long int wctype_t;

# 72 "/usr/include/wctype.h" 3 4
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};



extern "C" {








extern int iswalnum (wint_t __wc) throw ();





extern int iswalpha (wint_t __wc) throw ();


extern int iswcntrl (wint_t __wc) throw ();



extern int iswdigit (wint_t __wc) throw ();



extern int iswgraph (wint_t __wc) throw ();




extern int iswlower (wint_t __wc) throw ();


extern int iswprint (wint_t __wc) throw ();




extern int iswpunct (wint_t __wc) throw ();




extern int iswspace (wint_t __wc) throw ();




extern int iswupper (wint_t __wc) throw ();




extern int iswxdigit (wint_t __wc) throw ();





extern int iswblank (wint_t __wc) throw ();
# 172 "/usr/include/wctype.h" 3 4
extern wctype_t wctype (__const char *__property) throw ();



extern int iswctype (wint_t __wc, wctype_t __desc) throw ();










typedef __const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) throw ();


extern wint_t towupper (wint_t __wc) throw ();


}
# 214 "/usr/include/wctype.h" 3 4
extern "C" {




extern wctrans_t wctrans (__const char *__property) throw ();


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) throw ();








extern int iswalnum_l (wint_t __wc, __locale_t __locale) throw ();





extern int iswalpha_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswdigit_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswgraph_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswlower_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswprint_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswpunct_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswspace_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswupper_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswblank_l (wint_t __wc, __locale_t __locale) throw ();



extern wctype_t wctype_l (__const char *__property, __locale_t __locale)
     throw ();



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     throw ();







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) throw ();


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) throw ();



extern wctrans_t wctrans_l (__const char *__property, __locale_t __locale)
     throw ();


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) throw ();



}
# 47 "/usr/include/c++/4.4/cwctype" 2 3
# 76 "/usr/include/c++/4.4/cwctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 42 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.4/cctype" 1 3
# 41 "/usr/include/c++/4.4/cctype" 3
       
# 42 "/usr/include/c++/4.4/cctype" 3
# 43 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h" 1 3
# 37 "/usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = _ISupper;
    static const mask lower = _ISlower;
    static const mask alpha = _ISalpha;
    static const mask digit = _ISdigit;
    static const mask xdigit = _ISxdigit;
    static const mask space = _ISspace;
    static const mask print = _ISprint;
    static const mask graph = _ISalpha | _ISdigit | _ISpunct;
    static const mask cntrl = _IScntrl;
    static const mask punct = _ISpunct;
    static const mask alnum = _ISalpha | _ISdigit;
  };

}
# 44 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3






# 1 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 1 3
# 35 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 3
       
# 36 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 3




namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {
 ;


 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {
 ;



 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }

}
# 51 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 64 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _Tv>
    void
    __convert_to_v(const char* __in, _Tv& __out, ios_base::iostate& __err,
     const __c_locale& __cloc);


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&);



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 143 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 161 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 178 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 194 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 210 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 224 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 239 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 253 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 268 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 285 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 304 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 323 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 345 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 370 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 389 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 408 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 427 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 445 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 462 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 478 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 495 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 514 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 535 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 557 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 581 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 604 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 673 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 710 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 723 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 736 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 751 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 765 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 779 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 794 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 811 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 827 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 844 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 864 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 891 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 922 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 955 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1004 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1021 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1037 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1054 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1074 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1097 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1123 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1149 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1174 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1207 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1218 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const;


      virtual
      ~ctype();
# 1242 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1261 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1279 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1297 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1314 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1331 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1347 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1364 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1384 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1406 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1429 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1455 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}


# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h" 1 3
# 37 "/usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      ++__low;
    return __low;
  }

}
# 1511 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod);
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1635 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1672 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1686 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1700 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1713 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1744 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1757 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1770 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1787 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1799 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1812 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1825 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1838 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };


# 1907 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "/usr/include/c++/4.4/bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2244 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2265 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2283 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2325 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2388 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2413 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2461 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;









  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}


# 1 "/usr/include/c++/4.4/bits/locale_facets.tcc" 1 3
# 35 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
       
# 36 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      _M_grouping_size = __np.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __np.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = (_M_grouping_size
    && static_cast<signed char>(_M_grouping[0]) > 0
    && (_M_grouping[0]
        != __gnu_cxx::__numeric_traits<char>::__max));

      _M_truename_size = __np.truename().size();
      _CharT* __truename = new _CharT[_M_truename_size];
      __np.truename().copy(__truename, _M_truename_size);
      _M_truename = __truename;

      _M_falsename_size = __np.falsename().size();
      _CharT* __falsename = new _CharT[_M_falsename_size];
      __np.falsename().copy(__falsename, _M_falsename_size);
      _M_falsename = __falsename;

      _M_decimal_point = __np.decimal_point();
      _M_thousands_sep = __np.thousands_sep();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(__num_base::_S_atoms_out,
   __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out);
      __ct.widen(__num_base::_S_atoms_in,
   __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in);
    }
# 121 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp);



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 715 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 951 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1012 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1137 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }


# 1174 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2600 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 40 "/usr/include/c++/4.4/bits/basic_ios.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 61 "/usr/include/c++/4.4/bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 126 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 137 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 190 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 211 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 246 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 284 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 296 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 336 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 350 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 379 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 399 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 419 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 438 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}


# 1 "/usr/include/c++/4.4/bits/basic_ios.tcc" 1 3
# 34 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3
       
# 35 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 145 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 472 "/usr/include/c++/4.4/bits/basic_ios.h" 2 3
# 46 "/usr/include/c++/4.4/ios" 2 3
# 41 "/usr/include/c++/4.4/ostream" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {
# 54 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 81 "/usr/include/c++/4.4/ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 107 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 164 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 249 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 282 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 310 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 323 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      flush();
# 334 "/usr/include/c++/4.4/ostream" 3
      pos_type
      tellp();
# 345 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      seekp(pos_type);
# 357 "/usr/include/c++/4.4/ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 376 "/usr/include/c++/4.4/ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 395 "/usr/include/c++/4.4/ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 405 "/usr/include/c++/4.4/ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 423 "/usr/include/c++/4.4/ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 444 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 486 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 536 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

}


# 1 "/usr/include/c++/4.4/bits/ostream.tcc" 1 3
# 39 "/usr/include/c++/4.4/bits/ostream.tcc" 3
       
# 40 "/usr/include/c++/4.4/bits/ostream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   try
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 566 "/usr/include/c++/4.4/ostream" 2 3
# 66 "/usr/include/c++/4.4/iterator" 2 3
# 1 "/usr/include/c++/4.4/istream" 1 3
# 38 "/usr/include/c++/4.4/istream" 3
       
# 39 "/usr/include/c++/4.4/istream" 3




namespace std __attribute__ ((__visibility__ ("default"))) {
# 54 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 90 "/usr/include/c++/4.4/istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "/usr/include/c++/4.4/istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "/usr/include/c++/4.4/istream" 3
      int_type
      get();
# 293 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "/usr/include/c++/4.4/istream" 3
      int_type
      peek();
# 463 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "/usr/include/c++/4.4/istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      unget();
# 531 "/usr/include/c++/4.4/istream" 3
      int
      sync();
# 545 "/usr/include/c++/4.4/istream" 3
      pos_type
      tellg();
# 560 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 663 "/usr/include/c++/4.4/istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 673 "/usr/include/c++/4.4/istream" 3
      operator bool() const
      { return _M_ok; }

    private:
      bool _M_ok;
    };
# 693 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 734 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 762 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 823 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);

}


# 1 "/usr/include/c++/4.4/bits/istream.tcc" 1 3
# 39 "/usr/include/c++/4.4/bits/istream.tcc" 3
       
# 40 "/usr/include/c++/4.4/bits/istream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<short>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<short>::__max)
     __n = short(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<int>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<int>::__max)
     __n = int(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::failbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 463 "/usr/include/c++/4.4/bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 831 "/usr/include/c++/4.4/istream" 2 3
# 67 "/usr/include/c++/4.4/iterator" 2 3
# 1 "/usr/include/c++/4.4/bits/stream_iterator.h" 1 3
# 33 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
       
# 34 "/usr/include/c++/4.4/bits/stream_iterator.h" 3



namespace std __attribute__ ((__visibility__ ("default"))) {


  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT>, typename _Dist = ptrdiff_t>
    class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Dist, const _Tp*, const _Tp&>
    {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_istream<_CharT, _Traits> istream_type;

    private:
      istream_type* _M_stream;
      _Tp _M_value;
      bool _M_ok;

    public:

      istream_iterator()
      : _M_stream(0), _M_value(), _M_ok(false) {}


      istream_iterator(istream_type& __s)
      : _M_stream(&__s)
      { _M_read(); }

      istream_iterator(const istream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_value(__obj._M_value),
        _M_ok(__obj._M_ok)
      { }

      const _Tp&
      operator*() const
      {
 ;


 return _M_value;
      }

      const _Tp*
      operator->() const { return &(operator*()); }

      istream_iterator&
      operator++()
      {
 ;


 _M_read();
 return *this;
      }

      istream_iterator
      operator++(int)
      {
 ;


 istream_iterator __tmp = *this;
 _M_read();
 return __tmp;
      }

      bool
      _M_equal(const istream_iterator& __x) const
      { return (_M_ok == __x._M_ok) && (!_M_ok || _M_stream == __x._M_stream); }

    private:
      void
      _M_read()
      {
 _M_ok = (_M_stream && *_M_stream) ? true : false;
 if (_M_ok)
   {
     *_M_stream >> _M_value;
     _M_ok = *_M_stream ? true : false;
   }
      }
    };


  template<typename _Tp, typename _CharT, typename _Traits, typename _Dist>
    inline bool
    operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return __x._M_equal(__y); }


  template <class _Tp, class _CharT, class _Traits, class _Dist>
    inline bool
    operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return !__x._M_equal(__y); }
# 145 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT> >
    class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:


      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


    private:
      ostream_type* _M_stream;
      const _CharT* _M_string;

    public:

      ostream_iterator(ostream_type& __s) : _M_stream(&__s), _M_string(0) {}
# 176 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
      ostream_iterator(ostream_type& __s, const _CharT* __c)
      : _M_stream(&__s), _M_string(__c) { }


      ostream_iterator(const ostream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_string(__obj._M_string) { }



      ostream_iterator&
      operator=(const _Tp& __value)
      {
 ;


 *_M_stream << __value;
 if (_M_string) *_M_stream << _M_string;
 return *this;
      }

      ostream_iterator&
      operator*()
      { return *this; }

      ostream_iterator&
      operator++()
      { return *this; }

      ostream_iterator&
      operator++(int)
      { return *this; }
    };

}
# 68 "/usr/include/c++/4.4/iterator" 2 3
# 7 "scope.h" 2
# 1 "type.h" 1
# 13 "type.h"
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 93 "/usr/include/string.h" 3 4
}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 233 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 260 "/usr/include/string.h" 3 4
}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 312 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/string.h" 3 4
}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 487 "/usr/include/string.h" 3 4
}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 515 "/usr/include/string.h" 3 4
}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 14 "type.h" 2
class TypeSpecifier{
  public:
    int node;
    int n;


    TypeSpecifier *child;

};
# 8 "scope.h" 2
using namespace std;

struct Entry{
  TypeSpecifier * type;
  void * value;
};

typedef std::tr1::unordered_map<std::string, Entry *> SymbolTable;
typedef SymbolTable::iterator TableIterator;


class Scope{
  private:
    SymbolTable table;
    Scope *prev;
  public:
    Scope(Scope *p=__null){
      prev=p;
    }
    void declare(string id, TypeSpecifier *t);
    Entry * lookup(string id);
    void showAll();
};
# 2 "scope.cpp" 2
# 1 "/usr/include/c++/4.4/cstdio" 1 3
# 41 "/usr/include/c++/4.4/cstdio" 3
       
# 42 "/usr/include/c++/4.4/cstdio" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 45 "/usr/include/c++/4.4/cstdio" 2 3
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 109 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();








extern FILE *tmpfile (void) ;
# 202 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 224 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 249 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 259 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 292 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 642 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 658 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 719 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 730 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 766 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 785 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 808 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 847 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 866 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 936 "/usr/include/stdio.h" 3 4
}
# 46 "/usr/include/c++/4.4/cstdio" 2 3
# 93 "/usr/include/c++/4.4/cstdio" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;

}
# 150 "/usr/include/c++/4.4/cstdio" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 165 "/usr/include/c++/4.4/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;

}
# 3 "scope.cpp" 2
using namespace std;

void Scope::declare(string id, TypeSpecifier *t){
  if(table.find(id)==table.end()){

    ;
  }
  Entry *entry= new Entry();
  entry->type=t;
  table.insert(make_pair(id,entry));
}


Entry * Scope::lookup(string id){
  TableIterator it;
  it=table.find(id);
  if(it!=table.end())
    return it->second;
  if(prev==__null)
    return __null;
  return prev->lookup(id);
}


void Scope::showAll(){
  TableIterator it;
  printf("Showing contents of Symbol Table\n");
  int i=0;
  for(it=table.begin(); it!=table.end(); it++){
    printf("%d - %s\n", ++i, it->first.c_str());
  }
}
