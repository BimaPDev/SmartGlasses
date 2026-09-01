/* FUN_1011dfde @ 0x1011dfde */

undefined4 FUN_1011dfde(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_90 [132];
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < 0x81) break;
    iVar1 = FUN_1011df0c(param_1,auStack_90,0x80);
    if (iVar1 != 0x80) goto LAB_1011dffa;
    param_2 = param_2 - 0x80;
  }
  uVar2 = FUN_1011df0c(param_1,auStack_90,param_2);
  if (uVar2 == param_2) {
    return 0;
  }
LAB_1011dffa:
  *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) | 1;
  return 0;
}

