/*=======================================================================================
** File Name:  sch_def_schtbl.c
**
** Title:  CFS scheduler's scheduling table for DRONE mission
**
** $Author:    Auto-generated by Python scripts
** $Revision:  $
** $Date:      2014-12-18
**
** Purpose:  This source file defines scheduling table used the CFS scheduler for mission
**           DRONE.
**=====================================================================================*/

/*
** Pragmas
*/

/*
** Include Files
*/
#include "cfe.h"
#include "cfe_tbl_filedef.h"
#include "sch_platform_cfg.h"
#include "sch_msgdefs.h"
#include "sch_tbldefs.h"

#include "sch_grpids.h"
#include "sch_tblidx.h"

/*
** Local Defines
*/

/*
** Local Structure Declarations
*/

/*
** External Global Variables
*/

/*
** Global Variables
*/

/* Table file header */
static CFE_TBL_FileDef_t CFE_TBL_FileDef =
{
    "SCH_DefaultScheduleTable", "SCH.SCHED_DEF", "SCH schedule table",
    "sch_def_schtbl.tbl", (sizeof(SCH_ScheduleEntry_t) * SCH_TABLE_ENTRIES)
};

/* Default schedule table data */
SCH_ScheduleEntry_t SCH_DefaultScheduleTable[SCH_TABLE_ENTRIES] =
{
    /*
    ** Structure definition...
    **
    **    uint8    EnableState  -- SCH_UNUSED, SCH_ENABLED, SCH_DISABLED
    **    uint8    Type         -- 0 or SCH_ACTIVITY_SEND_MSG
    **    uint16   Frequency    -- how many seconds between Activity execution
    **    uint16   Remainder    -- seconds offset to perform Activity
    **    uint16   MessageIndex -- Message Index into Message Definition table
    **    uint32   GroupData    -- Group and Multi-Group membership definitions
    */

    /* Slot #0 */
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CI_LAB_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #1 */
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, TO_LAB_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #2 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #3 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #4 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #5 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #6 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #7 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #8 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #9 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #10 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #11 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #12 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #13 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #14 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #15 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #16 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #17 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #18 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #19 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #20 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #21 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #22 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #23 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #24 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #25 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #26 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #27 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #28 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #29 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #30 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #31 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #32 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #33 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #34 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #35 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #36 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #37 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #38 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #39 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #40 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #41 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #42 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #43 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #44 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #45 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #46 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #47 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #48 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #49 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #50 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #51 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #52 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #53 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #54 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #55 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #56 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #57 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #58 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #59 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #60 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #61 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #62 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #63 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #64 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

      /* Slot #65 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #66 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #67 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #68 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #69 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #70 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #71 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #72 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #73 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #74 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #75 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #76 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #77 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #78 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #79 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #80 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #81 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #82 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #83 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #84 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #85 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #86 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #87 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #88 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #89 */
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CFE_ES_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CFE_EVS_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CFE_SB_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CFE_TBL_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CFE_TIME_SEND_HK_MIDX, SCH_GROUP_MISC },

    /* Slot #90 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #91 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #92 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #93 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #94 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #95 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #96 */
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, HK_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, HS_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, LC_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #97 */
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, SC_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, SCH_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, CF_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_ENABLED, SCH_ACTIVITY_SEND_MSG, 1, 0, DS_SEND_HK_MIDX, SCH_GROUP_MISC },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #98 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },

    /* Slot #99 */
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE },
    { SCH_UNUSED, 0, 0, 0, 0, SCH_GROUP_NONE }
};

/*
** Local Variables
*/

/*
** Function Prototypes
*/

/*
** Function Definitions
*/

/*=======================================================================================
** End of file sch_def_schtbl.c
**=====================================================================================*/
    