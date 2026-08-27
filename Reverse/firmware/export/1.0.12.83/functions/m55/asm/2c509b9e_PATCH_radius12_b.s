; PATCH_radius12_b @ 0x2c509b9e size=48
  movs r1,#0xc
  bl 0x2c62c7e8
  movs r1,#0x4c
  ldr r0,[sp,#0x14]
  bl 0x2c62c728
  ldr r0,[0x2c509c04]
  bl 0x2c5e2e8c
  str r0,[r4,#0x50]
  mov r0,r4
  strb.w r5,[r4,#0x54]
  str.w r5,[r4,#0x190]
  str.w r5,[r4,#0x19c]
  strd r5,r5,[r4,#0x194]
  strd r5,r5,[r4,#0x2c]
  add sp,#0x18
  pop {r4,r5,r6,pc}
