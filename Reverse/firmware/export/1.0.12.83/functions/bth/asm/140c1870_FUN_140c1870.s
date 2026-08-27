; FUN_140c1870 @ 0x140c1870 size=28
  ldr r3,[0x140c188c]
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  ldr r0,[r0,#0x8]
  cbz r0,0x140c1882
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
