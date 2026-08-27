; FUN_140c9d64 @ 0x140c9d64 size=30
  push {r4,lr}
  mov r4,r0
  ldrd r3,r0,[r0,#0x0]
  cbz r3,0x140c9d80
  adds r2,r0,#0x1
  bne 0x140c9d80
  mov r0,r3
  bl 0x140d1870
  adds r3,r0,#0x1
  itt eq
  mov.eq r3,#0x0
  str.eq r3,[r4,#0x0]
  pop {r4,pc}
