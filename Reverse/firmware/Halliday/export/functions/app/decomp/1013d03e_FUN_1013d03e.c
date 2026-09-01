/* FUN_1013d03e @ 0x1013d03e */

void FUN_1013d03e(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (param_3 <= param_4) goto LAB_1013d048;
LAB_1013d044:
  do {
    uVar3 = FUN_10068cd8();
    param_3 = extraout_r2;
LAB_1013d048:
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    if (uVar2 <= uVar1) {
      if (uVar1 < uVar2 + param_3) goto LAB_1013d044;
      if (uVar2 != uVar1) goto LAB_1013d05c;
    }
    if (uVar1 + param_3 <= uVar2) {
LAB_1013d05c:
      FUN_1011ea40();
      return;
    }
  } while( true );
}

