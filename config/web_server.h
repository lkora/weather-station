#ifndef CONFIG_WS_H_
#define CONFIG_WS_H_

#include <inttypes.h>


// Enable Web Server hosting which will display data
#define ENABLE_WS       true        

#if ENABLE_WS
    // Web Server config
    const uint16_t http_port            = 80;    // Port on which the web server will be hosted 

#endif


#endif
