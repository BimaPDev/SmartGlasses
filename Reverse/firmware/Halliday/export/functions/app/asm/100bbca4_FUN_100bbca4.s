; FUN_100bbca4 @ 0x100bbca4 size=46
  push {r4,r5,r6,lr}
  mov r6,r0
  bl 0x101368fa
  mov r5,r0
  ldr r4,[0x100bbcd4]
  ldr r0,[0x100bbcd8]
  ldrsb.w r3,[r6,#0x0]
  subs r4,r4,r0
  lsls r4,r4,#0x5
  and r4,r4,#0xff00
  orr r0,r4,#0x1580000
  ldr r2,[0x100bbcdc]
  ldr r1,[0x100bbce0]
  orr r0,r0,#0x31
  bl 0x100a5b78
  mov r0,r5
  pop {r4,r5,r6,pc}
