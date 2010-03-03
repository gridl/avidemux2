/*
--- DO NOT EDIT THIS FILE !!! ---

This file has been generated automatically with 'jsapigen'.

jsapigen is a glue-code generator for SpiderMonkey. It is distributed
under the conditions of version 3 of the GNU General Public License.
Please have a look at http://jsapigen.sourceforge.net.

This file is NOT part of jsapigen and is NOT necessarily covered by
jsapigen's license. For licensing information regarding this file,
please refer to the software package which it is part of.

*/

#include "stdio.h"
#include "ADM_jsAvidemux.h"
void jsAvidemux(void)
{
        printf("Constructor invoked\n");
}

#include <string.h>
#include <wchar.h>
#include <jsapi.h>
#ifndef JS_THREADSAFE
#if JS_VERSION <= 170
#define jsrefcount int
#define JS_BeginRequest(cx)
#define JS_EndRequest(cx)
#define JS_SuspendRequest(cx)
#define JS_ResumeRequest(cx, saveDepth)
#endif
#endif
#ifndef JS_FS
#define JS_FS(name, call, nargs, flags, extra) {name, call, nargs, flags, extra}
#endif
#ifndef JS_FS_END
#define JS_FS_END {NULL, NULL, 0, 0, 0}
#endif
static JSPropertySpec jj_static_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jj_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jj_static_fs[] = {
    JS_FS_END
};
static JSFunctionSpec jj_fs[] = {
    JS_FS_END
};
static JSBool
jjadmmarkerA_get(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    double var2;
    jsval var5;
    JSBool var1;
    var2 = 0.0;
    var5 = JSVAL_NULL;
    var1 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var2 = jsGetMarkerA();
    if (JS_NewNumberValue(cx, var2, &var5) != JS_TRUE) {
        goto do_return;
    }
    if (val) {
        *val = var5;
    }
    var1 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var1;
}
static JSBool
jjadmmarkerA_set(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    double var7;
    jsval var10;
    jsdouble var11;
    JSBool var6;
    var7 = 0.0;
    var10 = JSVAL_NULL;
    var11 = 0.0;
    var6 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var10 = *val;
    if (JS_ValueToNumber(cx, var10, &var11) != JS_TRUE) {
        goto do_return;
    }
    var7 = (double)var11;
    jsSetMarkerA(var7);
    var6 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var6;
}
static JSBool
jjadmmarkerB_get(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    double var13;
    jsval var16;
    JSBool var12;
    var13 = 0.0;
    var16 = JSVAL_NULL;
    var12 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var13 = jsGetMarkerB();
    if (JS_NewNumberValue(cx, var13, &var16) != JS_TRUE) {
        goto do_return;
    }
    if (val) {
        *val = var16;
    }
    var12 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var12;
}
static JSBool
jjadmmarkerB_set(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    double var18;
    jsval var21;
    jsdouble var22;
    JSBool var17;
    var18 = 0.0;
    var21 = JSVAL_NULL;
    var22 = 0.0;
    var17 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var21 = *val;
    if (JS_ValueToNumber(cx, var21, &var22) != JS_TRUE) {
        goto do_return;
    }
    var18 = (double)var22;
    jsSetMarkerB(var18);
    var17 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var17;
}
static JSBool
jjadmaudioResample_get(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    int var24;
    jsval var27;
    JSBool var23;
    var24 = 0;
    var27 = JSVAL_NULL;
    var23 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var24 = jsGetResample();
    if (JS_NewNumberValue(cx, var24, &var27) != JS_TRUE) {
        goto do_return;
    }
    if (val) {
        *val = var27;
    }
    var23 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var23;
}
static JSBool
jjadmaudioResample_set(JSContext *cx, JSObject *obj, jsval id, jsval *val)
{
    int var29;
    jsval var32;
    int32 var33;
    JSBool var28;
    var29 = 0;
    var32 = JSVAL_NULL;
    var33 = 0;
    var28 = JS_FALSE;
    if (!JS_EnterLocalRootScope(cx)) {
        goto do_return;
    }
    var32 = *val;
    if (JS_ValueToInt32(cx, var32, &var33) != JS_TRUE) {
        goto do_return;
    }
    var29 = (int)var33;
    jsSetResample(var29);
    var28 = JS_TRUE;
    do_return:
    JS_LeaveLocalRootScope(cx);
    return var28;
}
static JSBool
jjadmloadVideo(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var35;
    char *var40;
    int var36;
    int var39;
    int var41;
    jsval var42;
    JSString *var43;
    jsval var234;
    size_t var44;
    size_t var45;
    int var47;
    jschar *var46;
    jsval var235;
    jsval var48;
    JSBool var34;
    var35 = NULL;
    var40 = NULL;
    var36 = 0;
    var39 = 0;
    var41 = 0;
    var42 = JSVAL_NULL;
    var43 = NULL;
    var234 = JSVAL_NULL;
    var44 = 0;
    var45 = 0;
    var47 = 0;
    var46 = NULL;
    var235 = JSVAL_NULL;
    var48 = JSVAL_NULL;
    var34 = JS_FALSE;
    var35 = obj;
    var39 = argc;
    var41 = 0;
    var41 = var41 < var39;
    if (var41) {
    var42 = argv[0];
    var43 = JS_ValueToString(cx, var42);
    if (!var43) {
        goto do_return;
    }
    var234 = STRING_TO_JSVAL(var43);
    argv[argc+0] = var234;
    var44 = JS_GetStringLength(var43);
    var45 = 1;
    var45 += var44;
    var40 = JS_malloc(cx, var45);
    if (!var40) {
        goto do_return;
    }
    var47 = 1;
    var46 = JS_GetStringChars(var43);
    var235 = STRING_TO_JSVAL(var43);
    argv[argc+1] = var235;
    {
        size_t i;
        for (i = 0; i < var44; ++i) {
            var40[i] = wctob(var46[i]);
        }
        var40[var44] = '\0';
    }
    }
    var36 = jsLoadVideo(var40);
    if (JS_NewNumberValue(cx, var36, &var48) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var48;
    if (rval) {
        *rval = var48;
    }
    var34 = JS_TRUE;
    do_return:
    if (var47) {
        JS_free(cx, var40);
        var40 = NULL;
        var47 = 0;
    }
    return var34;
}
static JSBool
jjadmclearSegments(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var50;
    int var51;
    int var54;
    jsval var55;
    JSBool var49;
    var50 = NULL;
    var51 = 0;
    var54 = 0;
    var55 = JSVAL_NULL;
    var49 = JS_FALSE;
    var50 = obj;
    var54 = argc;
    var51 = jsClearSegments();
    if (JS_NewNumberValue(cx, var51, &var55) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var55;
    if (rval) {
        *rval = var55;
    }
    var49 = JS_TRUE;
    do_return:
    return var49;
}
static JSBool
jjadmappendVideo(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var57;
    char *var62;
    int var58;
    int var61;
    int var63;
    jsval var64;
    JSString *var65;
    jsval var238;
    size_t var66;
    size_t var67;
    int var69;
    jschar *var68;
    jsval var239;
    jsval var70;
    JSBool var56;
    var57 = NULL;
    var62 = NULL;
    var58 = 0;
    var61 = 0;
    var63 = 0;
    var64 = JSVAL_NULL;
    var65 = NULL;
    var238 = JSVAL_NULL;
    var66 = 0;
    var67 = 0;
    var69 = 0;
    var68 = NULL;
    var239 = JSVAL_NULL;
    var70 = JSVAL_NULL;
    var56 = JS_FALSE;
    var57 = obj;
    var61 = argc;
    var63 = 0;
    var63 = var63 < var61;
    if (var63) {
    var64 = argv[0];
    var65 = JS_ValueToString(cx, var64);
    if (!var65) {
        goto do_return;
    }
    var238 = STRING_TO_JSVAL(var65);
    argv[argc+0] = var238;
    var66 = JS_GetStringLength(var65);
    var67 = 1;
    var67 += var66;
    var62 = JS_malloc(cx, var67);
    if (!var62) {
        goto do_return;
    }
    var69 = 1;
    var68 = JS_GetStringChars(var65);
    var239 = STRING_TO_JSVAL(var65);
    argv[argc+1] = var239;
    {
        size_t i;
        for (i = 0; i < var66; ++i) {
            var62[i] = wctob(var68[i]);
        }
        var62[var66] = '\0';
    }
    }
    var58 = jsAppendVideo(var62);
    if (JS_NewNumberValue(cx, var58, &var70) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var70;
    if (rval) {
        *rval = var70;
    }
    var56 = JS_TRUE;
    do_return:
    if (var69) {
        JS_free(cx, var62);
        var62 = NULL;
        var69 = 0;
    }
    return var56;
}
static JSBool
jjadmaddSegment(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var72;
    int var77;
    double var78;
    double var79;
    int var73;
    int var76;
    int var80;
    jsval var81;
    int32 var82;
    int var83;
    jsval var84;
    jsdouble var85;
    int var86;
    jsval var87;
    jsdouble var88;
    jsval var89;
    JSBool var71;
    var72 = NULL;
    var77 = 0;
    var78 = 0.0;
    var79 = 0.0;
    var73 = 0;
    var76 = 0;
    var80 = 0;
    var81 = JSVAL_NULL;
    var82 = 0;
    var83 = 0;
    var84 = JSVAL_NULL;
    var85 = 0.0;
    var86 = 0;
    var87 = JSVAL_NULL;
    var88 = 0.0;
    var89 = JSVAL_NULL;
    var71 = JS_FALSE;
    var72 = obj;
    var76 = argc;
    var80 = 0;
    var80 = var80 < var76;
    if (var80) {
    var81 = argv[0];
    if (JS_ValueToInt32(cx, var81, &var82) != JS_TRUE) {
        goto do_return;
    }
    var77 = (int)var82;
    }
    var83 = 1;
    var83 = var83 < var76;
    if (var83) {
    var84 = argv[1];
    if (JS_ValueToNumber(cx, var84, &var85) != JS_TRUE) {
        goto do_return;
    }
    var78 = (double)var85;
    }
    var86 = 2;
    var86 = var86 < var76;
    if (var86) {
    var87 = argv[2];
    if (JS_ValueToNumber(cx, var87, &var88) != JS_TRUE) {
        goto do_return;
    }
    var79 = (double)var88;
    }
    var73 = jsAddSegment(var77, var78, var79);
    if (JS_NewNumberValue(cx, var73, &var89) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var89;
    if (rval) {
        *rval = var89;
    }
    var71 = JS_TRUE;
    do_return:
    return var71;
}
static JSBool
jjadmsetPostProc(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var91;
    int var96;
    int var97;
    int var98;
    int var92;
    int var95;
    int var99;
    jsval var100;
    int32 var101;
    int var102;
    jsval var103;
    int32 var104;
    int var105;
    jsval var106;
    int32 var107;
    jsval var108;
    JSBool var90;
    var91 = NULL;
    var96 = 0;
    var97 = 0;
    var98 = 0;
    var92 = 0;
    var95 = 0;
    var99 = 0;
    var100 = JSVAL_NULL;
    var101 = 0;
    var102 = 0;
    var103 = JSVAL_NULL;
    var104 = 0;
    var105 = 0;
    var106 = JSVAL_NULL;
    var107 = 0;
    var108 = JSVAL_NULL;
    var90 = JS_FALSE;
    var91 = obj;
    var95 = argc;
    var99 = 0;
    var99 = var99 < var95;
    if (var99) {
    var100 = argv[0];
    if (JS_ValueToInt32(cx, var100, &var101) != JS_TRUE) {
        goto do_return;
    }
    var96 = (int)var101;
    }
    var102 = 1;
    var102 = var102 < var95;
    if (var102) {
    var103 = argv[1];
    if (JS_ValueToInt32(cx, var103, &var104) != JS_TRUE) {
        goto do_return;
    }
    var97 = (int)var104;
    }
    var105 = 2;
    var105 = var105 < var95;
    if (var105) {
    var106 = argv[2];
    if (JS_ValueToInt32(cx, var106, &var107) != JS_TRUE) {
        goto do_return;
    }
    var98 = (int)var107;
    }
    var92 = jsSetPostProc(var96, var97, var98);
    if (JS_NewNumberValue(cx, var92, &var108) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var108;
    if (rval) {
        *rval = var108;
    }
    var90 = JS_TRUE;
    do_return:
    return var90;
}
static JSBool
jjadmgetWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var110;
    int var111;
    int var114;
    jsval var115;
    JSBool var109;
    var110 = NULL;
    var111 = 0;
    var114 = 0;
    var115 = JSVAL_NULL;
    var109 = JS_FALSE;
    var110 = obj;
    var114 = argc;
    var111 = jsGetWidth();
    if (JS_NewNumberValue(cx, var111, &var115) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var115;
    if (rval) {
        *rval = var115;
    }
    var109 = JS_TRUE;
    do_return:
    return var109;
}
static JSBool
jjadmgetHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var117;
    int var118;
    int var121;
    jsval var122;
    JSBool var116;
    var117 = NULL;
    var118 = 0;
    var121 = 0;
    var122 = JSVAL_NULL;
    var116 = JS_FALSE;
    var117 = obj;
    var121 = argc;
    var118 = jsGetHeight();
    if (JS_NewNumberValue(cx, var118, &var122) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var122;
    if (rval) {
        *rval = var122;
    }
    var116 = JS_TRUE;
    do_return:
    return var116;
}
static JSBool
jjadmgetFps1000(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var124;
    int var125;
    int var128;
    jsval var129;
    JSBool var123;
    var124 = NULL;
    var125 = 0;
    var128 = 0;
    var129 = JSVAL_NULL;
    var123 = JS_FALSE;
    var124 = obj;
    var128 = argc;
    var125 = jsGetFps1000();
    if (JS_NewNumberValue(cx, var125, &var129) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var129;
    if (rval) {
        *rval = var129;
    }
    var123 = JS_TRUE;
    do_return:
    return var123;
}
static JSBool
jjadmgetVideoCodec(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var131;
    char *var132;
    int var135;
    jsval var136;
    JSString *var137;
    jsval var246;
    char *var138;
    jsval var247;
    JSBool var130;
    var131 = NULL;
    var132 = NULL;
    var135 = 0;
    var136 = JSVAL_NULL;
    var137 = NULL;
    var246 = JSVAL_NULL;
    var138 = NULL;
    var247 = JSVAL_NULL;
    var130 = JS_FALSE;
    var131 = obj;
    var135 = argc;
    var132 = jsGetVideoCodec();
    if (var132) {
    var137 = JS_NewStringCopyZ(cx, var132);
    if (!var137) {
        goto do_return;
    }
    var246 = STRING_TO_JSVAL(var137);
    argv[argc+0] = var246;
    } else {
    var138 = "";
    var137 = JS_InternString(cx, var138);
    if (!var137) {
        goto do_return;
    }
    var247 = STRING_TO_JSVAL(var137);
    argv[argc+1] = var247;
    }
    var136 = STRING_TO_JSVAL(var137);
    if (rval) {
        *rval = var136;
    }
    var130 = JS_TRUE;
    do_return:
    return var130;
}
static JSBool
jjadmaudioReset(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var140;
    int var141;
    int var144;
    jsval var145;
    JSBool var139;
    var140 = NULL;
    var141 = 0;
    var144 = 0;
    var145 = JSVAL_NULL;
    var139 = JS_FALSE;
    var140 = obj;
    var144 = argc;
    var141 = jsAudioReset();
    if (JS_NewNumberValue(cx, var141, &var145) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var145;
    if (rval) {
        *rval = var145;
    }
    var139 = JS_TRUE;
    do_return:
    return var139;
}
static JSBool
jjadmaudioMixer(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var147;
    char *var152;
    int var148;
    int var151;
    int var153;
    jsval var154;
    JSString *var155;
    jsval var249;
    size_t var156;
    size_t var157;
    int var159;
    jschar *var158;
    jsval var250;
    jsval var160;
    JSBool var146;
    var147 = NULL;
    var152 = NULL;
    var148 = 0;
    var151 = 0;
    var153 = 0;
    var154 = JSVAL_NULL;
    var155 = NULL;
    var249 = JSVAL_NULL;
    var156 = 0;
    var157 = 0;
    var159 = 0;
    var158 = NULL;
    var250 = JSVAL_NULL;
    var160 = JSVAL_NULL;
    var146 = JS_FALSE;
    var147 = obj;
    var151 = argc;
    var153 = 0;
    var153 = var153 < var151;
    if (var153) {
    var154 = argv[0];
    var155 = JS_ValueToString(cx, var154);
    if (!var155) {
        goto do_return;
    }
    var249 = STRING_TO_JSVAL(var155);
    argv[argc+0] = var249;
    var156 = JS_GetStringLength(var155);
    var157 = 1;
    var157 += var156;
    var152 = JS_malloc(cx, var157);
    if (!var152) {
        goto do_return;
    }
    var159 = 1;
    var158 = JS_GetStringChars(var155);
    var250 = STRING_TO_JSVAL(var155);
    argv[argc+1] = var250;
    {
        size_t i;
        for (i = 0; i < var156; ++i) {
            var152[i] = wctob(var158[i]);
        }
        var152[var156] = '\0';
    }
    }
    var148 = jsAudioMixer(var152);
    if (JS_NewNumberValue(cx, var148, &var160) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var160;
    if (rval) {
        *rval = var160;
    }
    var146 = JS_TRUE;
    do_return:
    if (var159) {
        JS_free(cx, var152);
        var152 = NULL;
        var159 = 0;
    }
    return var146;
}
static JSBool
jjadmclearVideoFilters(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var162;
    int var163;
    int var166;
    jsval var167;
    JSBool var161;
    var162 = NULL;
    var163 = 0;
    var166 = 0;
    var167 = JSVAL_NULL;
    var161 = JS_FALSE;
    var162 = obj;
    var166 = argc;
    var163 = jsClearVideoFilters();
    if (JS_NewNumberValue(cx, var163, &var167) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var167;
    if (rval) {
        *rval = var167;
    }
    var161 = JS_TRUE;
    do_return:
    return var161;
}
static JSBool
jjadmvideoCodec_ignore(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var169;
    char *var174;
    int var170;
    int var173;
    int var175;
    jsval var176;
    JSString *var177;
    jsval var253;
    size_t var178;
    size_t var179;
    int var181;
    jschar *var180;
    jsval var254;
    jsval var182;
    JSBool var168;
    var169 = NULL;
    var174 = NULL;
    var170 = 0;
    var173 = 0;
    var175 = 0;
    var176 = JSVAL_NULL;
    var177 = NULL;
    var253 = JSVAL_NULL;
    var178 = 0;
    var179 = 0;
    var181 = 0;
    var180 = NULL;
    var254 = JSVAL_NULL;
    var182 = JSVAL_NULL;
    var168 = JS_FALSE;
    var169 = obj;
    var173 = argc;
    var175 = 0;
    var175 = var175 < var173;
    if (var175) {
    var176 = argv[0];
    var177 = JS_ValueToString(cx, var176);
    if (!var177) {
        goto do_return;
    }
    var253 = STRING_TO_JSVAL(var177);
    argv[argc+0] = var253;
    var178 = JS_GetStringLength(var177);
    var179 = 1;
    var179 += var178;
    var174 = JS_malloc(cx, var179);
    if (!var174) {
        goto do_return;
    }
    var181 = 1;
    var180 = JS_GetStringChars(var177);
    var254 = STRING_TO_JSVAL(var177);
    argv[argc+1] = var254;
    {
        size_t i;
        for (i = 0; i < var178; ++i) {
            var174[i] = wctob(var180[i]);
        }
        var174[var178] = '\0';
    }
    }
    var170 = jsVideoCodec(var174);
    if (JS_NewNumberValue(cx, var170, &var182) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var182;
    if (rval) {
        *rval = var182;
    }
    var168 = JS_TRUE;
    do_return:
    if (var181) {
        JS_free(cx, var174);
        var174 = NULL;
        var181 = 0;
    }
    return var168;
}
static JSBool
jjadmaddVideoFilter_ignore(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var184;
    char *var189;
    int var185;
    int var188;
    int var190;
    jsval var191;
    JSString *var192;
    jsval var256;
    size_t var193;
    size_t var194;
    int var196;
    jschar *var195;
    jsval var257;
    jsval var197;
    JSBool var183;
    var184 = NULL;
    var189 = NULL;
    var185 = 0;
    var188 = 0;
    var190 = 0;
    var191 = JSVAL_NULL;
    var192 = NULL;
    var256 = JSVAL_NULL;
    var193 = 0;
    var194 = 0;
    var196 = 0;
    var195 = NULL;
    var257 = JSVAL_NULL;
    var197 = JSVAL_NULL;
    var183 = JS_FALSE;
    var184 = obj;
    var188 = argc;
    var190 = 0;
    var190 = var190 < var188;
    if (var190) {
    var191 = argv[0];
    var192 = JS_ValueToString(cx, var191);
    if (!var192) {
        goto do_return;
    }
    var256 = STRING_TO_JSVAL(var192);
    argv[argc+0] = var256;
    var193 = JS_GetStringLength(var192);
    var194 = 1;
    var194 += var193;
    var189 = JS_malloc(cx, var194);
    if (!var189) {
        goto do_return;
    }
    var196 = 1;
    var195 = JS_GetStringChars(var192);
    var257 = STRING_TO_JSVAL(var192);
    argv[argc+1] = var257;
    {
        size_t i;
        for (i = 0; i < var193; ++i) {
            var189[i] = wctob(var195[i]);
        }
        var189[var193] = '\0';
    }
    }
    var185 = jsVideoFilter(var189);
    if (JS_NewNumberValue(cx, var185, &var197) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var197;
    if (rval) {
        *rval = var197;
    }
    var183 = JS_TRUE;
    do_return:
    if (var196) {
        JS_free(cx, var189);
        var189 = NULL;
        var196 = 0;
    }
    return var183;
}
static JSBool
jjadmaudioCodec_ignore(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var199;
    char *var204;
    int var200;
    int var203;
    int var205;
    jsval var206;
    JSString *var207;
    jsval var259;
    size_t var208;
    size_t var209;
    int var211;
    jschar *var210;
    jsval var260;
    jsval var212;
    JSBool var198;
    var199 = NULL;
    var204 = NULL;
    var200 = 0;
    var203 = 0;
    var205 = 0;
    var206 = JSVAL_NULL;
    var207 = NULL;
    var259 = JSVAL_NULL;
    var208 = 0;
    var209 = 0;
    var211 = 0;
    var210 = NULL;
    var260 = JSVAL_NULL;
    var212 = JSVAL_NULL;
    var198 = JS_FALSE;
    var199 = obj;
    var203 = argc;
    var205 = 0;
    var205 = var205 < var203;
    if (var205) {
    var206 = argv[0];
    var207 = JS_ValueToString(cx, var206);
    if (!var207) {
        goto do_return;
    }
    var259 = STRING_TO_JSVAL(var207);
    argv[argc+0] = var259;
    var208 = JS_GetStringLength(var207);
    var209 = 1;
    var209 += var208;
    var204 = JS_malloc(cx, var209);
    if (!var204) {
        goto do_return;
    }
    var211 = 1;
    var210 = JS_GetStringChars(var207);
    var260 = STRING_TO_JSVAL(var207);
    argv[argc+1] = var260;
    {
        size_t i;
        for (i = 0; i < var208; ++i) {
            var204[i] = wctob(var210[i]);
        }
        var204[var208] = '\0';
    }
    }
    var200 = jsAudioCodec(var204);
    if (JS_NewNumberValue(cx, var200, &var212) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var212;
    if (rval) {
        *rval = var212;
    }
    var198 = JS_TRUE;
    do_return:
    if (var211) {
        JS_free(cx, var204);
        var204 = NULL;
        var211 = 0;
    }
    return var198;
}
static JSBool
jjadmsetContainer_ignore(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var214;
    char *var219;
    int var215;
    int var218;
    int var220;
    jsval var221;
    JSString *var222;
    jsval var262;
    size_t var223;
    size_t var224;
    int var226;
    jschar *var225;
    jsval var263;
    jsval var227;
    JSBool var213;
    var214 = NULL;
    var219 = NULL;
    var215 = 0;
    var218 = 0;
    var220 = 0;
    var221 = JSVAL_NULL;
    var222 = NULL;
    var262 = JSVAL_NULL;
    var223 = 0;
    var224 = 0;
    var226 = 0;
    var225 = NULL;
    var263 = JSVAL_NULL;
    var227 = JSVAL_NULL;
    var213 = JS_FALSE;
    var214 = obj;
    var218 = argc;
    var220 = 0;
    var220 = var220 < var218;
    if (var220) {
    var221 = argv[0];
    var222 = JS_ValueToString(cx, var221);
    if (!var222) {
        goto do_return;
    }
    var262 = STRING_TO_JSVAL(var222);
    argv[argc+0] = var262;
    var223 = JS_GetStringLength(var222);
    var224 = 1;
    var224 += var223;
    var219 = JS_malloc(cx, var224);
    if (!var219) {
        goto do_return;
    }
    var226 = 1;
    var225 = JS_GetStringChars(var222);
    var263 = STRING_TO_JSVAL(var222);
    argv[argc+1] = var263;
    {
        size_t i;
        for (i = 0; i < var223; ++i) {
            var219[i] = wctob(var225[i]);
        }
        var219[var223] = '\0';
    }
    }
    var215 = jsSetContainer(var219);
    if (JS_NewNumberValue(cx, var215, &var227) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var227;
    if (rval) {
        *rval = var227;
    }
    var213 = JS_TRUE;
    do_return:
    if (var226) {
        JS_free(cx, var219);
        var219 = NULL;
        var226 = 0;
    }
    return var213;
}
static JSBool
jjadm__construct__(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var229;
    int var233;
    JSBool var228;
    var229 = NULL;
    var233 = 0;
    var228 = JS_FALSE;
    var229 = obj;
    var233 = argc;
    jsAvidemux();
    var228 = JS_TRUE;
    return var228;
}
static JSPropertySpec jjadm_static_ps[] = {
    {"markerA", 0, 0|JSPROP_ENUMERATE, jjadmmarkerA_get, jjadmmarkerA_set},
    {"markerB", 0, 0|JSPROP_ENUMERATE, jjadmmarkerB_get, jjadmmarkerB_set},
    {"audioResample", 0, 0|JSPROP_ENUMERATE, jjadmaudioResample_get, jjadmaudioResample_set},
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jjadm_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jjadm_static_fs[] = {
    JS_FS("loadVideo", jjadmloadVideo, 1, 0, 3),
    JS_FS("clearSegments", jjadmclearSegments, 0, 0, 1),
    JS_FS("appendVideo", jjadmappendVideo, 1, 0, 3),
    JS_FS("addSegment", jjadmaddSegment, 3, 0, 1),
    JS_FS("setPostProc", jjadmsetPostProc, 3, 0, 1),
    JS_FS("getWidth", jjadmgetWidth, 0, 0, 1),
    JS_FS("getHeight", jjadmgetHeight, 0, 0, 1),
    JS_FS("getFps1000", jjadmgetFps1000, 0, 0, 1),
    JS_FS("getVideoCodec", jjadmgetVideoCodec, 0, 0, 2),
    JS_FS("audioReset", jjadmaudioReset, 0, 0, 1),
    JS_FS("audioMixer", jjadmaudioMixer, 1, 0, 3),
    JS_FS("clearVideoFilters", jjadmclearVideoFilters, 0, 0, 1),
    JS_FS("videoCodec", jsAdmvideoCodec,  1, 0, 3),
    JS_FS("addVideoFilter", jsAdmaddVideoFilter,  1, 0, 3),
    JS_FS("audioCodec", jsAdmaudioCodec,  1, 0, 3),
    JS_FS("setContainer", jsAdmsetContainer,  1, 0, 3),
    JS_FS_END
};
static JSFunctionSpec jjadm_fs[] = {
    JS_FS_END
};
static JSClass jjadm_class = {
    "adm",
    0,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_EnumerateStub,
    JS_ResolveStub,
    JS_ConvertStub,
    JS_FinalizeStub,
    NULL,
    NULL,
    NULL,
    jjadm__construct__,
    NULL,
    NULL,
    NULL,
    NULL
};
static JSObject *
jjadm_init(JSContext *cx, JSObject *obj)
{
    JSObject *parent_proto, *proto;
    JSClass *class;
    if (!cx || !obj) {
        JS_ReportError(cx, "invalid parameter");
        return NULL;
    }
    if (!JS_EnterLocalRootScope(cx)) {
        JS_ReportError(cx, "JS_EnterLocalRootScope failed");
        return NULL;
    }
    parent_proto = NULL;
    proto = NULL;
    parent_proto = JS_NewObject(cx, NULL, NULL, NULL);
    if (!parent_proto) {
        JS_LeaveLocalRootScope(cx);
        JS_ReportError(cx, "failed to create prototype");
        return NULL;
    }
    class = &jjadm_class;
    proto = JS_InitClass(cx, obj, parent_proto, class, jjadm__construct__, 0, jjadm_ps, jjadm_fs, jjadm_static_ps, jjadm_static_fs);
    if (!proto) {
        JS_LeaveLocalRootScope(cx);
        JS_ReportError(cx, "failed to init class");
        return NULL;
    }
    JS_LeaveLocalRootScope(cx);
    return proto;
}


JSObject *jsAvidemuxInit(JSContext *cx,JSObject *obj)
{
          if (JS_DefineFunctions(cx, obj, jj_static_fs) != JS_TRUE) 
          {
                return NULL;
          }
          return jjadm_init(cx,obj);
}

JSFunctionSpec  *jsGetAdmFunctions(void)
{
        return jjadm_static_fs;
}


