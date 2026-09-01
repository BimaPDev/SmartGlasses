/* FUN_100563a8 @ 0x100563a8 */

undefined4 FUN_100563a8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = DAT_10056410;
  *DAT_10056410 = 0;
  uVar3 = param_1;
  FUN_1013d9c0(300);
  *puVar1 = param_1 << 8 | 1;
  FUN_1013d9c0(300);
  do {
  } while (-1 < (int)(*puVar1 << 0x1b));
  uVar2 = 0;
  if (*DAT_10056414 != 0) {
    uVar2 = FUN_10004238((int)((ulonglong)param_1 * (ulonglong)DAT_10056418),
                         (int)((ulonglong)param_1 * (ulonglong)DAT_10056418 >> 0x20),*DAT_10056414,0
                         ,uVar3,param_2,param_3);
  }
  FUN_100a5b78(DAT_10056428 | (DAT_10056424 - DAT_1005641c) * 0x20 & 0xff00U,DAT_10056430,
               DAT_1005642c,uVar2,*DAT_10056420 >> 1);
  return uVar2;
}

