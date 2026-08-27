; FUN_2c54c7f0 @ 0x2c54c7f0 size=28
  push {r4,lr}
  mov r4,r0
  bl 0x2c48e738
  ldr r1,[0x2c54c80c]
  vldr.32 s0,[r4,#0x4]
  mov r4,r0
  vcvt.f64.s32 d0,s0
  bl 0x2c48e518
  mov r0,r4
  pop {r4,pc}
