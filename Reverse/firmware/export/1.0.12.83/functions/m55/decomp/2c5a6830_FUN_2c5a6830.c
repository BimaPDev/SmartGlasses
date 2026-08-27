/* FUN_2c5a6830 @ 0x2c5a6830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a6830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  undefined4 unaff_lr;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  
  if (param_1 == -1) {
    FUN_2c5a2398();
    uVar1 = func_0x2c5a2410();
    func_0x2c5a35a8(uVar1,0);
  }
  else {
    *_LAB_2c5a68b0 = param_1;
    FUN_2c5a2398();
    uVar1 = func_0x2c5a2410();
    func_0x2c5a35a8(uVar1,param_1);
  }
  iVar3 = *_LAB_2c5a68b4;
  if (iVar3 == 0) {
    FUN_2c5a2398();
    iVar2 = func_0x2c5a2410();
    uVar1 = 0;
  }
  else {
    FUN_2c5a2398();
    iVar2 = func_0x2c5a2410();
    dVar5 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (double)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToSigned((dVar5 / dVar4) * dRam2c5a68a8,3);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x14) = uVar1;
    FUN_2c5dc53c(0xb,0x1776,0,0,DAT_2c5a72cc,*(int *)(iVar2 + 0x18) + 0x14,param_4,unaff_r4,unaff_r5
                 ,unaff_lr);
    FUN_2c5dc5e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5a3658,0x129,_LAB_2c5a3654,_LAB_2c5a3650);
}

