; FUN_100c80a0 @ 0x100c80a0 size=28
  push {r3,r4,r5,lr}
  mov r5,r1
  ldr r1,[0x100c80bc]
  ldr r3,[r5,#0x0]
  ldrb r4,[r1,#0xe]
  cmp r4,r3
  it cs
  mov.cs r4,r3
  rsb r2,r4,r4, lsl #0x3
  bl 0x1011ea40
  str r4,[r5,#0x0]
  pop {r3,r4,r5,pc}
