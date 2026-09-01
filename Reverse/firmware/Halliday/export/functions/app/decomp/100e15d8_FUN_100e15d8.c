/* FUN_100e15d8 @ 0x100e15d8 */

undefined2 FUN_100e15d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 uVar3;
  short sVar4;
  ushort *puVar5;
  ushort *extraout_r2;
  short sVar6;
  undefined6 uVar7;
  
  puVar2 = DAT_100e1644;
  if (*(short *)(param_2 + 0x50) == 0) {
    sVar6 = -0x40;
    puVar5 = DAT_100e1644;
    do {
      if (*puVar2 < 0x40) {
        *puVar2 = 0x40;
      }
      uVar7 = FUN_1013828e(param_1,*puVar5);
      sVar4 = (short)((uint6)uVar7 >> 0x20);
      uVar1 = sVar4 + 1;
      if ((int)uVar7 == 0) {
        *(short *)(param_2 + 0x50) = sVar4;
        *extraout_r2 = uVar1;
        goto LAB_100e1616;
      }
      sVar6 = sVar6 + -1;
      *extraout_r2 = uVar1;
      puVar5 = extraout_r2;
    } while (sVar6 != 0);
    uVar3 = 0;
  }
  else {
LAB_100e1616:
    thunk_FUN_101146e4(param_2 + 0x10,DAT_100e1640);
    FUN_10133fd2(param_1,param_2,param_3);
    uVar3 = 1;
  }
  return uVar3;
}

