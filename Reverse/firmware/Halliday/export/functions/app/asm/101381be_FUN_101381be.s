; FUN_101381be @ 0x101381be size=38
  push {r4,lr}
  mov r4,r0
  adds r0,#0x10
  bl 0x1013cb84
  movs r3,#0x0
  add.w r2,r4,#0x58
  ldaex r1,[r2]
  stlex r0,r3,[r2]
  cmp r0,#0x0
  bne 0x101381ce
  strh.w r3,[r4,#0x50]
  strh.w r3,[r4,#0x54]
  pop {r4,pc}
