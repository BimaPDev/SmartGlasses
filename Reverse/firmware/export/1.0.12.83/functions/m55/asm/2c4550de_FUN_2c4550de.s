; FUN_2c4550de @ 0x2c4550de size=16
  push {r0,r1,lr}
  lsls r0,r0,#0xf
  svc 0xfe
  vqshl.u64 d14,d31,#0x1c
  subs r6,#0xff
  ldc p15,cr6,[pc,#-0x3fc]
