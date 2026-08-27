; FUN_140e05b0 @ 0x140e05b0 size=28
  mov r3,r0
  push {r4,lr}
  cbz r2,0x140e05c8
  movs r0,#0x0
  ldrb r4,[r1,r0]
  str.w r4,[r3,r0,lsl #0x2]
  cbz r4,0x140e05c6
  adds r0,#0x1
  cmp r0,r2
  bne 0x140e05b8
  pop {r4,pc}
  mov r0,r2
  b 0x140e05c6
