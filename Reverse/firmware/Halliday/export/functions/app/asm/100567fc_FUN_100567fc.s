; FUN_100567fc @ 0x100567fc size=20
  push {r4,lr}
  ldr r4,[0x10056810]
  ldr r3,[r4,#0x0]
  cbnz r3,0x1005680c
  bl 0x100568bc
  ldr r3,[r0,#0x8]
  str r3,[r4,#0x0]
  ldr r0,[r4,#0x0]
  pop {r4,pc}
