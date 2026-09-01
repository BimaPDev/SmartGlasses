; FUN_1012d1cc @ 0x1012d1cc size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  cbz r0,0x1012d1d8
  bl 0x1012d1f4
  ldr r0,[r4,#0x0]
  cbz r0,0x1012d1e0
  bl 0x1012d1f4
  movs r0,#0x0
  ldr r3,[r4,#0x8]
  strd r0,r0,[r4,#0x0]
  lsrs r3,r3,#0x13
  lsls r3,r3,#0x13
  str r3,[r4,#0x8]
  pop {r4,pc}
