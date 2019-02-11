/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:20 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-11 09:57:20 
 */
#include "BaseApplication.h"

namespace ToyEngine {
    BaseApplication g_App;
    IApplication *g_pApp = & g_App;
}