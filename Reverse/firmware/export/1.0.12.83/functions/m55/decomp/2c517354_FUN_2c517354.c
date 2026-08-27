/* FUN_2c517354 @ 0x2c517354 */

void FUN_2c517354(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sStack_14;
  short sStack_12;
  undefined4 uStack_10;
  
  if ((((*(char *)((int)param_1 + 0xbe) != '\0') && (param_1[0x2e] != param_2)) && (0 < param_2)) &&
     (param_2 <= param_1[0x2d])) {
    param_1[0x2e] = param_2;
    uStack_10 = param_4;
    FUN_2c62c0d8(param_1[0x2c],param_1[0x2b],param_2);
    *(undefined1 *)(param_1[0x2c] + param_2) = 0;
    iVar1 = *(int *)(*param_1 + 0x1c);
    iVar2 = *DAT_2c607e4c;
    sStack_14 = FUN_2c600c2c();
    sStack_12 = *(short *)(iVar1 + 0x16) - sStack_14;
    uStack_10 = CONCAT22(*(short *)(iVar1 + 0x1a) + sStack_14,sStack_14 + *(short *)(iVar1 + 0x18));
    sStack_14 = *(short *)(iVar1 + 0x14) - sStack_14;
    FUN_2c6078f0(iVar1,&sStack_14);
    if (*DAT_2c607e4c == iVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

