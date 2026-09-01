; FUN_1012d77a @ 0x1012d77a size=24
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x54]
  cbz r0,0x1012d78c
  bl 0x1012d1f4
  movs r0,#0x0
  str r0,[r4,#0x54]
  pop {r4,pc}
  mvn r0,#0xc
  b 0x1012d78a
