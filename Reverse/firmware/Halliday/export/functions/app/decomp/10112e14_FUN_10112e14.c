/* FUN_10112e14 @ 0x10112e14 */

void FUN_10112e14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *extraout_r3;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = DAT_10112e68;
  puVar8 = *(undefined4 **)(DAT_10112e64 + (param_1 + 1) * 4);
  puVar5 = DAT_10112e64;
  for (puVar6 = *(undefined4 **)(DAT_10112e64 + param_1 * 4); puVar6 < puVar8; puVar6 = puVar6 + 2)
  {
    puVar7 = (undefined4 *)puVar6[1];
    uVar2 = uVar1;
    puVar4 = puVar6;
    if (puVar7 != (undefined4 *)0x0) {
      uVar2 = DAT_10112e6c;
      puVar4 = (undefined4 *)*puVar7;
    }
    FUN_10119dc2(uVar2,puVar4,*puVar6,puVar5,param_4);
    iVar3 = (*(code *)*puVar6)(puVar7);
    puVar5 = extraout_r3;
    if (puVar7 != (undefined4 *)0x0) {
      puVar5 = (undefined1 *)puVar7[3];
      if (iVar3 != 0) {
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (0xfe < iVar3) {
          iVar3 = 0xff;
        }
        *puVar5 = (char)iVar3;
      }
      puVar5[1] = puVar5[1] | 1;
    }
  }
  return;
}

