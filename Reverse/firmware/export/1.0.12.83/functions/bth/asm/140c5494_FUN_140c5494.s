; FUN_140c5494 @ 0x140c5494 size=34
  push {r0,r1,r2,r4,r5,lr}
  ldr r5,[r0,#0x4]
  cmp r1,r5
  bls 0x140c54a8
  mov r2,r1
  mov r3,r5
  ldr r1,[0x140c54b8]
  ldr r0,[0x140c54bc]
  bl 0x140cb80c
  str r3,[sp,#0x0]
  mov r3,r2
  movs r2,#0x0
  bl 0x140d1b58
  add sp,#0xc
  pop {r4,r5,pc}
