; FUN_1012d812 @ 0x1012d812 size=26
  push {r3,lr}
  bl 0x100a1c10
  cbz r0,0x1012d822
  ldrb r3,[r0,#0x0]
  orr r3,r3,#0x2
  strb r3,[r0,#0x0]
  movs r0,#0x1
  pop.w {r3,lr}
  b.w 0x1011aabe
