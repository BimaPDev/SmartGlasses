/* FUN_140da8b8 @ 0x140da8b8 */

void FUN_140da8b8(void)

{
  int extraout_r2;
  undefined4 extraout_r3;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_140dc30c(6);
  uVar3 = FUN_140e45e0(1);
  iVar1 = DAT_140da900;
  iVar2 = DAT_140da900;
  if (extraout_r2 != 0) {
    iVar1 = DAT_140da8f8;
    iVar2 = extraout_r2;
  }
  FUN_140dad74(*(undefined4 *)(*DAT_140da8f4 + 0xc),DAT_140da8fc,extraout_r3,(int)uVar3,
               (int)((ulonglong)uVar3 >> 0x20),iVar1,iVar2,extraout_r3);
                    /* WARNING: Subroutine does not return */
  FUN_140da8b8();
}

