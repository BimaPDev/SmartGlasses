; FUN_10057bfc @ 0x10057bfc size=28
  push {r4,lr}
  ldr r4,[r1,#0x0]
  ldrd r1,r2,[r1,#0x4]
  bl 0x10057bdc
  movs r1,#0x0
  mov r3,r0
  ldr r2,[0x10057c18]
  mov r0,r4
  bl 0x1011ac58
  movs r0,#0x0
  pop {r4,pc}
