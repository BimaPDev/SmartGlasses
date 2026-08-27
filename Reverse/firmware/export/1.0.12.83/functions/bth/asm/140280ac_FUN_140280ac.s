; FUN_140280ac @ 0x140280ac size=56
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr r6,[0x140280e4]
  mov r5,r1
  ldr.w r0,[r6,r0,lsl #0x2]
  bl 0x14039b24
  ldr r3,[0x140280e8]
  ldr.w r2,[r6,r4,lsl #0x2]
  ldr r3,[r3,#0x8]
  str r2,[r3,#0x68]
  dsb #0xf
  movs r1,#0x0
  mov.w r2,#0x400
  ldr r3,[0x140280ec]
  strb.w r1,[r3,#0x30a]
  str.w r2,[r3,#0x180]
  str r2,[r3,#0x0]
  ldr r3,[0x140280f0]
  str.w r5,[r3,r4,lsl #0x2]
  pop {r4,r5,r6,pc}
