; FUN_2c508088 @ 0x2c508088 size=16
  push {r4,r5,r6,lr}
  ldrb r3,[r0,#0x15]
  mov r4,r0
  cmp r3,#0x4
  bhi 0x2c508126
  tbb [pc,r3]
  pop {r4,r5,r6,pc}
