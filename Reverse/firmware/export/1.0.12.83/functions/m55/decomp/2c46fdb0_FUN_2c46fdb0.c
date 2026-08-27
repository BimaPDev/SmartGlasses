/* FUN_2c46fdb0 @ 0x2c46fdb0 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c46fdd2 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_2c46fdb0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined8 in_d0;
  undefined8 uVar10;
  int aiStack_a4 [9];
  undefined4 uStack_80;
  undefined4 local_7c [22];
  int local_24;
  
  puVar7 = &uStack_80;
  local_24 = *DAT_2c46fea0;
  iVar2 = 2;
  do {
    iVar5 = iVar2 + 1;
    uVar10 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c666588(0,(int)((ulonglong)in_d0 >> 0x20),(int)uVar10);
    uVar9 = VectorFloatToUnsigned(in_d0,3);
    puVar7 = puVar7 + 1;
    *puVar7 = uVar9;
    iVar2 = iVar5;
  } while (iVar5 != 0x18);
  iVar2 = FUN_2c646890();
  uVar1 = DAT_2c46fea8;
  iVar5 = 0;
  uVar8 = iVar2 + ((int)((longlong)DAT_2c46fea4 * (longlong)iVar2 >> 0x21) - (iVar2 >> 0x1f)) * -0xc
          & 0xff;
  do {
    iVar5 = iVar5 + 1;
    iVar2 = 0;
    FUN_2c6444fc(200);
    piVar6 = aiStack_a4;
    while( true ) {
      uVar3 = FUN_2c66b19c();
      iVar4 = FUN_2c47245c(uVar8,local_7c[uVar3 + (uint)((ulonglong)uVar1 * (ulonglong)uVar3 >> 0x24
                                                        ) * -0x16]);
      if (iVar4 == 0) break;
      iVar2 = iVar2 + 1;
      *piVar6 = iVar4;
      piVar6 = piVar6 + 1;
      if (iVar2 == 10) {
        if (iVar5 == 1000) goto LAB_2c46fe86;
        goto LAB_2c46fe58;
      }
    }
    if (iVar5 == 1000) {
LAB_2c46fe86:
      if (*DAT_2c46fea0 == local_24) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  } while (iVar2 == 0);
LAB_2c46fe58:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(uVar8,aiStack_a4[iVar2 + 0x3fffffff]);
}

