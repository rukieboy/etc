#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int __init init_mdd(void)
{
        printk(KERN_ALERT "[Module Message] miscdevicedriver start!!\n");
        return 0;
}

void __exit exit_mdd(void)
{
        printk(KERN_ALERT "[Module Message] miscdevicedriver end!!\n");
}
module_init(init_mdd);
module_exit(exit_mdd);
MODULE_LICENSE("GPL");
