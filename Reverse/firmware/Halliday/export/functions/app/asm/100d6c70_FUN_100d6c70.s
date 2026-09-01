; FUN_100d6c70 @ 0x100d6c70 size=28
  cmp r1,#0x3
  it cs
  mov.cs r1,#0x3
  push {r3,lr}
  ldr r3,[0x100d6c8c]
  lsls r2,r1,#0x3
  mov r1,r0
  ldr r0,[r3,#0x0]
  bl 0x1011ea40
  pop.w {r3,lr}
  b.w 0x100d6454
