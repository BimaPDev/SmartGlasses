; FUN_2c469ce6 @ 0x2c469ce6 size=34
  push {r4,lr}
  ldr r4,[0x2c469d1c]
  sub sp,#0x8
  ldr r3,[r4,#0x0]
  cbz r3,0x2c469d10
  ldr r0,[0x2c469d20]
  ldr r1,[0x2c469d24]
  ldr r3,[0x2c469d28]
  ldr r2,[0x2c469d2c]
  strd r1,r0,[sp,#0x0]
  movs r1,#0xa3
  movs r0,#0x4
  bl 0x2c673d88
  add sp,#0x8
  pop {r4,pc}
