; FUN_1007f98c @ 0x1007f98c size=60
  push {r4,r5,r6,lr}
  movs r6,#0x1c
  ldr r5,[r0,#0xc]
  ldr r4,[r5,#0x74]
  ldrb r3,[r4,#0x0]
  mla r3,r6,r3,r5
  ldr r3,[r3,#0x34]
  cmp r3,r1
  bcs 0x1007f9bc
  ldr r3,[r0,#0x0]
  ldrb r2,[r3,#0x10]
  cbz r2,0x1007f9b6
  ldr r4,[r3,#0xc]
  cbz r4,0x1007f9b6
  mov r3,r1
  movw r2,#0x193
  ldr r1,[0x1007f9c8]
  ldr r0,[0x1007f9cc]
  blx r4
  mov.w r0,#0x2000
  b 0x1007f9c6
  movs r0,#0x1
  ldr r3,[r4,#0x8]
  ldrh.w r3,[r3,r1,lsl #0x1]
  strh r3,[r2,#0x0]
  pop {r4,r5,r6,pc}
