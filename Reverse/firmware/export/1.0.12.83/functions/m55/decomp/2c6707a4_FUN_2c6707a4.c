/* FUN_2c6707a4 @ 0x2c6707a4 */

int FUN_2c6707a4(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar1 = 0;
  puVar5 = (uint *)(param_2 + 0x14);
  do {
    iVar1 = iVar1 + 1;
    uVar2 = param_3 * (*puVar5 & 0xffff) + param_4;
    uVar3 = param_3 * (*puVar5 >> 0x10) + (uVar2 >> 0x10);
    param_4 = uVar3 >> 0x10;
    *puVar5 = (uVar2 & 0xffff) + uVar3 * 0x10000;
    puVar5 = puVar5 + 1;
  } while (iVar1 < iVar4);
  iVar1 = param_2;
  if (param_4 != 0) {
    if (*(int *)(param_2 + 8) <= iVar4) {
      iVar1 = FUN_2c6706e0(param_1,*(int *)(param_2 + 4) + 1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c668484(DAT_2c670830,0xb5,0,DAT_2c67082c);
      }
      FUN_2c674668(iVar1 + 0xc,param_2 + 0xc,(*(int *)(param_2 + 0x10) + 2) * 4);
      FUN_2c670760(param_1,param_2);
    }
    *(uint *)(iVar1 + iVar4 * 4 + 0x14) = param_4;
    *(int *)(iVar1 + 0x10) = iVar4 + 1;
  }
  return iVar1;
}

