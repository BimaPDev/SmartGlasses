; FUN_2c256d92 @ 0x2c256d92 size=32
  push {r1,r2,r4,r6,lr}
  strb r5,[r2,r5]
  strb r5,[r2,r5]
  movs r0,r0
  lsls r0,r0,#0x10
  lsls r1,r7,#0x3
  movs r0,r0
  lsls r0,r0,#0xc
  ldr r6,[sp,#0x344]
  ldrsh r0,[r0,r4]
  lsls r0,r0,#0x2
  lsls r6,r7,#0x1
  b 0x2c256dc2
  sbcs r7,r1
  movs r3,#0xf8
  cmp r4,#0x0
