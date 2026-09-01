; FUN_101376b8 @ 0x101376b8 size=26
  push {r4,r5,r6,lr}
  mov r5,r1
  mov r6,r2
  bl 0x100cc614
  subs r4,r0,#0x0
  bge 0x101376ce
  cbz r6,0x101376ce
  mov r0,r5
  bl 0x100c1c90
  mov r0,r4
  pop {r4,r5,r6,pc}
