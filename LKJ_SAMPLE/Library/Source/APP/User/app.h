/*******************************************************************************
 *   Filename:       app.h
 *   Revised:        $Date: 2015-03-11$
 *   Revision:       $
 *	 Writer:		 wumingshen.
 *
 *   Description:
 *   Notes:
 *
 *     				E-mail:shenchangwei945@163.com
 *
 *   All copyrights reserved to wumingshen.
 *
 *******************************************************************************/

#ifndef	APP_H
#define	APP_H

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * INCLUDES
 */
//#include <includes.h>
#include <app_ctrl.h>
#include <app_lib.h>
    

/*******************************************************************************
 * CONSTANTS
 */

/*******************************************************************************
 * MACROS
 */

/*******************************************************************************
 * TYPEDEFS
 */
/*******************************************************************************
* Description  : 系统运行参数
* Author       : 2018/3/14 星期三, by redmorningcn
*******************************************************************************/
typedef struct  
{
    uint32  id;             //产品id
    uint32  addr;           //通讯地址
    uint8   buf[64];        //预留
    uint32  cpu_freq;       //cpu频率
    uint32  time;           //系统全局时间
}strSysPara;    
    
/*******************************************************************************
 * TYPEDEFS
 */

/***********************************************
* 描述： 软定时器外部引用声明
*/
extern  OS_TMR          OSTmr0;                   // 定时器
extern  OS_SEM          SemBeepOn;
/***********************************************
* 描述： 软定时器回调函数外部引用声明
*/
extern void  OSTmr0_callback(OS_TMR *ptmr,void *p_arg);

/***********************************************
* 描述： 看门狗标志组外部引用声明
*/
extern OS_FLAG_GRP      WdtFlagGRP;             //看门狗标志组
extern OS_FLAGS         WdtFlags;

extern OS_FLAG_GRP      BeepFlagGrp;            //蜂鸣器标志组
extern OS_FLAGS         BeepFlags;

/*******************************************************************************
 * LOCAL VARIABLES
 */

/*******************************************************************************
 * GLOBAL VARIABLES
 */
extern  strSysPara  sys;

/*******************************************************************************
 * LOCAL FUNCTIONS
 */

/*******************************************************************************
 * GLOBAL FUNCTIONS
 */
/******************************************************
* 描述： 任务创建申明，每个单独的创建任务请在此处声明
*/


/*******************************************************************************
 * EXTERN VARIABLES
 */

/*******************************************************************************
 * EXTERN FUNCTIONS
 */

/*******************************************************************************
 *              end of file                                                    *
 *******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif
