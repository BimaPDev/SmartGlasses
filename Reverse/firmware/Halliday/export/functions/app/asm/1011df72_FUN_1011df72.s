; FUN_1011df72 @ 0x1011df72 size=22
  push {r3,r4,r5,lr}
  mov r5,r0
  bl 0x1011df34
  mov r4,r0
  mov r0,r5
  bl 0x1011df34
  orr.w r0,r4,r0, lsl #0x8
  pop {r3,r4,r5,pc}
