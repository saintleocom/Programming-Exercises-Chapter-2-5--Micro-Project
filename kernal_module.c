/*In a strong piece, but more speedier than a little part, has the hindrance of nonattendance of reusability and extensibility. 
On present day strong pieces, this has been tended to by using segment modules. A piece module (or loadable piece mode) is an article archive that contains code that can expand the piece handiness at runtime (it is stacked relying upon the circumstance); When a piece module is as of now not needed, it will in general be unloaded. A huge part of the device drivers are used as piece modules. The piece is the middle piece of a functioning structure. It manages the structure's resources, and it is an augmentation between your PC's hardware and programming. There are various inspirations driving why you might need to know the variation of the part that is running on your GNU/Linux working system*/



 #include <linux/kernel.h>
/*The #include order tells the preprocessor to embed the substance of one more document into the source code at where the #include mandate is found.*/
 #include <linux/module.h>
 //it is used to run the init module 
int init_module(void){
    //it is used to log the information
    printk(KERN_INFO "welcome world 1.\n");
    //init_module got faild module can not be load.
    return 0;
}
//to clear the data from module
void cleanup_module(void){
    //print and log the data 
    printk(KERN_INFO"goodbye world 1.\n");
}

