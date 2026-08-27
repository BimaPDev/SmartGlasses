; FUN_2c4e6d48 @ 0x2c4e6d48 size=38
  push {r4,lr}
  bl 0x2c4e94fc
  ldr r3,[r0,#0x0]
  blx r3
  mov r4,r0
  bl 0x2c4e9354
  mov r3,r0
  mov r1,r4
  ldr r0,[0x2c4e6d70]
  ldr r3,[r3,#0x58]
  blx r3
  ldr r3,[0x2c4e6d74]
  ldr r0,[0x2c4e6d78]
  cmp r4,#0x0
  it ne
  mov.ne r0,r3
  pop {r4,pc}
