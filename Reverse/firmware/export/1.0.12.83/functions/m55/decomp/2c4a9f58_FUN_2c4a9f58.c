/* FUN_2c4a9f58 @ 0x2c4a9f58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a9f58(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4a9fc0;
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uStack_16 = 0;
  uVar1 = (uint)((ulonglong)_LAB_2c4a9fc4 * (ulonglong)param_2 >> 0x25);
  FUN_2c4a8764(uVar2,5,&uStack_16);
  FUN_2c4a8704(uVar2,5,uStack_16 & 0x3f |
                       ((short)param_2 + (short)uVar1 * -0x30 + (short)(uVar1 << 6)) * 0x40);
  if (*_LAB_2c4a9fc0 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

