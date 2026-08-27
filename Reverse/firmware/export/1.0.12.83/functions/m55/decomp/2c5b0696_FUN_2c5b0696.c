/* FUN_2c5b0696 @ 0x2c5b0696 */

undefined4 FUN_2c5b0696(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  short sStack_14;
  short sStack_12;
  
  if ((param_2 < 0) || (iVar1 = FUN_2c6041fc(), iVar1 + -1 < param_2)) {
    return 0;
  }
  uVar2 = FUN_2c6041dc(param_1,param_2);
  uVar2 = FUN_2c6041dc(uVar2,0);
  iVar1 = FUN_2c6041dc(uVar2,0);
  uVar3 = *DAT_2c607ebc;
  sStack_14 = FUN_2c600c2c();
  sStack_12 = *(short *)(iVar1 + 0x16) - sStack_14;
  sStack_14 = *(short *)(iVar1 + 0x14) - sStack_14;
  uVar4 = FUN_2c606b94(iVar1,1);
  if ((int)uVar4 == 0) {
    uVar4 = FUN_2c6077d0(iVar1,&sStack_14);
  }
  else {
    uVar4 = uVar4 & 0xffffffff00000000;
  }
  if ((*DAT_2c607ebc ^ uVar3) == 0) {
    return (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar4,(int)(uVar4 >> 0x20),*DAT_2c607ebc ^ uVar3,0);
}

