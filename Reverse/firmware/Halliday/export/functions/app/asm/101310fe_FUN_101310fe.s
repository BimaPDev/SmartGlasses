; FUN_101310fe @ 0x101310fe size=16
  push {r3,lr}
  ldr r3,[r0,#0x4]
  ldr r0,[r3,#0x8]
  cbz r0,0x1013110a
  bl 0x10064c60
  movs r0,#0x0
  pop {r3,pc}
