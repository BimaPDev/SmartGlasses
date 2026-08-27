; FUN_14005918 @ 0x14005918 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x14005924
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf1
  beq 0x14005930
  mov r0,r4
  movs r1,#0x0
  bl 0x14003bcc
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[r0,#0x34]
  bl 0x14003bcc
  ldr r0,[r4,#0x34]
  pop {r4,pc}
