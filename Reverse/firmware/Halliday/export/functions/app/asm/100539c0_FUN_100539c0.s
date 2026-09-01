; FUN_100539c0 @ 0x100539c0 size=36
  push {r4,r5,lr}
  movs r5,#0x0
  sub sp,#0x14
  strd r0,r1,[sp,#0x4]
  mov r4,r0
  add r1,sp,#0x4
  ldr r0,[0x100539e4]
  str r5,[sp,#0xc]
  bl 0x1011a066
  ldrd r3,r0,[sp,#0x8]
  cmp r0,r3
  it lt
  strb.lt r5,[r4,r0]
  add sp,#0x14
  pop {r4,r5,pc}
