/*
 * @Author: William Gong 
 * @Date: 2019-02-11 10:18:41 
 * @Last Modified by: William Gong
 * @Last Modified time: 2019-02-11 10:21:32
 */

#pragma once
#include "IRuntimeModule.h"

namespace ToyEngine {
    class GraphicsManager : public IRuntimeModule {
        public:
            virtual ~GraphicsManager() {};
    };
}