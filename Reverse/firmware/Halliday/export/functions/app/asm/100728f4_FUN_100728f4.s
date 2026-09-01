; FUN_100728f4 @ 0x100728f4 size=18
  ldr r3,[0x10072908]
  ldr r0,[r3,#0x0]
  cbz r0,0x10072904
  ldrb.w r0,[r0,#0x102]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
