Firmata-Spark
===

#### This repo has been depreciated in favor of [Spark](https://github.com/jacobrosenthal/arduino/tree/Spark). The best outcome is for Spark Firmata support to be pushed upstream into the parent Firmata repo. If you'd like to see where things are at, take a look at the [Firmata Spark PR](https://github.com/firmata/arduino/pull/141/).

---

This is a port of the [Firmata](http://firmata.org/wiki/Main_Page) Arduino communication library for the Spark Core. **Please be aware that this is a very early release**.
  
Since the Firmata library supports streaming, Firmata on the [Spark Core](https://www.spark.io/) supports Serial, TCP and UDP protocols. This means that you can control and interact with your Spark locally over your wireless network, without high latency and bandwidth limitations.

  
## Getting Started

For now you need to manually copy the `firmware/firmata-spark.h` and `firmware/firmata-spark.cpp` files into the Spark IDE or build the application locally. I will publish a Spark Library that will be in the Spark IDE libraries list once tested better.

Note: To build locally, you will need to add `firmata-spark.h` to the `build.mk`. You can then `#include "firmata-spark.h"` and write your code in `application.cpp`.


## TCP/UDP Firmata servers?

Right now I haven't found any, but I'm looking. I'll be needing one as well, so stay tuned.


## More?

[Spark Community page about Firmata Spark](https://community.spark.io/t/request-arduino-firmata/5357/9)

## Contributing

All contributions welcome.
