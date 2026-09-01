; FUN_100e8644 @ 0x100e8644 size=106
  mov r3,r0
  push {r4,r5,r6,lr}
  cbnz r0,0x100e866c
  ldr r0,[0x100e86b0]
  ldr r3,[0x100e86b4]
  ldr r2,[0x100e86b8]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x4a80000
  ldr r1,[0x100e86bc]
  orr r0,r0,#0x11
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  b 0x100e8682
  ldr r5,[r0,#0x8]
  cmp r5,#0x0
  beq 0x100e8666
  ldr r4,[r0,#0xc]
  ldr.w r2,[r0,#0xc8]
  ldr.w r0,[r4,r2,lsl #0x2]
  cmp r0,r1
  bne 0x100e8684
  mov r0,r2
  pop {r4,r5,r6,pc}
  adds r0,r2,#0x1
  cmp r5,r0
  bhi 0x100e869c
  subs r0,r2,#0x1
  cmp r0,#0x0
  blt 0x100e8666
  ldr.w r2,[r4,r0,lsl #0x2]
  cmp r2,r1
  beq 0x100e86a4
  subs r0,#0x1
  b 0x100e868c
  ldr.w r6,[r4,r0,lsl #0x2]
  cmp r6,r1
  bne 0x100e86aa
  str.w r0,[r3,#0xc8]
  b 0x100e8682
  adds r0,#0x1
  b 0x100e8686
