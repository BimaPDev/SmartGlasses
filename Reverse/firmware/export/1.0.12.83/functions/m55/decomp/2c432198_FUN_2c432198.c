/* FUN_2c432198 @ 0x2c432198 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c431e96) */
/* WARNING: Removing unreachable block (ram,0x2c431eb0) */
/* WARNING: Removing unreachable block (ram,0x2c431eda) */
/* WARNING: Removing unreachable block (ram,0x2c431dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c432198(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  int *piVar8;
  int unaff_r6;
  uint uVar9;
  undefined4 uVar10;
  int unaff_r7;
  int *piVar11;
  char in_NG;
  undefined4 in_cr14;
  undefined8 uVar12;
  int in_stack_0000002c;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  piVar11 = &iStack_14;
  iStack_14 = param_2;
  iVar5 = param_2;
  if (in_NG != '\0') {
    iVar7 = (int)*(char *)(unaff_r5 + param_3);
    piVar8 = (int *)(uint)*(ushort *)(unaff_r6 + param_3);
    if (param_2 == 0) {
      func_0x2c320200();
      func_0x2c010612();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = *piVar8;
    iVar6 = piVar8[1];
    uVar9 = piVar8[3];
    if (uVar9 < 0xffffff66) goto LAB_2c432284;
    *(int *)(uVar9 + 0x103) = iVar7;
    iVar5 = iVar7 >> 0x10;
    if (SCARRY4(uVar9,0x9b)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = *(char *)((int)param_1 + iVar5);
    uVar10 = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(iVar5 + 8);
    *(char *)(iVar6 + 0x1f) = (char)uVar10;
    coprocessor_loadlong(1,in_cr14,iVar7);
    *(short *)(cVar1 + iVar5) = (short)uVar10;
    unaff_r7 = _DAT_0000009c;
    iVar4 = iRam00000098;
    iVar3 = iRam00000094;
    iVar2 = iRam00000090;
    iVar6 = iRam0000008c;
    iVar5 = iRam00000084;
    param_1 = (int *)(iRam00000098 - iRam00000088);
    *(short *)(_DAT_0000009c + 0xe) = (short)_DAT_0000009c;
    *param_1 = iVar5;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1 = param_1 + 4;
    unaff_r6 = iVar2 >> 4;
    iVar5 = iVar5 * 0x400000;
    *(int *)(iVar2 + iVar5) = iVar5;
    in_stack_0000002c = iVar7;
    if (iVar3 == 0) {
      *(char *)(iVar6 + 0x14) = (char)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(iVar5 + 0x1b) = (char)((uint)param_1 >> 10);
  *(int *)(unaff_r6 + 0x4c) = unaff_r7;
  piVar11 = (int *)&stack0x00000004;
  uVar12 = func_0x2b4b67b8((uint)param_1 >> 10,param_2,param_4);
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  param_1 = (int *)uVar12;
LAB_2c432284:
  piVar11[0xa9] = (int)param_1;
  *(short *)(iVar5 + 0x16) = (short)param_1[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

