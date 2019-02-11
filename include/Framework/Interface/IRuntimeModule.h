/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:38 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-11 09:57:38 
 */
#pragma once    //header file only insert one time

#include "Interface.h"

namespace ToyEngine {
    class IRuntimeModule {
        public:
            virtual ~IRuntimeModule() {};
            virtual int initialize() = 0;
            virtual void finalize() = 0;
            virtual void tick() = 0;
    };
}