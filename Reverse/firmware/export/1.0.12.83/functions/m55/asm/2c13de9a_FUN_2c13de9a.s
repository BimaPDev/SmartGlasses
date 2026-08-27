; FUN_2c13de9a @ 0x2c13de9a size=30
  push {r4,lr}
  ldr r3,[0x2c13debc]
  ldrb r4,[r3,#0x0]
  cbnz r4,0x2c13deaa
  mov r0,r4
  pop {r4,pc}
  cmp r4,r1
  it cs
  mov.cs r4,r1
  ldr r1,[0x2c13dec0]
  mov r2,r4
  bl 0x2c13e7f0
  mov r0,r4
  pop {r4,pc}
