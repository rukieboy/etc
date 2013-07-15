#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/miscdevice.h>

static struct miscdevice hello_dev={
        MISC_DYNAMIC_MINOR,
        "hello",

};



int __init init_hello(void)
{
        int ret;
        ret = misc_register(&hello_dev);
        if(ret)
        printk(KERN_ERR "Unable to Hello,misc dev \n");

        return ret;
}

void __exit exit_hello(void)
{
        printk(KERN_ALERT "bye~!\n");
        misc_deregister(&hello_dev);
}


module_init(init_hello);
module_exit(exit_hello);
MODULE_LICENSE("GPL");
