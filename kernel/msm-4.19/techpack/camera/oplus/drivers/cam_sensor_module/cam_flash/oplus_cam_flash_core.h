#ifndef OPLUS_CAM_FLASH_CORE_H
#define OPLUS_CAM_FLASH_CORE_H

#include <linux/module.h>

#include "cam_sensor_cmn_header.h"
#include "cam_flash_core.h"
#include "cam_res_mgr_api.h"
#include "cam_common_util.h"
#include "cam_packet_util.h"
#include "oplus_cam_flash_aw3641e.h"
#include "oplus_cam_flash_sgm3785.h"

int cam_flash_on(struct cam_flash_ctrl *flash_ctrl,
	struct cam_flash_frame_setting *flash_data,
	int mode);
#endif //OPLUS_CAM_FLASH_CORE_H
