; FUN_2c651390 @ 0x2c651390 size=28
  push {r3,lr}
  mov r3,r0
  mov r0,r1
  mov r1,r2
  ldr r3,[r3,#0x0]
  ldr.w r3,[r3,#-0xc]
  cmp r3,r0
  bcs 0x2c6513aa
  mov r2,r0
  ldr r0,[0x2c6513ac]
  bl 0x2c65868c
  pop {r3,pc}
