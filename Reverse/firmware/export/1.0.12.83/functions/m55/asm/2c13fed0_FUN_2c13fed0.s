; FUN_2c13fed0 @ 0x2c13fed0 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c13fedc
  ldrb r3,[r0,#0x0]
  cmp r3,#0xfa
  beq 0x2c13fee8
  mov r0,r4
  movs r1,#0x0
  bl 0x2c13ef5c
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[r0,#0x28]
  bl 0x2c13ef5c
  ldr r0,[r4,#0x28]
  pop {r4,pc}
