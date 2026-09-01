/* FUN_1013d428 @ 0x1013d428 */

void FUN_1013d428(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (param_3 <= param_4) goto LAB_1013d432;
LAB_1013d42e:
  do {
    uVar3 = FUN_10068cd8();
    param_3 = extraout_r2;
LAB_1013d432:
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    if (uVar2 <= uVar1) {
      if (uVar1 < uVar2 + param_3) goto LAB_1013d42e;
      if (uVar2 != uVar1) goto LAB_1013d446;
    }
    if (uVar1 + param_3 <= uVar2) {
LAB_1013d446:
      FUN_1011e9f8();
      return;
    }
  } while( true );
}

