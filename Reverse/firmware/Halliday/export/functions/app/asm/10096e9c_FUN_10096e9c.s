; FUN_10096e9c @ 0x10096e9c size=40
  ldrb.w r3,[r0,#0x54]
  push {r4,lr}
  lsls r3,r3,#0x19
  mov r4,r0
  bpl 0x10096eb2
  ldr r0,[r0,#0x30]
  cbz r0,0x10096eb2
  ldr r1,[0x10096ec4]
  bl 0x10094268
  ldrb.w r3,[r4,#0x54]
  bfc r3,#0x6,#0x1
  strb.w r3,[r4,#0x54]
  movs r3,#0x0
  str r3,[r4,#0x30]
  pop {r4,pc}
