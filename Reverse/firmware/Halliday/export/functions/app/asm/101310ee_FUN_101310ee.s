; FUN_101310ee @ 0x101310ee size=16
  push {r3,lr}
  ldr r3,[r0,#0x4]
  ldr r0,[r3,#0x4]
  cbz r0,0x101310fa
  bl 0x10064c60
  movs r0,#0x0
  pop {r3,pc}
