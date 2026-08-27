/* FUN_140786b4 @ 0x140786b4 */

int FUN_140786b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_140786e0;
  FUN_140e5148(*(undefined4 *)(DAT_140786e0 + 4),0xffffffff,param_3,param_4,param_4);
  uVar2 = *(uint *)(iVar1 + 0x25c) & 0xffff;
  if (uVar2 < 0x50) {
    iVar3 = 0x50 - uVar2;
  }
  else {
    iVar3 = 0;
  }
  FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
  return iVar3;
}

