/* FUN_2c5df4e4 @ 0x2c5df4e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5df4e4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  iVar1 = _LAB_2c5df524;
  FUN_2c606e74(param_1,(int)((longlong)_LAB_2c5df524 * (longlong)(param_2 * 0xff) >> 0x25) -
                       (param_2 * 0xff >> 0x1f) & 0xff,0);
  iVar2 = (int)(short)(((short)(int)((longlong)iVar1 * (longlong)(param_2 * -10) >> 0x25) -
                       (short)(param_2 * -10 >> 0x1f)) + 10);
  iStack_14 = *DAT_2c607044;
  iVar1 = FUN_2c603c78(param_1,8,&iStack_18,0);
  if (iVar1 == 1) {
    if (iStack_18 == iVar2) goto LAB_2c607024;
  }
  else if (iVar1 != 0) goto LAB_2c607024;
  FUN_2c606cd0(param_1,iVar2,0);
LAB_2c607024:
  if (*DAT_2c607044 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

