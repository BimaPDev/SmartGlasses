/* FUN_2c4f00cc @ 0x2c4f00cc */

void FUN_2c4f00cc(int param_1)

{
  longlong lVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar2 = FUN_2c645794();
  lVar1 = (ulonglong)DAT_2c4f00e8 * (ulonglong)(uint)(param_1 * (int)uVar2);
  FUN_2c6444fc((uint)((ulonglong)lVar1 >> 0x26),(int)((ulonglong)uVar2 >> 0x20),extraout_r2,
               (int)lVar1);
  return;
}

