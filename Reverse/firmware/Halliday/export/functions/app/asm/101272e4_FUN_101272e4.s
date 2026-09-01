; FUN_101272e4 @ 0x101272e4 size=34
  push {r3,lr}
  cbnz r0,0x10124344
  bl 0x10092f04
  ldr r0,[r0,#0x8]
  pop {r3,pc}
  push {r3,lr}
  cbz r0,0x101272f4
  bl 0x1008af34
  pop.w {r3,lr}
  b.w 0x1012433c
  bl 0x10092f04
  b 0x101272ec
