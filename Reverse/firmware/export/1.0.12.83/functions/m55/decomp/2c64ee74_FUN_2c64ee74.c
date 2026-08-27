/* FUN_2c64ee74 @ 0x2c64ee74 */

undefined4
FUN_2c64ee74(undefined4 param_1,undefined4 param_2,ushort *param_3,ushort *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_7;
  for (; param_4 != param_3; param_3 = param_3 + iVar4) {
    uVar3 = (uint)*param_3;
    if (uVar3 - 0xd800 < 0x400) {
      if ((uint)((int)param_4 - (int)param_3) < 3) break;
      if (0x3ff < param_3[1] - 0xdc00) {
LAB_2c64eee2:
        uVar2 = 2;
        goto LAB_2c64eed4;
      }
      iVar4 = 2;
      uVar3 = param_3[1] + 0xfca02400 + uVar3 * 0x400;
    }
    else {
      if (uVar3 - 0xdc00 < 0x400) goto LAB_2c64eee2;
      iVar4 = 1;
    }
    iVar1 = func_0x2c64e992(&uStack_18,uVar3);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_2c64eed4;
    }
  }
  uVar2 = 0;
LAB_2c64eed4:
  *param_5 = param_3;
  *param_8 = uStack_18;
  return uVar2;
}

