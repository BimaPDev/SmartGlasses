/* FUN_1005c2a4 @ 0x1005c2a4 */

undefined4 FUN_1005c2a4(uint param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 < 5) {
    FUN_10114a38();
    lVar2 = FUN_10115958();
    *(ulonglong *)(DAT_1005c2dc + param_1 * 0x18 + 8) =
         lVar2 + (ulonglong)*(uint *)(DAT_1005c2dc + param_1 * 0x18);
    FUN_1005c1ac();
    FUN_101150e0();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

