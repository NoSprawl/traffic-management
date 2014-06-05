#include <linux/module.h>
#include <linux/config.h>
#include <linux/init.h>

static int __init mymodule_init(void) {
  printk ("This machine is now a NoSprawl subordinate.\n");
  return 0;
}

static void __exit mymodule_exit(void) {
  printk ("This machine is no longer a NoSprawl subordinate.\n");
  return;
}

module_init(mymodule_init);
module_exit(mymodule_exit);
