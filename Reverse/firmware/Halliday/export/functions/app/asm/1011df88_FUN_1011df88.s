; FUN_1011df88 @ 0x1011df88 size=42
  push {r4,r5,r6,lr}
  mov r6,r0
  bl 0x1011df34
  lsls r4,r0,#0x18
  mov r0,r6
  bl 0x1011df34
  orr.w r4,r4,r0, lsl #0x10
  mov r0,r6
  bl 0x1011df34
  mov r5,r0
  mov r0,r6
  bl 0x1011df34
  orrs r0,r4
  orr.w r0,r0,r5, lsl #0x8
  pop {r4,r5,r6,pc}
