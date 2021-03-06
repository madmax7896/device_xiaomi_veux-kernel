#ifndef _MSM_AUDIO_G711_H
#define _MSM_AUDIO_G711_H

#include <audio/linux/msm_audio.h>
#include <linux/types.h>

struct msm_audio_g711_enc_config {
	__u32 sample_rate;
};

#define AUDIO_SET_G711_ENC_CONFIG  _IOW(AUDIO_IOCTL_MAGIC, \
	(AUDIO_MAX_COMMON_IOCTL_NUM+0), struct msm_audio_g711_enc_config)

#define AUDIO_GET_G711_ENC_CONFIG  _IOR(AUDIO_IOCTL_MAGIC, \
	(AUDIO_MAX_COMMON_IOCTL_NUM+1), struct msm_audio_g711_enc_config)


#endif /* _MSM_AUDIO_G711_H */
