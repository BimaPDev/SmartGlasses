; FUN_140a2394 @ 0x140a2394 size=36
  push {r3,r4,r5,lr}
  cbz r1,0x140a23b2
  mul r5,r0,r1
  mov r0,r5
  bl 0x140a2254
  mov r4,r0
  cbz r0,0x140a23ae
  mov r2,r5
  movs r1,#0x0
  bl 0x140e5658
  mov r0,r4
  pop {r3,r4,r5,pc}
  mov r4,r1
  mov r0,r4
  pop {r3,r4,r5,pc}
