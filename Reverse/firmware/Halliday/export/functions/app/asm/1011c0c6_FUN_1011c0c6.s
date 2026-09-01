; FUN_1011c0c6 @ 0x1011c0c6 size=46
  push {r0,r1,r2,r3,r4,lr}
  cbnz r0,0x1011c0ea
  bl 0x10060e60
  movw r3,#0xff01
  strh.w r3,[sp,#0xc]
  movs r3,#0x1
  movs r0,#0xda
  mov r1,r3
  str r3,[sp,#0x0]
  add r2,sp,#0xc
  bl 0x10060908
  add sp,#0x14
  pop.w pc
  cmp r0,#0x1
  bne 0x1011c0e4
  bl 0x100609e8
  b 0x1011c0e4
