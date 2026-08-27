; FUN_2c4ba688 @ 0x2c4ba688 size=42
  push {r4,lr}
  mov r4,r0
  bl 0x2c674568
  cbnz r0,0x2c4ba6ac
  ldr r2,[0x2c4ba6b4]
  movw r1,#0xac44
  movw r0,#0xbb80
  udiv r3,r2,r4
  mul r4,r3,r4
  cmp r4,r2
  it ne
  mov.ne r0,r1
  pop {r4,pc}
  movw r0,#0xc65d
  pop {r4,pc}
