; FUN_100eb2e4 @ 0x100eb2e4 size=30
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x10138fdc
  muls r4,r5
  add.w r4,r0,r4, lsl #0x1
  subs r4,#0x1
  udiv r4,r4,r0
  muls r0,r4
  ldr r3,[0x100eb304]
  str r0,[r3,#0x0]
  pop {r3,r4,r5,pc}
