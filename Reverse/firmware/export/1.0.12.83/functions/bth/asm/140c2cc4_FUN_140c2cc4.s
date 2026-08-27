; FUN_140c2cc4 @ 0x140c2cc4 size=24
  ldr r3,[0x140c2cdc]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140d2158
  mov r0,r4
  pop {r4,pc}
