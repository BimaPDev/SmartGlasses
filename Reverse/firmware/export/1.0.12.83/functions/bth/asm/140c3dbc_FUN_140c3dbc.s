; FUN_140c3dbc @ 0x140c3dbc size=28
  add.w r1,r1,#0x40000000
  ldr r0,[r0,#0x0]
  subs r1,#0x4
  ldr.w r0,[r0,#-0xc]
  subs r1,r1,r0
  cmp r1,r2
  push {r3,lr}
  bcs 0x140c3dd6
  mov r0,r3
  bl 0x140cb806
  pop {r3,pc}
