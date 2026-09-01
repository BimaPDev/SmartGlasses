/* FUN_100e6714 @ 0x100e6714 */

undefined4 FUN_100e6714(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_100e6120(0xffffffff,0xffffffff,param_3,param_4,param_4);
  piVar1 = DAT_100e6788;
  if ((param_1 == *DAT_100e6788) && (*(byte *)(DAT_100e6788 + 3) == param_2)) {
    iVar2 = 0;
  }
  else {
    if ((param_1 != DAT_100e6788[0x87]) || (*(byte *)(DAT_100e6788 + 0x8a) != param_2)) {
      FUN_100a5b78(DAT_100e6794 | (DAT_100e6790 - DAT_100e678c) * 0x20 & 0xff00U,DAT_100e6798);
      uVar3 = 0xfffffffb;
      goto LAB_100e675e;
    }
    iVar2 = 1;
  }
  FUN_100e07b4(DAT_100e6788[iVar2 * 0x87],(char)DAT_100e6788[iVar2 * 0x87 + 2],1);
  *(undefined1 *)((int)piVar1 + iVar2 * 0x21c + 0xd) = 10;
  uVar3 = 0;
LAB_100e675e:
  FUN_100e6114();
  return uVar3;
}

