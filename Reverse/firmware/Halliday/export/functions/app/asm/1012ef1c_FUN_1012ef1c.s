; FUN_1012ef1c @ 0x1012ef1c size=32
  push {r0,r1,r2,lr}
  ldr r3,[r0,#0x0]
  movs r2,#0x2
  movs r1,#0x1
  add r0,sp,#0x4
  bl 0x100ae620
  ldrb.w r0,[sp,#0x4]
  ldrb.w r3,[sp,#0x5]
  orr.w r0,r3,r0, lsl #0x8
  add sp,#0xc
  pop.w pc
