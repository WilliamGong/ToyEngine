/*
 * @Author: William Gong 
 * @Date: 2019-02-11 09:57:25 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-11 09:57:25 
 */
#include <iostream>
#include "IApplication.h"

namespace ToyEngine {
    extern IApplication *g_pApp;
};

using namespace ToyEngine;

int main(int argc, char** argv) {
    int ret = g_pApp->initialize(); //judge return

    if(ret != 0) {
        std::cout << "Initialize failed, exit now";
        return ret;
    }

    //main loop
    while(!g_pApp->isQuit()) {
        g_pApp->tick();
    }

    g_pApp->finalize();

    return 0;
}