/* FUN_100ddd34 @ 0x100ddd34 */

int FUN_100ddd34(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = **(ushort **)(param_2 + 8);
  uVar3 = (uint)uVar1;
  if ((int)((uint)*(byte *)(DAT_100dddbc + 3) << 0x1b) < 0) {
    FUN_10119dc2(DAT_100dddc0,(uVar3 & 0x3fff) >> 8,uVar3 & 3,(uint)*(byte *)(DAT_100dddbc + 3),
                 param_4);
  }
  uVar4 = FUN_100cc614(param_1,param_2);
  iVar2 = (int)uVar4;
  if (iVar2 < 0) {
    FUN_100c1c90(param_2);
    FUN_100a5b78(DAT_100dddcc | (DAT_100dddc8 - DAT_100dddc4) * 0x20 & 0xff00U,DAT_100dddd0,iVar2);
  }
  else if ((uVar1 & 3) == 0) {
    *(byte *)(param_1 + 0xea) = (byte)uVar1 >> 4;
    *(undefined4 *)(param_1 + 0xec) = DAT_100dddd4;
    *(byte *)(param_1 + 0xe9) = (byte)((uVar3 << 0x12) >> 0x1a);
    FUN_1013cbaa(param_1 + 0xf0,(int)((ulonglong)uVar4 >> 0x20),5000,0);
    *(byte *)(param_1 + 0xe0) = *(char *)(param_1 + 0xe9) << 4 | 1;
  }
  return iVar2;
}

