; FUN_101311aa @ 0x101311aa size=34
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r2
  add r3,sp,#0x4
  mov r2,sp
  bl 0x100b88c4
  mov r4,r0
  cbnz r0,0x101311c6
  mov r2,r0
  add r1,sp,#0x4
  ldr r0,[sp,#0x0]
  bl 0x10118d7c
  str r0,[r5,#0x0]
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
