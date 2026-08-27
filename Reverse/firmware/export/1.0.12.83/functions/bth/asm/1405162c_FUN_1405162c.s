; FUN_1405162c @ 0x1405162c size=20
  push {r3,lr}
  movs r0,#0x0
  bl 0x1404a1b4
  ldrb.w r0,[r0,#0x45]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
