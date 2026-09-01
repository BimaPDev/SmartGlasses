; FUN_100ee9e0 @ 0x100ee9e0 size=50
  push {r4,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x100eea14]
  bl 0x1011dbf4
  ldr r3,[0x100eea18]
  ldrb.w r4,[r3,#0x50]
  cbz r4,0x100eea06
  subs r4,#0x1
  lsls r2,r4,#0x4
  add.w r4,r3,r4, lsl #0x4
  ldr r3,[r3,r2]
  cbz r3,0x100eea0e
  bl 0x100ef7a4
  mov r4,r0
  bl 0x100ee690
  mov r0,r4
  pop {r4,pc}
  ldrh r4,[r4,#0xc]
  b 0x100eea06
