; FUN_1404a1b4 @ 0x1404a1b4 size=52
  cmp r0,#0x0
  bgt 0x1404a1c4
  ldr r3,[0x1404a1e8]
  add.w r0,r0,r0, lsl #0x3
  add.w r0,r3,r0, lsl #0x5
  bx lr
  push {r4,r5,lr}
  ldr r5,[0x1404a1ec]
  ldr r4,[0x1404a1f0]
  sub sp,#0x14
  strd r0,lr,[sp,#0x8]
  movw r1,#0x5b1
  strd r4,r5,[sp,#0x0]
  ldr r3,[0x1404a1f4]
  ldr r2,[0x1404a1f8]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r0,#0x0
  add sp,#0x14
  pop {r4,r5,pc}
