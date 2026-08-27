/* FUN_2c48fde8 @ 0x2c48fde8 */

bool FUN_2c48fde8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_2c48fe60;
  iVar2 = DAT_2c48fe60 + param_1 * 0x18;
  if (*(int *)(iVar2 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x8a,DAT_2c48fe70,DAT_2c48fe6c,DAT_2c48fe68,DAT_2c48fe64);
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  if (*(uint *)(iVar2 + 8) < (uint)(iVar1 + param_3)) {
    param_3 = *(uint *)(iVar2 + 8) - iVar1;
  }
  FUN_2c674668(param_2,iVar1 + *(int *)(iVar2 + 4),param_3);
  iVar3 = iVar3 + param_1 * 0x18;
  param_3 = param_3 + *(int *)(iVar3 + 0x14);
  *(int *)(iVar3 + 0x14) = param_3;
  if (param_1 - 0x12U < 2) {
    return *(int *)(iVar3 + 8) == param_3;
  }
  return false;
}

