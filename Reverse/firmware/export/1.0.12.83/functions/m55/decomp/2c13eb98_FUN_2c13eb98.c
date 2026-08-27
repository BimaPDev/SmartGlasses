/* FUN_2c13eb98 @ 0x2c13eb98 */

/* WARNING: Instruction at (ram,0x2c13ed42) overlaps instruction at (ram,0x2c13ed40)
    */
/* WARNING: Removing unreachable block (ram,0x2c13ec70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13eb98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint unaff_r4;
  int unaff_r7;
  undefined4 unaff_lr;
  longlong lVar10;
  undefined8 uVar11;
  
  iVar3 = func_0x2c1363b4(0,uRam2c13ec54,param_3,param_4,param_4);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x2c13635c(uRam2c13ec58);
  }
  iVar3 = func_0x2c13e528(uVar4,uVar4);
  uVar2 = uRam2c13ec60;
  puVar1 = puRam2c13ec5c;
  if (iVar3 != 0) {
    do {
      iVar5 = func_0x2c144e54();
      if (iVar5 == 0) {
        uVar11 = func_0x2c14064c();
        iVar5 = (int)uVar11;
        lVar10 = (ulonglong)uVar2 * (ulonglong)(uint)(iVar5 * 1000);
        uVar9 = (uint)((ulonglong)lVar10 >> 0x26);
        if (uVar4 < uVar9 << 4) {
          iVar6 = FUN_2c14486c();
          iVar7 = func_0x2c13e584(iVar3,uVar9 * 0x10 - uVar4);
          if (iVar7 == 0) {
            func_0x2c13eb94();
            func_0x2c13e5b0(iVar3);
          }
          iVar7 = FUN_2c14486c();
          uVar9 = iVar7 - iVar6;
          if ((((uint)(iVar5 * 0x10) < uVar9) && (uVar9 < iVar5 * 0x10 + 0x30U)) &&
             (uVar4 = uVar4 + iVar5 * -0x10 + uVar9, 0x2f < uVar4)) {
            uVar4 = 0x30;
          }
        }
        else {
          func_0x2c144878(iVar5 << 4,(int)((ulonglong)uVar11 >> 0x20),(int)lVar10);
        }
        func_0x2c140680(iVar5);
      }
      uVar9 = FUN_2c14486c();
      if ((int)((*puVar1 ^ uVar9) << 1) < 0) {
        FUN_2c135b78();
      }
      *puVar1 = uVar9;
    } while( true );
  }
  func_0x2c13635c(uRam2c13ec64);
  iVar3 = unaff_r4 * 2;
  *(char *)(unaff_r7 + iVar3) = (char)iVar3;
  uVar8 = 0x65;
  if ((unaff_r4 & 0x80000000) == 0) {
    *(undefined1 *)(uVar4 + iRam2c13efb0) = 0x65;
    return 0;
  }
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    uVar8 = func_0x2c144efc(iVar3);
  }
  func_0x2c145718(uVar8);
  FUN_2c135940(_DAT_2c13ed98,_DAT_2c13ed94);
  func_0x2c1455c0();
  uVar4 = *DAT_2c135984;
  if (*DAT_2c135980 == '\0') {
    lVar10 = (ulonglong)_DAT_2c13ed94 << 0x20;
  }
  else {
    lVar10 = FUN_2c13583c(_DAT_2c13ed98,_DAT_2c13ed94,&stack0xfffffff8,*DAT_2c135980,
                          &stack0xfffffff8,uVar4,unaff_lr);
  }
  if ((*DAT_2c135984 ^ uVar4) == 0) {
    return (int)lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),*DAT_2c135984 ^ uVar4,0);
}

