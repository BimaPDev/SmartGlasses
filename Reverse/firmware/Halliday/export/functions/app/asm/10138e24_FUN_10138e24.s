; FUN_10138e24 @ 0x10138e24 size=28
  push {r4,lr}
  mov r4,r0
  cbz r0,0x10138e3e
  ldr r3,[r0,#0x18]
  cbz r3,0x10138e3e
  ldr r0,[r0,#0x1c]
  cbz r0,0x10138e38
  movs r1,#0x0
  bl 0x100e8ec0
  movs r3,#0x0
  str r3,[r4,#0x0]
  str r3,[r4,#0x18]
  pop {r4,pc}
