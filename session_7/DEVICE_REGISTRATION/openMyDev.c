#include"headers.h"
#include"declarations.h"


int openMyDev (struct inode *inode_p, struct file *file_p)
{
	printk(KERN_INFO "START: #%s #%s \n",__FILE__,__func__);
	
	Dev *localDev;

/*************************** container_of *********************
 * - cast a member of a structure out to the containing structure
 *
 * @ptr:        the pointer to the member.
 * @type:       the type of the container struct this is embedded in.
 * @member:     the name of the member within the struct.
 *
 * **************************************************************/
	
/************************************************************************
 
        #define container_of(ptr, type, member) ({                              \
        void *__mptr = (void *)(ptr);                                   \
        BUILD_BUG_ON_MSG(!__same_type(*(ptr), ((type *)0)->member) &&   \
                         !__same_type(*(ptr), void),                    \
                         "pointer type mismatch in container_of()");    \
        ((type *)(__mptr - offsetof(type, member))); })

* ***********************************************************************/
	localDev = container_of
	printk(KERN_INFO "END: #%s #%s \n",__FILE__,__func__);

return 0;
}

