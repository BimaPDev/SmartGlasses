; FUN_1403875c @ 0x1403875c size=40
  push {r4,lr}
  ldr r4,[0x14038784]
  movs r0,#0xa
  ldr r3,[r4,#0x24]
  bic r3,r3,#0x20
  str r3,[r4,#0x24]
  ldr r3,[r4,#0x24]
  orr r3,r3,#0x40000
  str r3,[r4,#0x24]
  bl 0x1402e558
  ldr r3,[r4,#0x38]
  orr r3,r3,#0x80000
  orr r3,r3,#0x80
  str r3,[r4,#0x38]
  pop {r4,pc}
