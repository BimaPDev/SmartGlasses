; FUN_10124dd2 @ 0x10124dd2 size=26
  push {r4,lr}
  mov r4,r0
  ldr r0,[r4,#0x0]
  ldr r3,[r0,#0x8]
  cbz r3,0x10124de0
  mov r1,r4
  blx r3
  ldr r3,[r4,#0x0]
  ldr r3,[r3,#0x0]
  cbz r3,0x10124dea
  str r3,[r4,#0x0]
  b 0x10124dd6
  pop {r4,pc}
