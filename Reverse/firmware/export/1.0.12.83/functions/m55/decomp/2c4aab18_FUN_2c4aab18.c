/* FUN_2c4aab18 @ 0x2c4aab18 */

void FUN_2c4aab18(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort local_e;
  uint local_c;
  
  local_c = *DAT_2c4aab68;
  local_e = 0;
  uVar2 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0xf0),&local_e);
  iVar1 = (int)uVar2;
  if (-1 < iVar1) {
    if (((uint)local_e & ~*(uint *)(param_1 + 0xf4)) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  if ((*DAT_2c4aab68 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar1,(int)((ulonglong)uVar2 >> 0x20),*DAT_2c4aab68 ^ local_c,0);
  }
  return;
}

