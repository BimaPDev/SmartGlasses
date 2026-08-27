; FUN_14003b80 @ 0x14003b80 size=40
  push {r4,r5,lr}
  mov r2,r1
  sub sp,#0x14
  cbz r0,0x14003ba4
  ldr r5,[r0,#0x4]
  ldr r4,[0x14003ba8]
  strd r5,r2,[sp,#0x4]
  movw r1,#0x221
  ldr r3,[0x14003bac]
  ldr r2,[0x14003bb0]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1400a3e0
  add sp,#0x14
  pop {r4,r5,pc}
  ldr r5,[0x14003bb4]
  b 0x14003b8a
