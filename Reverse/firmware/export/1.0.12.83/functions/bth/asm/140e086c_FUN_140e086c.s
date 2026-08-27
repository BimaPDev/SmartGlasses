; FUN_140e086c @ 0x140e086c size=34
  push {r4,lr}
  mov r4,r1
  movs r1,#0x1
  bl 0x140e05e4
  mov r2,r0
  cbnz r0,0x140e0886
  ldr r3,[0x140e0890]
  mov.w r1,#0x140
  ldr r0,[0x140e0894]
  bl 0x140da8c8
  movs r3,#0x1
  str r4,[r0,#0x14]
  str r3,[r0,#0x10]
  pop {r4,pc}
