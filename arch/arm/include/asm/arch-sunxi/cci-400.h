#ifndef __CCI_H__
#define __CCI_H__

/* Register offsets for the ARM cache coherent interconnect (CCI) */

#define CCI400_DVM_MESSAGE_REQ_EN	0x00000002
#define CCI400_SNOOP_REQ_EN		0x00000001
#define CCI400_SHA_ORD_NON_SHAREABLE	0x00000002

/* CCI-400 registers */
struct cci400_control {
	uint32_t unused0[0x3];
	uint32_t status;
	uint32_t unused1[0xffc];
	uint32_t snoop_ctrl_cluster0;
	uint32_t sha_ord_cluster0;
	uint32_t unused2[0x3fe];
	uint32_t snoop_ctrl_cluster1;
	uint32_t sha_ord_cluster1;
};

#endif /* __CCI_H__ */
