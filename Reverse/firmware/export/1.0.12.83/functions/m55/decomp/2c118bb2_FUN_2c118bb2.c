/* FUN_2c118bb2 @ 0x2c118bb2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c118bb2(uint param_1,uint param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int unaff_r5;
  undefined4 unaff_r6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint unaff_lr;
  bool bVar11;
  char in_OV;
  bool bVar12;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined8 uVar13;
  uint uStack_8;
  
  *(undefined4 *)(param_1 + 0x20) = unaff_r6;
  uVar3 = param_1 >> 0x1c;
  if (in_OV == '\0') {
LAB_2c118e56:
    iVar4 = *(int *)((int)param_4 + 0x5e);
    uVar8 = *(uint *)((int)param_4 + 0x6a);
    iVar10 = *(int *)((int)param_4 + 0x6e);
    *(short *)(uVar8 + iVar10) = (short)uVar3;
    *(short *)(uVar3 + iVar4) = (short)uVar3;
  }
  else {
    uVar2 = (ushort)(param_1 >> 0x1c);
    *(ushort *)(uVar3 + 0x10) = uVar2;
    *(undefined1 *)(unaff_r5 + 6) = 0;
    iVar4 = *param_4;
    iVar5 = param_4[1];
    iVar7 = param_4[2];
    uVar8 = param_4[3];
    iVar10 = param_4[4];
    param_4 = param_4 + 5;
    *(ushort *)(iVar10 + 0xc) = uVar2;
    if ((param_2 & 0x3fffffff) >> 0xf == 0) {
      unaff_r5 = (int)*(char *)(uVar3 * 2);
LAB_2c118bce:
      uVar8 = unaff_r5 >> 4;
      bVar11 = (uVar8 & 0x200) != 0;
      bVar12 = (uVar8 & 0x1ff) == 0;
    }
    else {
      if (((param_2 & 0x3fffffff) >> 0xe & 1) != 0) goto LAB_2c118bce;
      bVar11 = 0x5e5e5e5e < unaff_lr;
      iVar10 = unaff_lr + 0xa1a1a1a1;
      bVar12 = iVar10 == 0;
      if (!bVar11 || bVar12) {
        uStack_8 = param_1;
        uVar13 = func_0x2cefaa90(*(undefined4 *)(iVar4 + 0x6c),iVar4,iVar5);
        param_4 = (int *)((ulonglong)uVar13 >> 0x20);
        uVar3 = (uint)uVar13;
        puVar6 = (uint *)((int)uVar3 >> 4);
        *(char *)(uVar8 + 7) = (char)((ulonglong)uVar13 >> 0x20);
        iVar4 = (int)param_4 + 1U + (int)param_4 + iVar7;
        coprocessor_function2(0xc,0xd,7,in_cr4,in_cr8,in_cr1);
        if (!CARRY4((int)param_4 + 1U,(int)param_4 + iVar7) || iVar4 == 0) goto LAB_2c118eb8;
        *(short *)(uVar8 + 0xc) = (short)uVar8;
        if (((int)(param_4 + -8) * 0x10 >> 0x16 & 1U) != 0 &&
            (int)(param_4 + -8) * 0x10 >> 0x17 != 0) {
          halt_baddata();
        }
        goto LAB_2c118e56;
      }
    }
    if (!bVar11 || bVar12) goto LAB_2c118e56;
  }
  iVar4 = 0x2c118ea0;
  *(short *)(iVar10 + 0xc) = (short)uVar3;
  puVar6 = _DAT_2c11919c;
  cVar1 = *(char *)(uVar3 * 2);
  uVar9 = (uint)(int)cVar1 >> 4;
  uVar3 = (int)_DAT_2c11919c << 0x19;
  *_DAT_2c11919c = uVar8 >> 9;
  puVar6[1] = uVar3;
  puVar6[2] = uVar9;
  *(uint *)((int)cVar1 + 0xc) = uVar9;
  puVar6 = &uStack_8;
LAB_2c118eb8:
  cVar1 = *(char *)(iVar4 + (iVar4 >> 1));
  *(short *)((int)cVar1 + (int)puVar6) = (short)cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

