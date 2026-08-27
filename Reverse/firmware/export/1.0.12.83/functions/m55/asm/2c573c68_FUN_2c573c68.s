; FUN_2c573c68 @ 0x2c573c68 size=16
  ldrd r0,r3,[r0,#0x10]
  subs r0,r3,r0
  cmp r0,#0x38
  ite le
  asr.le r0,r0,#0x2
  mov.gt r0,#0x10
  bx lr
