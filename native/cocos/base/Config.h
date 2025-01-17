/****************************************************************************
 Copyright (c) 2008-2010 Ricardo Quesada
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2011 Zynga Inc.
 Copyright (c) 2013-2016 Chukong Technologies Inc.
 Copyright (c) 2017-2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once

/** Support PNG or not. If your application don't use png format picture, you can undefine this macro to save package size.
*/
#ifndef CC_USE_PNG
    #define CC_USE_PNG 1
#endif // CC_USE_PNG

/** Support JPEG or not. If your application don't use jpeg format picture, you can undefine this macro to save package size.
 */
#ifndef CC_USE_JPEG
    #define CC_USE_JPEG 1
#endif // CC_USE_JPEG

/** Support webp or not. If your application don't use webp format picture, you can undefine this macro to save package size.
 */
#ifndef CC_USE_WEBP
    #define CC_USE_WEBP 1
#endif // CC_USE_WEBP

/** Support EditBox
 */
#ifndef CC_USE_EDITBOX
    #define CC_USE_EDITBOX 1
#endif

#ifndef CC_FILEUTILS_APPLE_ENABLE_OBJC
    #define CC_FILEUTILS_APPLE_ENABLE_OBJC 1
#endif

#ifndef CC_ENABLE_CACHE_JSB_FUNC_RESULT
    #define CC_ENABLE_CACHE_JSB_FUNC_RESULT 1
#endif

#ifndef USE_MEMORY_LEAK_DETECTOR
    #define USE_MEMORY_LEAK_DETECTOR 0
#endif

#ifndef CC_USE_PROFILER
    #define CC_USE_PROFILER 0
#endif
