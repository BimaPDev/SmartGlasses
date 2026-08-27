/* FUN_2c629d00 @ 0x2c629d00 */

void FUN_2c629d00(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_28;
  uint local_24;
  
  puVar2 = DAT_2c629dd0;
  local_24 = *DAT_2c629dbc;
  if (param_2 == 0) {
    uVar7 = 0xffffffff;
  }
  else if (param_1 == 0) {
    uVar7 = 0xfffffffe;
  }
  else {
    local_28 = 0;
    uVar4 = FUN_2c66c4ec(param_2,param_2,param_3,0);
    puVar3 = DAT_2c629dd4;
    iVar8 = 0;
    while( true ) {
      uVar10 = (*(code *)*puVar2)(param_2 + iVar8);
      if (uVar4 < (uint)((int)uVar10 + local_28)) break;
      iVar5 = (*(code *)*puVar3)(param_2,&local_28);
      iVar9 = param_1;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c629dc8,0x8f,DAT_2c629dc4,DAT_2c629dcc,local_28);
      }
      while (iVar6 = FUN_2c629c2c(*(undefined4 *)(iVar9 + 0x10),iVar5), iVar8 = local_28, iVar6 == 0
            ) {
        piVar1 = (int *)(iVar9 + 0x14);
        iVar9 = *piVar1;
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c629dc8,0x93,DAT_2c629dc4,DAT_2c629dc0,iVar5);
        }
      }
    }
    uVar7 = 1;
    param_2 = (int)((ulonglong)uVar10 >> 0x20);
  }
  if ((*DAT_2c629dbc ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar7,param_2,*DAT_2c629dbc ^ local_24,0);
  }
  return;
}

