; FUN_2c612998 @ 0x2c612998 size=36
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  cbz r0,0x2c6129ae
  ldr r3,[r0,#0xc]
  cbz r3,0x2c6129a8
  mov r1,r4
  blx r3
  ldrb r3,[r4,#0x10]
  cmp r3,#0x1
  beq 0x2c6129b0
  pop {r4,pc}
  ldr r0,[r4,#0x4]
  bl 0x2c62bea8
  movs r3,#0x0
  str r3,[r4,#0x4]
  pop {r4,pc}
