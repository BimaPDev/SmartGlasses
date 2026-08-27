/* FUN_2c472278 @ 0x2c472278 */

int FUN_2c472278(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = FUN_2c4732c8(param_1,param_4);
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0);
    iVar3 = FUN_2c4731dc(iVar2);
    iVar5 = param_2 + param_3 * 0xc;
    uVar4 = iVar3 + *(int *)(iVar5 + 0x1c);
    *(uint *)(iVar5 + 0x1c) = uVar4;
    *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
    uVar6 = *(uint *)(iVar5 + 0x24);
    if (*(uint *)(iVar5 + 0x24) < uVar4) {
      uVar6 = uVar4;
    }
    *(uint *)(iVar5 + 0x24) = uVar6;
    uVar6 = 0;
    iVar3 = param_2;
    do {
      piVar1 = (int *)(iVar3 + 0x1c);
      iVar3 = iVar3 + 0xc;
      uVar6 = uVar6 + *piVar1;
    } while (iVar3 != param_2 + 0x90);
    uVar4 = *(uint *)(param_2 + 0x14);
    if (*(uint *)(param_2 + 0x14) < uVar6) {
      uVar4 = uVar6;
    }
    *(uint *)(param_2 + 0x14) = uVar4;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2ac,DAT_2c472310,DAT_2c472314,DAT_2c47230c,DAT_2c472308,param_4);
}

