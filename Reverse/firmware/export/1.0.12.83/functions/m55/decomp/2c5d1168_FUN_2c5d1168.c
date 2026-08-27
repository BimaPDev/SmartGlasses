/* FUN_2c5d1168 @ 0x2c5d1168 */

undefined4 FUN_2c5d1168(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  short sStack_14;
  short sStack_12;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((param_2 < 0) || (iVar1 == 0)) || (iVar2 = FUN_2c6041fc(), iVar2 + -1 < param_2)) {
    return 0;
  }
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),param_2);
  uVar3 = FUN_2c6041dc(uVar3,1);
  iVar1 = FUN_2c6041dc(uVar3,iVar1 == 0);
  uVar4 = *DAT_2c607ebc;
  sStack_14 = FUN_2c600c2c();
  sStack_12 = *(short *)(iVar1 + 0x16) - sStack_14;
  sStack_14 = *(short *)(iVar1 + 0x14) - sStack_14;
  uVar5 = FUN_2c606b94(iVar1,1);
  if ((int)uVar5 == 0) {
    uVar5 = FUN_2c6077d0(iVar1,&sStack_14);
  }
  else {
    uVar5 = uVar5 & 0xffffffff00000000;
  }
  if ((*DAT_2c607ebc ^ uVar4) == 0) {
    return (int)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar5,(int)(uVar5 >> 0x20),*DAT_2c607ebc ^ uVar4,0);
}

