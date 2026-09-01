; FUN_1012006e @ 0x1012006e size=32
  push {r3,lr}
  mov r2,r0
  bl 0x1007ddd0
  ldr r3,[r2,#0x0]
  ldr r3,[r3,#0x0]
  adds r3,#0x4
  cbnz r0,0x10120086
  ldr r2,[r3,#0x0]
  lsls r1,r2,#0x19
  bmi 0x1012007e
  pop {r3,pc}
  ldr r2,[r3,#0x0]
  lsls r2,r2,#0x1f
  bmi 0x10120086
  b 0x10120084
