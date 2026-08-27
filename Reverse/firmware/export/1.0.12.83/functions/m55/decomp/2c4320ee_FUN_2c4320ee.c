/* FUN_2c4320ee @ 0x2c4320ee */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c431e96) */
/* WARNING: Removing unreachable block (ram,0x2c431eb0) */
/* WARNING: Removing unreachable block (ram,0x2c431eda) */
/* WARNING: Removing unreachable block (ram,0x2c431dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4320ee(int param_1,undefined2 *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  uint uVar10;
  int unaff_r7;
  int unaff_r9;
  int *piVar11;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar12;
  int iStack_1c;
  undefined2 *puStack_18;
  uint uStack_14;
  
  uStack_14 = param_4;
  puStack_18 = param_2;
  piVar11 = &iStack_1c;
  iStack_1c = param_1;
  *(short *)(unaff_r4 + 3) = (short)param_2;
  iVar9 = param_4 - 0x1d;
  if (!SBORROW4(param_4,0x1d)) {
    iVar7 = *unaff_r5;
    iVar8 = unaff_r5[1];
    uVar10 = unaff_r5[3];
    if (0xffffff65 < uVar10) {
      *(int *)(uVar10 + 0x103) = iVar9;
      iVar7 = iVar9 >> 0x10;
      if (SCARRY4(uVar10,0x9b)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar1 = *(char *)(param_1 + iVar7);
      uVar6 = *(undefined4 *)(iVar7 + 4);
      iVar7 = *(int *)(iVar7 + 8);
      *(char *)(iVar8 + 0x1f) = (char)uVar6;
      coprocessor_loadlong(1,in_cr14,iVar9);
      *(short *)(cVar1 + iVar7) = (short)uVar6;
      iVar4 = _DAT_0000009c;
      iVar3 = iRam00000098;
      iVar2 = iRam00000094;
      iVar8 = iRam00000090;
      iVar7 = iRam0000008c;
      iVar9 = iRam00000084;
      piVar5 = (int *)(iRam00000098 - iRam00000088);
      *(short *)(_DAT_0000009c + 0xe) = (short)_DAT_0000009c;
      *piVar5 = iVar9;
      piVar5[1] = iVar8;
      piVar5[2] = iVar2;
      piVar5[3] = iVar3;
      iVar9 = iVar9 * 0x400000;
      *(int *)(iVar8 + iVar9) = iVar9;
      if (iVar2 == 0) {
        *(char *)(iVar7 + 0x14) = (char)(iVar8 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(iVar9 + 0x1b) = (char)((uint)(piVar5 + 4) >> 10);
      *(int *)((iVar8 >> 4) + 0x4c) = iVar4;
      piVar11 = (int *)&stack0xfffffffc;
      uVar12 = func_0x2b4b67b8((uint)(piVar5 + 4) >> 10,param_1,param_2);
      iVar7 = (int)((ulonglong)uVar12 >> 0x20);
      param_1 = (int)uVar12;
    }
    piVar11[0xa9] = param_1;
    *(short *)(iVar7 + 0x16) = (short)*(undefined4 *)(param_1 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_4 < 0x1d) {
    iVar9 = FUN_2c46c580();
    if (iVar9 == 0) {
      return 0xffffffff;
    }
    uVar6 = FUN_2c46c7dc(param_1);
    FUN_2c46c5e8(iVar9,_LAB_2c46ccdc,uVar6);
    uVar6 = FUN_2c46c7dc(param_1 + 0x28);
    FUN_2c46c5e8(iVar9,_LAB_2c46cce0,uVar6);
    uVar6 = FUN_2c46c7dc(param_1 + 0x2a);
    FUN_2c46c5e8(iVar9,_LAB_2c46cce4,uVar6);
    uVar6 = FUN_2c46c7dc(param_1 + 0x32);
    FUN_2c46c5e8(iVar9,_LAB_2c46cce8,uVar6);
    uVar6 = FUN_2c46c7dc(param_1 + 0x34);
    FUN_2c46c5e8(iVar9,_LAB_2c46ccec,uVar6);
    iVar7 = FUN_2c46c580();
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      uVar6 = FUN_2c46c7dc(*(int *)(param_1 + 0x5c));
      FUN_2c46c5e8(iVar7,_LAB_2c46ccf0,uVar6);
    }
    FUN_2c46c5e8(iVar9,_LAB_2c46ccf4,iVar7);
    func_0x2c46c544(iVar9,2);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb5,_LAB_2c46cd00,_LAB_2c46ccfc);
  }
  *unaff_r4 = param_1;
  unaff_r4[1] = (int)unaff_r5;
  unaff_r4[2] = unaff_r6 + -0xf8;
  unaff_r4[3] = unaff_r7;
  *unaff_r5 = (int)param_2;
  unaff_r5[1] = (int)&stack0x000002c8;
  unaff_r5[2] = iVar9;
  unaff_r5[3] = (int)(unaff_r4 + 4);
  unaff_r5[4] = unaff_r7;
  if (unaff_r6 < 0xf8) {
    coprocessor_load(5,in_cr13,param_2 + 0xbc);
    coprocessor_loadlong(1,in_cr12,*(short *)((int)unaff_r5 + (param_4 - 9)) + 0x178);
    *(int *)(param_4 + 0x17) = param_1;
    coprocessor_storelong(10,in_cr6,unaff_r9 + 0x174);
    *(int *)param_1 = param_1;
    *param_2 = (short)unaff_r7;
    _HardFault = *(undefined4 *)((int)unaff_r4 + 0x55);
    coprocessor_function2(0,0,0,in_cr0,in_cr7,in_cr0);
    iVar9 = unaff_r7 * 0x2000;
    *(int *)iVar9 = iVar9;
    *(undefined4 *)(iVar9 + 4) = 4;
    *(undefined1 **)(iVar9 + 8) = &stack0x000002c8;
    *(int *)(iVar9 + 0xc) = unaff_r7;
    *(int *)(iVar9 + 0x10) = unaff_r7;
    *(int *)iVar9 = iVar9;
    *(undefined4 *)(iVar9 + 4) = 4;
    *(undefined1 **)(iVar9 + 8) = &stack0x000002c8;
    *(int *)(iVar9 + 0xc) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

