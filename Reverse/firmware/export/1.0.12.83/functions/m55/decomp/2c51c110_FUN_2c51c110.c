/* FUN_2c51c110 @ 0x2c51c110 */

void FUN_2c51c110(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_64 [64];
  int iStack_24;
  
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  iStack_24 = *DAT_2c51c0ec;
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c51c0fc,0xac,DAT_2c51c104,DAT_2c51c100,DAT_2c51c108);
  }
  piVar2 = (int *)FUN_2c5efbb4(iVar1);
  iVar1 = FUN_2c5efbb0(iVar1);
  if (iVar1 == 0) {
    iVar7 = *piVar2;
    iVar1 = piVar2[1];
  }
  else {
    iVar7 = *(int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (iVar1 == 0) {
    iVar3 = 1;
    iVar1 = DAT_2c51c10c;
  }
  else {
    iVar3 = FUN_2c66c4ec(iVar1);
  }
  if (iVar7 == 0) {
    iVar7 = DAT_2c51c10c;
  }
  registry_lookup(DAT_2c51c0f0);
  iVar4 = FUN_2c66c4ec();
  if ((uint)(iVar4 + iVar3) < 0x40) {
    FUN_2c674668(auStack_64,iVar1,iVar3);
    uVar5 = registry_lookup(DAT_2c51c0f0);
    FUN_2c674668(auStack_64 + iVar3,uVar5,iVar4);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    auStack_64[iVar4 + iVar3] = 0;
    FUN_2c4fee2c(uVar5,auStack_64);
    FUN_2c4ff234(*(undefined4 *)(param_1 + 0xc),iVar7,0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = registry_lookup(DAT_2c51c0f4);
    FUN_2c638730(uVar6,uVar5);
    if (*DAT_2c51c0ec == iStack_24) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c51c0fc,0xc6,DAT_2c51c104,DAT_2c51c100,DAT_2c51c0f8);
}

