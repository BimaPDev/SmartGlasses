; FUN_100b8838 @ 0x100b8838 size=42
  push {r3,lr}
  ldr r2,[0x100b8864]
  ldr r3,[0x100b8868]
  ldr r0,[0x100b886c]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x100b8870]
  ldr r1,[0x100b8874]
  bl 0x100a5b78
  ldr r3,[0x100b8878]
  mov.w r2,#0x234
  movs r1,#0x0
  mov r0,r3
  bl 0x1011ea48
  pop {r3,pc}
