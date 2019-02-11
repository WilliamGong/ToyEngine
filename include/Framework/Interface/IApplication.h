/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:46 
 * @Last Modified by: William Gong
 * @Last Modified time: 2019-02-11 10:00:04
 */

//抽象

#pragma once

#include "Interface.h"
#include "IRuntimeModule.h"

namespace ToyEngine {
    class IApplication : public IRuntimeModule {
        public:
            virtual int initialize() = 0;
            virtual void finalize() = 0;
            virtual void tick() = 0;
            virtual bool isQuit() = 0;
    };
}