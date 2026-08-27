/* FUN_2c4833b4 @ 0x2c4833b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4833b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_2c471604(1,param_2,param_3,0);
  iVar5 = FUN_2c471604(1);
  iVar5 = FUN_2c66b624(iVar5 + 0x6b,uRam2c4834bc);
  if ((iVar5 == 0) || (iVar4 = FUN_2c66960c(iVar4,iVar4 + 6,6), iVar4 != 0)) {
    uVar3 = uRam2c4834d8;
    uVar2 = uRam2c4834d0;
    uVar1 = uRam2c4834c4;
    *puRam2c4834d4 = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x169,uRam2c4834cc,uVar2,uVar3,uVar1);
  }
  if ((*piRam2c4834c0 == 0) && ((short)piRam2c4834c0[1] == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x15a,uRam2c4834cc,uRam2c4834d0,uRam2c4834dc,uRam2c4834c4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x153,uRam2c4834cc,uRam2c4834d0,uRam2c4834c8,uRam2c4834c4);
}

