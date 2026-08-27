; FUN_2c506544 @ 0x2c506544 size=28
  push {r4,lr}
  ldr r3,[0x2c506560]
  sub.w r4,r0,#0x10
  str.w r3,[r0,#-0x10]
  mov r0,r4
  bl 0x2c5068ac
  mov r0,r4
  bl 0x2c62bea8
  mov r0,r4
  pop {r4,pc}
