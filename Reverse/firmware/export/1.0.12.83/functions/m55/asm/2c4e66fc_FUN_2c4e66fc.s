; FUN_2c4e66fc @ 0x2c4e66fc size=30
  cmp r0,#0x2
  ble 0x2c4e6710
  ldr r3,[0x2c4e671c]
  subs r0,#0x3
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x2c4e6714
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0xc]
  bx r3
  movs r0,#0x1
  bx lr
  mov.w r0,#0xffffffff
  bx lr
