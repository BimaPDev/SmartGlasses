; FUN_2c311ae6 @ 0x2c311ae6 size=14
  strh r5,[r0,#0x2]
  subs r7,#0x83
  lsls r6,r4,#0x3
  push {lr}
  bmi 0x2c311ae0
  str r7,[r4,r0]
  cmp r6,r3
