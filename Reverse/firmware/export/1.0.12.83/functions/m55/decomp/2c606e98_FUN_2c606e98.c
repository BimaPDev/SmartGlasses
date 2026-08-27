/* FUN_2c606e98 @ 0x2c606e98 */

void FUN_2c606e98(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short local_28;
  short local_26;
  int local_24;
  
  local_24 = *DAT_2c606f30;
  sVar1 = FUN_2c6033b4(param_1,0,0x6d,0);
  iVar4 = (int)sVar1;
  sVar2 = FUN_2c6033b4(param_1,0,0x6c);
  iVar3 = (int)sVar2;
  if ((iVar4 != 0) || (iVar3 != 0x100)) {
    sVar2 = *(short *)(param_1 + 0x14);
    local_28 = FUN_2c6033b4(param_1,0,0x6e);
    local_28 = local_28 + sVar2;
    sVar2 = *(short *)(param_1 + 0x16);
    local_26 = FUN_2c6033b4(param_1,0,0x6f);
    local_26 = local_26 + sVar2;
    if (param_3 != 0) {
      iVar4 = (int)-sVar1;
      iVar3 = (int)(short)(0x10000 / iVar3);
    }
    FUN_2c62ab04(param_2,iVar4,iVar3,&local_28);
  }
  if (*DAT_2c606f30 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

