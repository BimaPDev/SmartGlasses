; FUN_14081f4c @ 0x14081f4c size=40
  push {r3,lr}
  ldr.w r3,[r1,#0xe8]
  lsls r2,r3,#0x16
  bmi 0x14081f5e
  pop.w {r3,lr}
  b.w 0x140879e0
  ldr.w r3,[r1,#0xe4]
  lsls r3,r3,#0x18
  bpl 0x14081f56
  mov r0,r1
  bl 0x14081e88
  eor r0,r0,#0x1
  sxtb r0,r0
  pop {r3,pc}
