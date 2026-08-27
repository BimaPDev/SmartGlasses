; FUN_14069108 @ 0x14069108 size=54
  push {r4,r5,r6,lr}
  ldr r6,[0x14069158]
  add.w r4,r0,#0x22
  ldr.w r3,[r6,r4,lsl #0x2]
  mov r5,r1
  cbz r3,0x14069122
  ldr.w r3,[r3,r5,lsl #0x2]
  cbz r3,0x1406913c
  ldrh r0,[r3,#0xc]
  pop {r4,r5,r6,pc}
  ldr r3,[0x1406915c]
  mov.w r2,#0x508
  movs r0,#0x42
  ldr r1,[0x14069160]
  bl 0x1402a64c
  movw r2,#0x509
  ldr r3,[0x1406915c]
  ldr r1,[0x14069160]
  movs r0,#0x42
  bl 0x1402a64c
