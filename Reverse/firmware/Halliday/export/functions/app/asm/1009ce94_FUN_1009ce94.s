; FUN_1009ce94 @ 0x1009ce94 size=42
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x1009cec0]
  mov r0,r5
  bl 0x1013b700
  vldr.32 s1,[r4,#0x4]
  vldr.32 s0,[r4]
  mov r0,r5
  vcvt.f32.s32 s1,s1
  vcvt.f32.s32 s0,s0
  bl 0x1013b722
  movs r2,#0x0
  ldr r3,[0x1009cec4]
  strh r2,[r3,#0x0]
  pop {r3,r4,r5,pc}
