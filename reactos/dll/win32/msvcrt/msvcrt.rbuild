<module name="msvcrt" type="win32dll" baseaddress="${BASEADDRESS_MSVCRT}" mangledsymbols="true" installbase="system32" installname="msvcrt.dll">
	<importlibrary definition="msvcrt.def" />
	<include base="msvcrt">.</include>
	<include base="crt">include</include>
	<define name="_DISABLE_TIDENTS" />
	<define name="_WIN32_IE">0x600</define>
	<define name="_WIN32_WINNT">0x501</define>
	<define name="USE_MSVCRT_PREFIX" />
	<define name="_MSVCRT_LIB_" />
	<define name="_MT" />
	<define name="__NO_CTYPE_INLINES" />
	<define name="_CTYPE_DISABLE_MACROS" />
	<define name="_NO_INLINING" />
	<linkerflag>-enable-stdcall-fixup</linkerflag>

	<!--	__MINGW_IMPORT needs to be defined differently because it's defined
		as dllimport by default, which is invalid from GCC 4.1.0 on!	-->
	<define name="__MINGW_IMPORT">"extern __attribute__ ((dllexport))"</define>

	<library>crt</library>
	<library>wine</library>
	<library>kernel32</library>
	<library>ntdll</library>
	<pch>precomp.h</pch>
	<file>dllmain.c</file>
	<file>msvcrt.rc</file>
</module>
