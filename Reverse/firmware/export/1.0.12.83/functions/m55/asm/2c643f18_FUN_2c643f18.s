; FUN_2c643f18 @ 0x2c643f18 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c643f2e
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf5
  bne 0x2c643f2e
  ldr r1,[r0,#0x4]
  bl 0x2c643b14
  ldr r0,[r4,#0x4]
  pop {r4,pc}
  mov r0,r4
  movs r1,#0x0
  bl 0x2c643b14
  movs r0,#0x0
  pop {r4,pc}
