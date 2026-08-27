; FUN_2c6519a2 @ 0x2c6519a2 size=60
  push {r0,r1,r2,r4,r5,lr}
  ldr r2,[r0,#0x0]
  mov r5,r1
  mov r4,r0
  ldr.w r3,[r2,#-0xc]
  adds r1,r3,#0x1
  ldr.w r3,[r2,#-0x8]
  cmp r1,r3
  bhi 0x2c6519c0
  ldr.w r3,[r2,#-0x4]
  cmp r3,#0x0
  ble 0x2c6519ca
  mov r0,r4
  str r1,[sp,#0x4]
  bl 0x2c651802
  ldr r1,[sp,#0x4]
  ldr r0,[r4,#0x0]
  ldr.w r3,[r0,#-0xc]
  str.w r5,[r0,r3,lsl #0x2]
  subs r0,#0xc
  bl 0x2c6514b0
  add sp,#0xc
  pop {r4,r5,pc}
