/* FUN_2c454642 @ 0x2c454642 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c454642(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint unaff_r6;
  uint uVar13;
  int unaff_r7;
  undefined4 *puVar14;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 in_cr1;
  undefined4 in_cr14;
  undefined4 uStack_14;
  int iStack_10;
  
  iStack_10 = param_4;
  uStack_14 = param_1;
  puVar3 = &uStack_14;
  do {
    puVar14 = puVar3;
    uVar13 = unaff_r6;
    puVar5 = param_2;
    if ((bool)in_ZR || in_NG != in_OV) {
      bVar16 = SBORROW4(unaff_r7,0x4a);
      iVar12 = 0x2c4547d0;
      *(int *)(unaff_r7 + 0x10) = param_3;
      piVar6 = piRam2c454af0;
      piVar4 = (int *)puVar14[0x44];
      *piVar4 = (int)(puVar14 + 0x28);
      piVar4[1] = 0x2c4547d0;
      piVar4[2] = uVar13;
      puVar14[0x3f] = param_4;
      bVar15 = false;
      if (piVar4 != (int *)0xfffffff4) {
        unaff_r7 = unaff_r7 + -0x40;
        bVar16 = SBORROW4((int)(piVar4 + 3),0x2c4547d0);
        piVar6 = piVar4 + -0xb1151f1;
        bVar15 = (int)piVar6 < 0;
        puVar14[0xd8] = param_3;
      }
      uVar1 = *(ushort *)(param_4 + 0x16);
      uVar7 = (uint)uVar1;
      if (bVar16) {
        *(char *)((uVar13 >> 0x13) + 0x13) = (char)(uVar13 >> 0x13);
        coprocessor_storelong(5,in_cr14,param_4 + -0x2b0);
        *(short *)(_LAB_2c454fc0 + 0x12) = (short)(param_4 + -0x2b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar15) {
        uVar2 = *(ushort *)(*(char *)((int)piVar6 + uVar7) + 0x14);
        iVar10 = ((int)uVar7 >> 9) + 1;
        if (iVar10 != 0) {
          *(short *)(unaff_r7 + 0x22) = (short)iVar10;
          *(char *)(uVar2 + 0x2c4547d0) = (char)uVar1;
          iVar10 = _LAB_2c4549b4;
          iRam2c4547f8 = _LAB_2c454ac0 >> 0x16;
          *(undefined4 **)((uVar7 << 0x18 | (uint)(uVar1 >> 8) << 0x10) + 0x60) = puVar14 + 0x36;
          do {
            *(char *)(iVar10 + iVar12) = (char)iVar10;
            uRam00000084 = (undefined2)iVar10;
            puVar14[0xce] = iVar12;
            *(char *)(puVar14 + 0x56) = (char)(iVar10 << 4);
            puVar14[0xa4] = iVar12;
            puVar14[0xd3] = iVar10 << 4;
            iVar8 = *(int *)(_LAB_2c45484c + 8);
            piVar4 = *(int **)(_LAB_2c45484c + 0x14);
            iVar17 = _LAB_2c45484c + 0x18;
            iVar12 = iVar8 >> 10;
            **(undefined4 **)(_LAB_2c45484c + 4) = piVar4;
            iVar10 = *piVar4;
            piVar6 = (int *)piVar4[1];
            *(int *)(iVar10 + iVar12) = iVar8;
            iVar8 = iVar12 + (int)(piVar4 + 4);
            iVar11 = iVar10 + iVar8;
            *(int *)iVar10 = iVar10;
            *(int **)(iVar10 + 4) = piVar6;
            *(int *)(iVar10 + 8) = iVar8;
            *(int *)(iVar10 + 0xc) = iVar17;
            *(int *)(iVar10 + 0x10) = iVar11;
            *(int *)(iVar10 + 0x14) = iVar12;
            *(int **)(iVar10 + 0x18) = piVar4 + 4;
          } while (iVar11 < 0 != SCARRY4(iVar10,iVar8));
          *(short *)(piVar6 + 4) = (short)iVar11;
          coprocessor_store(2,in_cr1,puVar14 + 0x4a);
          piVar6[0x1f] = iVar8;
          *(int **)(*piVar6 + 0x4c) = piVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(param_3 + 0x24) = uVar13;
    unaff_r6 = uVar13 + 0xbb;
    *(char *)(param_3 + 0x14) = (char)unaff_r6;
    *param_1 = puVar5;
    param_3 = iRam2c4547bc;
    param_4 = (int)puVar14 + -0x79;
    if (puVar14 + -2 < &DAT_00000071 || param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((int)puVar5 + 0x12) = (char)param_1;
    in_OV = SBORROW4((int)puVar5 + 0x13U,0x92);
    param_2 = (undefined4 *)((int)puVar5 + -0x7f);
    in_NG = (int)param_2 < 0;
    in_ZR = param_2 == (undefined4 *)0x0;
    puVar3 = puVar14 + -0x29;
  } while (0x91 < (int)puVar5 + 0x13U);
  uVar9 = puVar14[-0x16];
  *(undefined1 *)(uVar13 + 0xd3) = 0;
  *param_2 = param_1;
  *(uint *)((int)puVar5 + -0x7b) = unaff_r6 * 0x2000000;
  *(undefined4 *)((int)puVar5 + -0x77) = uVar9;
  *(uint *)((int)puVar5 + -0x73) = unaff_r6;
  *(int *)((int)puVar5 + -0x6f) = unaff_r7;
  puVar14[0xb4] = unaff_r6 * 0x2000000;
  *(undefined2 *)(unaff_r7 + 0x73) = 0x73;
  puVar14[0xc6] = _LAB_2c454914;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

