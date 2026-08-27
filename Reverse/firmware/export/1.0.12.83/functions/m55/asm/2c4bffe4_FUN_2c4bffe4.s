; FUN_2c4bffe4 @ 0x2c4bffe4 size=58
  push {r4,r5,r6,lr}
  ldr r6,[0x2c4c0020]
  mov r4,r0
  mov r5,r1
  ldr.w r0,[r6,r0,lsl #0x2]
  bl 0x2c49b050
  ldr r3,[0x2c4c0024]
  ldr.w r2,[r6,r4,lsl #0x2]
  ldr r3,[r3,#0x8]
  str.w r2,[r3,#0x94]
  dsb #0xf
  ldr r3,[0x2c4c0028]
  movs r1,#0x0
  mov.w r2,#0x200000
  strb.w r1,[r3,#0x315]
  str.w r2,[r3,#0x180]
  str r2,[r3,#0x0]
  ldr r3,[0x2c4c002c]
  str.w r5,[r3,r4,lsl #0x2]
  pop {r4,r5,r6,pc}
