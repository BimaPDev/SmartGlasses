; FUN_2c4e6d7c @ 0x2c4e6d7c size=40
  push {r4,lr}
  bl 0x2c4e94fc
  ldr r3,[r0,#0x18]
  blx r3
  mov r4,r0
  bl 0x2c4e9354
  mov r3,r0
  mov r1,r4
  ldr r0,[0x2c4e6da4]
  ldr r3,[r3,#0x58]
  blx r3
  ldr r3,[0x2c4e6da8]
  ldr r0,[0x2c4e6dac]
  bics.w r0,r0,r4, asr #32
  it cs
  mov.cs r0,r3
  pop {r4,pc}
