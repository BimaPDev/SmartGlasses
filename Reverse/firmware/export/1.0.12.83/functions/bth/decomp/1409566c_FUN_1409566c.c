/* FUN_1409566c @ 0x1409566c */

undefined1 FUN_1409566c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = DAT_140956e8;
  *(undefined1 *)(DAT_140956e8 + 9) = 0;
  FUN_140755e4();
  uVar3 = DAT_140956f4;
  uVar2 = DAT_140956f0;
  piVar7 = *(int **)(iVar1 + 4);
  if (piVar7 == (int *)0x0) {
    FUN_1407561c();
    uVar4 = 0;
  }
  else {
    piVar6 = (int *)*piVar7;
    if (piVar7 != piVar6) {
      uVar4 = *(undefined1 *)((int)piVar6 + 0x4b);
      uVar5 = FUN_140853a8(uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,uVar3,uVar2,piVar6,uVar4,uVar5);
    }
    FUN_1407561c();
    uVar4 = *(undefined1 *)(iVar1 + 9);
  }
  return uVar4;
}

