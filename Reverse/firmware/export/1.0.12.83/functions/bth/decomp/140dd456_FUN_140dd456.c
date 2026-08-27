/* FUN_140dd456 @ 0x140dd456 */

void FUN_140dd456(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  
  uVar2 = FUN_140e0cd4(param_1);
  if ((param_3 != 0) && (iVar1 = 0x6b - ((param_2 & 0x7fffffff) >> 0x14), 0 < iVar1)) {
    FUN_140e3800(uVar2,extraout_s1,0,iVar1 * 0x100000 + 0x3ff00000);
  }
  return;
}

