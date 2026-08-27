/* FUN_2c54fa3c @ 0x2c54fa3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54fa3c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = _LAB_2c54fab0;
  iVar5 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54fab0;
  if (*(int *)(iVar5 + 0x40) != iVar5 + 0x48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  iVar3 = *(int *)(iVar5 + 0x34);
  iVar4 = *(int *)(iVar5 + 0x38);
  if (iVar3 != iVar4) {
    iVar2 = iVar3 + 8;
    do {
      iVar3 = iVar3 + 0x18;
      bVar6 = iVar2 != *(int *)(iVar2 + -8);
      iVar2 = iVar2 + 0x18;
      if (bVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar4 != iVar3);
    iVar4 = *(int *)(iVar5 + 0x34);
  }
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar4,uVar1,iVar5 + 0x48,param_4);
  }
  if (*(int *)(iVar5 + 0x1c) != iVar5 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar5 + 4) != iVar5 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar5;
}

