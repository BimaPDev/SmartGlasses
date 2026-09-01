/* FUN_100e7618 @ 0x100e7618 */

undefined4 FUN_100e7618(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x14);
  if (2 < uVar4) {
    uVar4 = 3;
  }
  uVar2 = 0;
  iVar5 = DAT_100e7670 + uVar4 * 0x10;
  for (iVar1 = DAT_100e7670; iVar1 != iVar5; iVar1 = iVar1 + 0x10) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 4) = uVar3;
    uVar4 = FUN_10131f56(iVar1,0,0,uVar3,param_4);
    uVar2 = uVar2 | uVar4;
  }
  if (uVar2 == 0) {
    *DAT_100e7680 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = 0;
  }
  else {
    FUN_100a5b78((DAT_100e7678 - DAT_100e7674) * 0x20 & 0xff00U | 0x750011,DAT_100e767c);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

