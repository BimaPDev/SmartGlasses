/* FUN_2c006918 @ 0x2c006918 */

void FUN_2c006918(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  
  *(uint *)(param_2 + 0x70) = param_3 & 0xffffffe3;
  if (param_4 == 0) {
    *DAT_2c00694c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_4);
  }
  return;
}

