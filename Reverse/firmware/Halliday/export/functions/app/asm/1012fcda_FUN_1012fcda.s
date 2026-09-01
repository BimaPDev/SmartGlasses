; FUN_1012fcda @ 0x1012fcda size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1012fcf6
  ldr r3,[r0,#0x48]
  cbnz r3,0x1012fcf6
  bl 0x100afe10
  cbnz r0,0x1012fcf4
  ldr.w r3,[r4,#0xbc]
  adds r3,#0x1
  str.w r3,[r4,#0xbc]
  pop {r4,pc}
  mvn r0,#0x15
  b 0x1012fcf4
