; FUN_1009aecc @ 0x1009aecc size=28
  push {r3,r4,r5,lr}
  ldr r4,[0x1009aee8]
  add.w r5,r4,#0x40
  ldr r3,[r4,#0x58]
  cbnz r3,0x1009aedc
  movs r0,#0x1
  pop {r3,r4,r5,pc}
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x1011dbde
  b 0x1009aed4
