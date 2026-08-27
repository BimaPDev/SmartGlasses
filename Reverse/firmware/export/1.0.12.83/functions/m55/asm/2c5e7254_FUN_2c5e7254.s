; FUN_2c5e7254 @ 0x2c5e7254 size=28
  push {r4,lr}
  mov r4,r1
  bl 0x2c5e697c
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x34]
  blx r3
  cbz r0,0x2c5e726e
  ldr r0,[r0,#0x0]
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r4,pc}
