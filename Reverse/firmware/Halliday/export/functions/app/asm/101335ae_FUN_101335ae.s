; FUN_101335ae @ 0x101335ae size=40
  push {r4,lr}
  mov r4,r0
  bl 0x100c9d30
  cbz r0,0x101335d4
  ldr r3,[r4,#0x0]
  str.w r3,[r0,#0x90]
  ldrh r3,[r4,#0x4]
  strh.w r3,[r0,#0x94]
  movs r3,#0x2
  strb r3,[r0,#0x2]
  ldrb.w r3,[r0,#0xc0]
  orr r3,r3,#0x4
  strb.w r3,[r0,#0xc0]
  pop {r4,pc}
