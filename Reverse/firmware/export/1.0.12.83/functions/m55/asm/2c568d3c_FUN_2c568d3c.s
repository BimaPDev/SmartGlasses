; FUN_2c568d3c @ 0x2c568d3c size=32
  push {r3,r4,r5,lr}
  add.w r3,r0,#0x18
  ldr r1,[r0,#0x10]
  ldr r5,[0x2c568d5c]
  mov r4,r0
  ldr r2,[0x2c568d60]
  cmp r1,r3
  strd r5,r2,[r0,#0x0]
  beq 0x2c568d58
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r3,r4,r5,pc}
