; FUN_100d6c3c @ 0x100d6c3c size=48
  cmp r1,#0x3
  it cs
  mov.cs r1,#0x3
  push {r3,r4,r5,lr}
  ldr r3,[0x100d6c6c]
  lsls r2,r1,#0x3
  mov r4,r1
  ldr r1,[r3,#0x0]
  mov r5,r0
  bl 0x1011ea40
  movs r3,#0x0
  mov r0,r3
  cmp r3,r4
  blt 0x100d6c5c
  pop {r3,r4,r5,pc}
  add.w r2,r5,r3, lsl #0x3
  ldrb r2,[r2,#0x6]
  adds r3,#0x1
  lsls r2,r2,#0x1f
  it mi
  add.mi r0,#0x1
  b 0x100d6c56
