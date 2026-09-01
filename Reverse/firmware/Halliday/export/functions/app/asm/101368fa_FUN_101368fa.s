; FUN_101368fa @ 0x101368fa size=36
  push {r4,r5,r6,lr}
  mov r6,r0
  bl 0x10136444
  mov r5,r0
  bl 0x10136610
  sxtb r4,r0
  strb r4,[r6,#0x0]
  mov r0,r5
  bl 0x10136462
  cmp r4,#0x7f
  mov.w r0,#0xffffffff
  it ne
  mov.ne r0,#0x0
  pop {r4,r5,r6,pc}
