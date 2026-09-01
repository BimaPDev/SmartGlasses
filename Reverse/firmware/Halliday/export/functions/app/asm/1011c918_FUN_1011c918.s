; FUN_1011c918 @ 0x1011c918 size=24
  movs r3,#0x0
  push {r4,lr}
  sxtb r4,r3
  cmp r2,r4
  bgt 0x1011c924
  pop {r4,pc}
  ldr.w r4,[r1,r3,lsl #0x2]
  str.w r4,[r0,r3,lsl #0x2]
  adds r3,#0x1
  b 0x1011c91c
