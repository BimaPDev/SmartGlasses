; FUN_10092f78 @ 0x10092f78 size=24
  push {r4,lr}
  movs r1,#0x20
  mov r4,r0
  bl 0x1012a754
  movs r3,#0x0
  ldr r2,[0x10092f90]
  strb r3,[r4,#0x0]
  ldr r3,[0x10092f94]
  strd r2,r3,[r4,#0x18]
  pop {r4,pc}
