/* FUN_2c033ad6 @ 0x2c033ad6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c033ad6(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar9;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  char in_OV;
  
  lVar3 = CONCAT44(unaff_r5,unaff_r11);
  while( true ) {
    iVar9 = (int)((ulonglong)lVar3 >> 0x20);
    if (in_NG == in_OV) break;
    *(int *)(unaff_r6 + 0x14) = param_4;
    *(undefined4 *)(unaff_r4 + 0x54) = unaff_r7;
    uVar4 = (undefined1)param_1;
    *(undefined1 *)(unaff_r6 + 9) = uVar4;
    *(undefined4 *)(iVar9 + 0x34) = unaff_r7;
    uVar5 = (undefined1)((ulonglong)lVar3 >> 0x20);
    *(undefined1 *)(unaff_r4 + 0xd) = uVar5;
    sVar1 = *(short *)(unaff_r6 + iVar9);
    *(int *)(unaff_r6 + 0x54) = param_3;
    *(int *)(unaff_r4 + 0x54) = (int)sVar1;
    *(char *)(iVar9 + 0x19) = (char)param_2;
    *(undefined1 *)(unaff_r4 + 9) = uVar5;
    *(undefined4 *)(sVar1 + 0x44) = unaff_r7;
    *(char *)(unaff_r4 + 0x11) = (char)param_2;
    sVar1 = *(short *)(unaff_r4 + iVar9);
    *(int *)(unaff_r4 + 0x34) = (int)sVar1;
    *(undefined1 *)(unaff_r6 + 9) = uVar4;
    *(undefined4 *)(iVar9 + 0x34) = unaff_r7;
    *(undefined1 *)(unaff_r4 + 0xd) = uVar5;
    sVar2 = *(short *)(unaff_r6 + iVar9);
    *(int *)(unaff_r6 + 0x54) = param_3;
    *(int *)(unaff_r4 + 0x54) = (int)sVar2;
    *(char *)(iVar9 + 0x19) = (char)sVar1;
    *(undefined1 *)(unaff_r4 + 9) = uVar5;
    *(undefined4 *)(sVar2 + 100) = unaff_r7;
    uVar6 = *(undefined4 *)(unaff_r4 + 0x14);
    iVar8 = iVar9 * 2;
    *(undefined1 *)(unaff_r6 + 9) = uVar4;
    *(undefined4 *)(iVar9 + 0x34) = unaff_r7;
    *(undefined1 *)(iVar8 + 0xd) = uVar5;
    iVar7 = (int)*(short *)(unaff_r6 + iVar9);
    *(int *)(unaff_r6 + 0x54) = param_3;
    *(int *)(iVar8 + 0x54) = iVar7;
    *(char *)(iVar9 + 0x19) = (char)uVar6;
    *(undefined1 *)(iVar8 + 9) = uVar5;
    *(undefined4 *)(iVar7 + 100) = unaff_r7;
    *(char *)(iVar9 + 0xd) = (char)*(undefined4 *)(iVar9 + 100);
    param_1 = iVar9 << 1;
    *(char *)(iVar8 + 0x15) = (char)param_3;
    uVar6 = *(undefined4 *)(*(short *)(iVar9 * 3) + 100);
    iVar8 = (int)*(short *)(*(short *)(iVar9 * 3) + iVar9);
    *(int *)(unaff_r6 + 0x54) = iVar7;
    *(int *)(iVar9 + 0x44) = unaff_r6;
    *(undefined4 *)(iVar7 + 0x34) = unaff_r7;
    uVar4 = (undefined1)param_1;
    *(undefined1 *)(iVar9 + 0x15) = uVar4;
    unaff_r6 = *(int *)(iVar9 + 0x34);
    unaff_r7 = *(undefined4 *)(iVar7 + 0x54);
    *(undefined1 *)(iVar8 + 0xd) = uVar5;
    *(int *)(unaff_r6 + 0x14) = iVar7;
    *(undefined4 *)(iVar8 + 0x54) = unaff_r7;
    *(undefined1 *)(unaff_r6 + 9) = uVar4;
    *(undefined4 *)(iVar9 + 0x34) = unaff_r7;
    *(undefined1 *)(iVar8 + 0xd) = uVar5;
    sVar1 = *(short *)(unaff_r6 + iVar9);
    *(int *)(unaff_r6 + 0x54) = param_3;
    *(int *)(iVar8 + 0x54) = (int)sVar1;
    *(char *)(iVar9 + 0x19) = (char)uVar6;
    *(undefined1 *)(iVar8 + 9) = uVar5;
    *(undefined4 *)(sVar1 + 0x14) = unaff_r7;
    *(undefined1 *)(unaff_r6 + 9) = uVar4;
    *(undefined4 *)(iVar9 + 0x34) = unaff_r7;
    *(undefined1 *)(iVar8 + 0xd) = uVar5;
    sVar1 = *(short *)(unaff_r6 + iVar9);
    param_4 = (int)sVar1;
    *(int *)(unaff_r6 + 0x54) = param_4;
    *(int *)(iVar9 + 0x44) = unaff_r6;
    *(undefined4 *)(param_4 + 0x34) = unaff_r7;
    param_2 = *(int *)(iVar8 + 100);
    *(int *)(iVar8 + 0x54) = param_4;
    unaff_r4 = (int)*(short *)(iVar9 * 2);
    *(int *)(iVar9 + 0x54) = iVar9;
    *(char *)(unaff_r6 + 0xd) = (char)sVar1;
    *(int *)(unaff_r4 + 0x74) = param_2;
    in_OV = SBORROW4(param_3,param_2);
    in_NG = param_3 - param_2 < 0;
    *(char *)(unaff_r6 + 4) = (char)unaff_r7;
    lVar3 = (longlong)((int)(short)unaff_pc * (int)(short)param_1) +
            (longlong)((int)(short)((uint)unaff_pc >> 0x10) * (int)(short)((uint)param_1 >> 0x10)) +
            CONCAT44(unaff_r4 << 1,(int)lVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

