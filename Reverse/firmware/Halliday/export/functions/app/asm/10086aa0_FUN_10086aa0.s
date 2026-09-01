; FUN_10086aa0 @ 0x10086aa0 size=36
  cmp r0,#0x4
  bhi 0x10086ac6
  tbb [pc,r0]
  ldr r3,[0x10086acc]
  movs r0,#0x1
  str r3,[r1,#0x0]
  bx lr
  ldr r3,[0x10086ad0]
  b 0x10086ab0
  ldr r3,[0x10086ad4]
  b 0x10086ab0
  ldr r3,[0x10086ad8]
  b 0x10086ab0
  ldr r3,[0x10086adc]
  b 0x10086ab0
  movs r0,#0x0
  bx lr
