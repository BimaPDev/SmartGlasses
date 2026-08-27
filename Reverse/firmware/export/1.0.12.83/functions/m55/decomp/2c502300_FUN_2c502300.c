/* FUN_2c502300 @ 0x2c502300 */

int FUN_2c502300(int param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_2c606b94(*(undefined4 *)(param_1 + 4),1);
  iVar4 = 0;
  if (((iVar3 != 0) &&
      (iVar3 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x18),1), iVar4 = 0, iVar3 != 0)) &&
     (iVar4 = func_0x2c4ff734(*(undefined4 *)(param_1 + 0x14)), puVar2 = DAT_2c63bbec,
     puVar1 = DAT_2c63bbe8, *(short *)(*(int *)(*(int *)(param_1 + 0x16c) + 0xa0) + 0x18) != iVar4))
  {
    if (-1 < ((int)(uint)*DAT_2c63bbe8 >> 0xb) << 0x1f) {
      FUN_2c644044(*DAT_2c63bbec,0xffffffff);
      uVar5 = *puVar2;
      *puVar1 = *puVar1 | 0x800;
      FUN_2c644080(uVar5);
      FUN_2c63b0a8();
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x22e,DAT_2c63bbf8,DAT_2c63bbf4,DAT_2c63bbf0);
  }
  return iVar4;
}

