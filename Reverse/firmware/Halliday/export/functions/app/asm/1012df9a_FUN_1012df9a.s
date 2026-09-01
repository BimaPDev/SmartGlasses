; FUN_1012df9a @ 0x1012df9a size=32
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1012dfb4
  ldrh r2,[r0,#0x12]
  ldr r1,[r0,#0x14]
  ldr r0,[r0,#0x1c]
  bl 0x1011dc6a
  ldr r0,[r4,#0x1c]
  bl 0x10064150
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0x15
  b 0x1012dfb2
