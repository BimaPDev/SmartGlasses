; FUN_101200d4 @ 0x101200d4 size=32
  push {r3,lr}
  mov r2,r0
  bl 0x1007ddd0
  ldr r3,[r2,#0x0]
  ldr r3,[r3,#0x0]
  adds r3,#0x4
  cbnz r0,0x101200ec
  ldr r2,[r3,#0x0]
  lsls r1,r2,#0x1d
  bmi 0x101200e4
  pop {r3,pc}
  ldr r2,[r3,#0x0]
  lsls r2,r2,#0x19
  bmi 0x101200ec
  b 0x101200ea
