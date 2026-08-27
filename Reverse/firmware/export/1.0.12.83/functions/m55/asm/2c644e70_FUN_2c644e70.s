; FUN_2c644e70 @ 0x2c644e70 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c644e7c
  ldrb r3,[r0,#0x0]
  cmp r3,#0xfa
  beq 0x2c644e88
  mov r0,r4
  movs r1,#0x0
  bl 0x2c643be0
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[r0,#0x28]
  bl 0x2c643be0
  ldr r0,[r4,#0x28]
  pop {r4,pc}
