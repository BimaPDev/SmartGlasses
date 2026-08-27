; FUN_2c6459b8 @ 0x2c6459b8 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c6459ce
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf1
  bne 0x2c6459ce
  ldr r1,[r0,#0x4]
  bl 0x2c643a54
  ldr r0,[r4,#0x4]
  pop {r4,pc}
  mov r0,r4
  movs r1,#0x0
  bl 0x2c643a54
  movs r0,#0x0
  pop {r4,pc}
