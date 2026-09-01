; FUN_1011dfb2 @ 0x1011dfb2 size=44
  push {r4,r5,r6,lr}
  mov r5,r0
  bl 0x1011df34
  mov r6,r0
  mov r0,r5
  bl 0x1011df34
  mov r4,r0
  mov r0,r5
  bl 0x1011df34
  lsls r2,r0,#0x10
  orr.w r3,r2,r4, lsl #0x8
  mov r0,r5
  orrs r6,r3
  bl 0x1011df34
  orr.w r0,r6,r0, lsl #0x18
  pop {r4,r5,r6,pc}
