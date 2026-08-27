; FUN_14000080 @ 0x14000080 size=20
  push {r3,lr}
  bl 0x14000528
  mov r3,r0
  ldr r2,[0x14000094]
  uxtb r0,r0
  strb r3,[r2,#0x0]
  bl 0x1400007c
  pop {r3,pc}
