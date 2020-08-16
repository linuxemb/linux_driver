#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
		printk(KERN_ALERT "helloe workd form me\n");
		return 0;
}

static void hello_exit(void)
{

		printk(KERN_ALERT "helloe bye bye form me\n");
}

module_init(hello_init);
module_exit(hello_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lisa");
