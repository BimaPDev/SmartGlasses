/* FUN_140c1e10 @ 0x140c1e10 */

void FUN_140c1e10(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 << 0x1d < 0) {
    iVar2 = *param_1;
    if ((2 < (uint)(param_1[1] - iVar2)) &&
       (iVar1 = FUN_140db784(iVar2,DAT_140c1e34,3,param_1[1] - iVar2,param_4), iVar1 == 0)) {
      *param_1 = iVar2 + 3;
    }
  }
  return;
}

