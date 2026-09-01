; FUN_101367a2 @ 0x101367a2 size=22
  push {r3,lr}
  bl 0x10136622
  cbz r0,0x101367b6
  ldrb r0,[r0,#0x0]
  and r0,r0,#0xf
  subs r3,r0,#0x2
  rsbs r0,r3
  adcs r0,r3
  pop {r3,pc}
