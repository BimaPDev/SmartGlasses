; FUN_2c668964 @ 0x2c668964 size=42
  push {r3,r4,r5,lr}
  ldr r5,[0x2c668984]
  ldr r4,[0x2c668988]
  subs r4,r4,r5
  asrs r4,r4,#0x2
  cbnz r4,0x2c668978
  pop.w {r3,r4,r5,lr}
  b.w 0x2c673948
  subs r4,#0x1
  ldr.w r3,[r5,r4,lsl #0x2]
  blx r3
  b 0x2c66896e
  push {r3,r4,r5,r6,r7,lr}
  nop
  pop {r3,r4,r5,r6,r7}
  pop {r3}
  mov lr,r3
  bx lr
