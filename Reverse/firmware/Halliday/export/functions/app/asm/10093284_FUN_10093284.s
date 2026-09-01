; FUN_10093284 @ 0x10093284 size=40
  movs r2,#0x44
  push {r4,lr}
  movs r1,#0x0
  mov r4,r0
  bl 0x1011ea48
  movs r3,#0x64
  mov.w r2,#0x1f4
  strd r3,r2,[r4,#0x28]
  movs r3,#0x1
  strh.w r3,[r4,#0x40]
  ldr r3,[0x100932ac]
  str r3,[r4,#0x1c]
  movs r3,#0x1
  strb.w r3,[r4,#0x42]
  pop {r4,pc}
