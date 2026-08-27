; FUN_2c13edd8 @ 0x2c13edd8 size=40
  push {r4,r5,lr}
  mov r2,r1
  sub sp,#0x14
  cbz r0,0x2c13edfc
  ldr r5,[r0,#0x4]
  ldr r4,[0x2c13ee00]
  strd r5,r2,[sp,#0x4]
  movw r1,#0x221
  ldr r3,[0x2c13ee04]
  ldr r2,[0x2c13ee08]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c135988
  add sp,#0x14
  pop {r4,r5,pc}
  ldr r5,[0x2c13ee0c]
  b 0x2c13ede2
