; FUN_1011f09a @ 0x1011f09a size=32
  push {r4,r5,r6,lr}
  mov r5,r1
  mov r6,r2
  movs r1,#0x0
  movs r2,#0x20
  mov r4,r0
  bl 0x1011ea48
  subs r3,r5,#0x1
  tst r5,r3
  it ne
  mov.ne r3,#0x0
  strd r5,r6,[r4,#0x10]
  str r3,[r4,#0x18]
  pop {r4,r5,r6,pc}
