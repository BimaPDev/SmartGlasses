; FUN_2c62eaa0 @ 0x2c62eaa0 size=214
  push {r4,r5,lr}
  movs r3,#0x0
  sub sp,#0xc
  mov.w r2,#0x400
  mov r4,r0
  mov r1,r3
  str r2,[sp,#0x0]
  ldrd r2,r0,[r0,#0x2c]
  bl 0x2c62e4a8
  ldr r5,[r4,#0x28]
  ldr r3,[r4,#0x20]
  cmp.w r0,#0x198
  sub.w r5,r5,r3
  bge 0x2c62eb00
  movw r3,#0x9c4
  mul r0,r3,r0
  asrs r0,r0,#0xa
  bic.w r0,r0,r0, asr #0x1f
  movs r1,#0x0
  mov.w r3,#0x1f4
  mov.w r2,#0x320
  cmp.w r0,#0x400
  str r1,[sp,#0x0]
  mov.w r1,#0x400
  it ge
  mov.ge.w r0,#0x400
  bl 0x2c62e27c
  ldr r3,[r4,#0x28]
  mul r0,r5,r0
  sub.w r0,r3,r0, asr #0xa
  add sp,#0xc
  pop {r4,r5,pc}
  sub.w r3,r0,#0x198
  cmp r3,#0xcd
  bhi 0x2c62eb1e
  ldr r0,[0x2c62eb78]
  asrs r2,r5,#0x1f
  add.w r3,r3,r3, lsl #0x2
  smull r1,r5,r0,r5
  rsb.w r0,r3,#0x400
  rsb r5,r2,r5, asr #0x3
  b 0x2c62ead0
  subw r3,r0,#0x266
  cmp r3,#0xcc
  bls 0x2c62eb46
  subw r3,r0,#0x333
  cmp r3,#0x65
  bhi 0x2c62eb58
  add.w r3,r3,r3, lsl #0x2
  ldr r2,[0x2c62eb78]
  asrs r1,r5,#0x1f
  lsls r0,r3,#0x1
  smull r3,r5,r2,r5
  rsb.w r0,r0,#0x400
  rsb r5,r1,r5, asr #0x4
  b 0x2c62ead0
  ldr r2,[0x2c62eb78]
  asrs r1,r5,#0x1f
  add.w r0,r3,r3, lsl #0x2
  smull r3,r5,r2,r5
  rsb r5,r1,r5, asr #0x3
  b 0x2c62ead0
  mvn r3,#0x398
  adds r3,r0,r3
  cmp r3,#0x67
  bhi 0x2c62ead0
  ldr r2,[0x2c62eb78]
  asrs r1,r5,#0x1f
  add.w r3,r3,r3, lsl #0x2
  smull r2,r5,r2,r5
  lsls r0,r3,#0x1
  rsb r5,r1,r5, asr #0x4
  b 0x2c62ead0
