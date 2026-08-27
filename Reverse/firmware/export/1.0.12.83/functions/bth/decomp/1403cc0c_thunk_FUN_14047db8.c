/* thunk_FUN_14047db8 @ 0x1403cc0c */

void thunk_FUN_14047db8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_140e56e8(DAT_14047e30,0);
  *DAT_14047e34 = iVar1;
  uVar2 = DAT_14047e3c;
  if (iVar1 == 0) {
    uVar3 = 0x14d;
    uVar2 = DAT_14047e60;
  }
  else {
    *DAT_14047e38 = 0;
    iVar1 = FUN_140e5418(uVar2,0);
    *DAT_14047e40 = iVar1;
    if (iVar1 != 0) {
      FUN_140e5658(DAT_14047e44,0,800);
      FUN_140e5658(DAT_14047e48,0,800);
      FUN_14047544();
      FUN_14047978(DAT_14047e4c,0x14);
      puVar4 = DAT_14047a04;
      do {
        if (*(char *)((int)puVar4 + 6) == '\0') {
          *puVar4 = DAT_14047e50;
          *(undefined2 *)(puVar4 + 1) = 4;
          *(undefined1 *)((int)puVar4 + 6) = 1;
          return;
        }
        puVar4 = puVar4 + 2;
      } while (puVar4 != DAT_14047a04 + 200);
      FUN_1402a6e8(4,0x9a,DAT_14047a14,DAT_14047a10,DAT_14047a08,DAT_14047a0c,unaff_r4,unaff_lr);
      return;
    }
    uVar3 = 0x869;
    uVar2 = DAT_14047e54;
  }
  FUN_1402a6e8(4,uVar3,DAT_14047e5c,DAT_14047e58,uVar2);
  return;
}

