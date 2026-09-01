/* FUN_10136fce @ 0x10136fce */

undefined4 FUN_10136fce(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100dd8ec();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(byte *)(iVar1 + 0x60) = *(byte *)(iVar1 + 0x60) | 0x40;
    *param_2 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}

