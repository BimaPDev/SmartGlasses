; FUN_2c4e6720 @ 0x2c4e6720 size=30
  cmp r0,#0x2
  ble 0x2c4e6734
  ldr r3,[0x2c4e6740]
  subs r0,#0x3
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x2c4e6738
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x10]
  bx r3
  movs r0,#0x0
  bx lr
  mov.w r0,#0xffffffff
  bx lr
