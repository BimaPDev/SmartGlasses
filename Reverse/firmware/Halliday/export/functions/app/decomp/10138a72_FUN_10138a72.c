/* FUN_10138a72 @ 0x10138a72 */

uint FUN_10138a72(undefined4 param_1,uint param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x200 - *param_3 & 0xffff;
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    iVar2 = *param_3 + 4;
    FUN_1011ea40((int)param_3 + iVar2,param_1,uVar1,iVar2,param_4);
    *param_3 = *param_3 + (short)uVar1;
  }
  return uVar1;
}

