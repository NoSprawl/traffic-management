/* Kernel Programming */
#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/config.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int __init mymodule_init(void) {
  printk ("Now entering a no sprawl zone!!\n");
  return 0;
}

static void __exit mymodule_exit(void) {
  printk ("Terminating NoSprawl :(\n");
  return;
}

module_init(mymodule_init);
module_exit(mymodule_exit);
