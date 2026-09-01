; FUN_1011c756 @ 0x1011c756 size=26
  movs r3,#0x0
  add.w r1,r0,r1, lsl #0x2
  cmp r0,r1
  bcc 0x1011c762
  bx lr
  ldr.w r2,[r1,#-0x4]!
  orr.w r3,r3,r2, lsr #0x1
  str r3,[r1,#0x0]
  lsls r3,r2,#0x1f
  b 0x1011c75c
