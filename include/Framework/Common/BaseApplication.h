/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:05 
 * @Last Modified by: William Gong
 * @Last Modified time: 2019-02-11 09:59:51
 */

/*
 *各平台具体实现
 *
 */

#pragma once
#include "IApplication.h"

namespace ToyEngine {
    class BaseApplication : public IApplication {
        public:
            virtual int initialize();
            virtual void finalize();
            virtual void tick();
            virtual bool isQuit();
        protected:
            bool m_bQuit;
    };
}