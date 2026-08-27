; FUN_2c443860 @ 0x2c443860 size=34
  asrs r5,r1
  ldmia r0!,{r1}
  ldr r5,[r5,#0x6c]
  ldrsb r5,[r2,r4]
  b.w 0x2c60e38c
  push {r1,r4,r6,r7,lr}
  ldr r4,[sp,#0x134]
  strh r4,[r1,#0x10]
  lsls r0,r1,#0x10
  blt 0x2c443796
  ldrb r3,[r3,#0xf]
  vtbx.8 lr,{d17},r9
  bvs 0x2c44386c
  teq.w r12,r8, lsl #0x11
