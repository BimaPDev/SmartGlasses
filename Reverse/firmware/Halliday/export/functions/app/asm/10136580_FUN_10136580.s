; FUN_10136580 @ 0x10136580 size=18
  push {r3,lr}
  bl 0x10136574
  movs r1,#0x0
  bl 0x100d45f8
  cbz r0,0x10136590
  ldr r0,[r0,#0xc]
  pop {r3,pc}
