/* FUN_100a68d8 @ 0x100a68d8 */

int FUN_100a68d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_100a694c;
  iVar5 = param_1;
  if ((param_1 == 0) && (iVar5 = param_2, param_2 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    while (uVar2 = FUN_100545e4(*(undefined4 *)(iVar5 + 0x2c),DAT_100a694c,0x80), uVar2 != 0) {
      if (uVar2 < 0x80) {
        FUN_1011ea48(uVar2 + iVar1,0,0x80 - uVar2);
      }
      uVar2 = uVar2 + 3 & 0xfffffffc;
      if ((param_1 != 0) && ((int)((uint)*(byte *)(param_1 + 0x28) << 0x1d) < 0)) {
        FUN_100a6ab8(param_1,iVar1,uVar2,(uint)*(byte *)(param_1 + 0x28),param_4);
      }
      if ((param_2 != 0) && (iVar3 = (uint)*(byte *)(param_2 + 0x28) << 0x1d, iVar3 < 0)) {
        FUN_100a6ab8(param_2,iVar1,uVar2,iVar3,param_4);
      }
      iVar4 = iVar4 + uVar2;
    }
  }
  return iVar4;
}

