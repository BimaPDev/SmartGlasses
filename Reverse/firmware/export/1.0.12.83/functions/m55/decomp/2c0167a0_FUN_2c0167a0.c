/* FUN_2c0167a0 @ 0x2c0167a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c0167a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 *in_r12;
  
  do {
    param_4 = param_4 + 1;
    *param_4 = (char)param_3;
  } while (param_4 != in_r12 + 0x4b3);
  *(undefined4 *)(in_r12 + 0x4ac) = param_3;
  *in_r12 = 1;
  puVar1 = _DAT_2c0168b4;
  in_r12[0x4a8] = 0x1b;
  do {
    in_r12 = in_r12 + 0x2c;
    *in_r12 = 0;
    uVar6 = _DAT_2c0168c0;
  } while (puVar1 != in_r12);
  iVar7 = 1;
  bVar8 = false;
  *_DAT_2c0168b8 = _DAT_2c0168bc;
  func_0x2c01857c(3,uVar6);
  uVar3 = _DAT_2c0168e8;
  uVar2 = _DAT_2c0168c8;
  uVar6 = _DAT_2c0168c4;
  do {
    iVar5 = func_0x2c0062ec(0,_DAT_2c0168cc,uVar2,uVar6,uVar3);
    piVar4 = _DAT_2c0168ec;
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(_DAT_2c0168e4,_DAT_2c0168dc,iVar5);
    }
    iVar5 = func_0x2c0067ec(0,_DAT_2c0168ec);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(_DAT_2c0168e0,_DAT_2c0168dc,iVar5);
    }
    iVar5 = func_0x2c006814();
    if (*piVar4 == 0) {
      if (0x1fe0000 < iVar5 - 0x20000U) goto LAB_2c01685a;
    }
    else if (0x1fc0000 < iVar5 - 0x40000U) {
LAB_2c01685a:
      if (!bVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(_DAT_2c0168d0,0,iVar5);
      }
    }
    FUN_2c0164f4(0);
    iVar5 = FUN_2c006918(0);
    if ((iVar5 == 0) && (iVar5 = func_0x2c006828(0,0,0x10000,0x720000,0x720000), iVar5 != 0)) {
      uVar6 = func_0x2c006814(0);
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(_DAT_2c0168d8,_DAT_2c0168d4,0x10000,0x720000,0x720000,uVar6,iVar5);
    }
    bVar8 = true;
    while (iVar7 = iVar7 + 1, iVar7 != 1) {
      if (iVar7 == 2) {
        return 0;
      }
    }
  } while( true );
}

