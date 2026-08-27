/* FUN_2c443860 @ 0x2c443860 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c60e38e) overlaps instruction at (ram,0x2c60e38c)
    */

void FUN_2c443860(undefined4 param_1,int param_2,int param_3,undefined4 param_4,byte *param_5,
                 code *param_6,int param_7,int *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint extraout_r2;
  uint *extraout_r3;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint unaff_r6;
  int unaff_r7;
  uint *puVar14;
  undefined4 unaff_r9;
  byte *unaff_r10;
  uint uVar15;
  uint extraout_r12;
  int iVar16;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr14;
  undefined4 in_cr15;
  uint *unaff_s16;
  undefined8 uVar17;
  int in_stack_00000040;
  byte *in_stack_00000120;
  int *piVar18;
  
  *(short *)(param_2 + 0x10) = (short)in_stack_00000120;
  puVar4 = (undefined4 *)(param_2 * 0x10000);
  if ((int)puVar4 < 0 == (bool)in_OV) {
    do {
      VectorTableLookup(unaff_r9,param_2,1);
    } while (in_OV != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar12 = (int)(char)in_stack_00000120[param_3];
  func_0x2c60e992(puVar4 + 1,*puVar4,param_3,param_4,param_2);
  iVar16 = 0x2c60e395;
  uVar17 = func_0x2c313996();
  coprocessor_function2(3,0,6,in_cr15,in_cr14,in_cr6);
  puVar14 = (uint *)(unaff_r7 >> ((uint)uVar17 & 0xff));
  uVar10 = extraout_r2;
  puVar11 = extraout_r3;
  uVar15 = extraout_r12;
code_r0x2c60e39a:
  puVar8 = DAT_2c60e548;
  *(char *)((int)DAT_2c60e548 + 2) =
       (char)((uVar15 * (int)((ulonglong)uVar17 >> 0x20) + iVar12) * 0x10102 >> 0x18);
  *(char *)((int)puVar8 + 1) =
       (char)((uVar15 * ((unaff_r6 & 0xffff) >> 8) + iVar16) * 0x10102 >> 0x18);
  *(char *)puVar8 = (char)((uVar15 * (unaff_r6 & 0xff) + (int)uVar17) * 0x8081 >> 0x17);
LAB_2c60e3d6:
  puVar8 = DAT_2c60e548;
  *(char *)((int)puVar11 + -1) = (char)uVar10;
  uVar6 = *puVar8;
  do {
    puVar8 = puVar11;
    pbVar9 = in_stack_00000120;
    if (uVar10 < 3) goto LAB_2c60e27e;
    while( true ) {
      *(char *)(puVar11 + -1) = (char)uVar6;
      *(char *)((int)puVar11 + -3) = (char)(uVar6 >> 8);
      *(char *)((int)puVar11 + -2) = (char)(uVar6 >> 0x10);
      puVar8 = puVar11;
      pbVar9 = in_stack_00000120;
LAB_2c60e27e:
      if (unaff_r10 == pbVar9) {
        do {
          while( true ) {
            puVar14 = DAT_2c60e2c8;
            piVar3 = DAT_2c60e2a8;
            puVar4 = DAT_2c60e2a4;
            puVar8 = (uint *)((int)unaff_s16 + param_13);
            param_11 = param_11 + 1;
            param_8 = (int *)((int)param_8 + param_12);
            unaff_r10 = unaff_r10 + param_9;
            pbVar9 = param_5 + param_9;
            if (param_7 == param_11) {
              if (*DAT_2c60d854 != in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
                stack_chk_fail();
              }
              return;
            }
            unaff_s16 = puVar8;
            param_5 = pbVar9;
            if (param_6 == (code *)0x0) break;
            piVar18 = param_8;
            if (0 < param_10) {
              do {
                if (2 < *(byte *)((int)puVar8 + 3)) {
                  uVar10 = *puVar8;
                  iVar12 = *piVar18;
                  if (((uVar10 != *puVar14) || (*piVar3 != iVar12)) ||
                     ((uint)*pbVar9 != *DAT_2c60e2c4)) {
                    *DAT_2c60e2c4 = (uint)*pbVar9;
                    *puVar14 = uVar10;
                    *piVar3 = iVar12;
                    uVar5 = (*param_6)();
                    *puVar4 = uVar5;
                  }
                  *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
                  *(undefined1 *)((int)puVar8 + 1) = *(undefined1 *)((int)puVar4 + 1);
                  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar4 + 2);
                }
                pbVar9 = pbVar9 + 1;
                puVar8 = puVar8 + 1;
                piVar18 = piVar18 + 1;
              } while (unaff_r10 != pbVar9);
            }
          }
        } while (param_10 < 1);
        unaff_r9 = 0xff;
        puVar14 = (uint *)(param_8 + -1);
      }
      in_stack_00000120 = pbVar9 + 1;
      bVar2 = *pbVar9;
      uVar10 = (uint)bVar2;
      bVar1 = *(byte *)((int)puVar8 + 3);
      puVar14 = puVar14 + 1;
      unaff_r6 = *puVar14;
      puVar11 = puVar8 + 1;
      uVar6 = *puVar8;
      if ((0xfc < uVar10) || (bVar1 < 3)) break;
      if (2 < uVar10) {
        if (bVar1 < 0xfd) {
          if (((*DAT_2c60e538 != uVar10) || (*DAT_2c60e53c != bVar1)) ||
             ((unaff_r6 != *DAT_2c60e540 || (uVar6 != *DAT_2c60e544)))) {
            *DAT_2c60e538 = bVar2;
            *DAT_2c60e53c = bVar1;
            *DAT_2c60e540 = unaff_r6;
            *DAT_2c60e544 = uVar6;
            *(char *)((int)DAT_2c60e548 + 3) = (char)unaff_r9;
            uVar13 = (int)(short)(0xff - (ushort)bVar2) * (int)(short)(0xff - (ushort)bVar1) ^
                     0xff00;
            uVar10 = (uVar13 & 0xffff) >> 8;
            uVar15 = ((uint)bVar2 * 0xff) / uVar10 & 0xff;
            *DAT_2c60e54c = (byte)(uVar13 >> 8);
            iVar7 = 0xff - uVar15;
            iVar12 = iVar7 * ((uVar6 & 0xffffff) >> 0x10);
            iVar16 = iVar7 * ((uVar6 & 0xffff) >> 8);
            uVar17 = CONCAT44((unaff_r6 & 0xffffff) >> 0x10,iVar7 * (uVar6 & 0xff));
            goto code_r0x2c60e39a;
          }
          uVar10 = (uint)*DAT_2c60e54c;
          goto LAB_2c60e3d6;
        }
        iVar12 = 0xff - uVar10;
        *(char *)((int)puVar8 + 3) = (char)unaff_r9;
        uVar6 = ((unaff_r6 & 0xff) * uVar10 + iVar12 * (uVar6 & 0xff)) * 0x8081 >> 0x17 & 0xff |
                (((((unaff_r6 & 0xffff) >> 8) * uVar10 + iVar12 * ((uVar6 & 0xffff) >> 8)) * 0x8081
                 & 0x7fffffff) >> 0x17) << 8 |
                (((((unaff_r6 & 0xffffff) >> 0x10) * uVar10 + iVar12 * ((uVar6 & 0xffffff) >> 0x10))
                  * 0x8081 & 0x7fffffff) >> 0x17) << 0x10;
      }
    }
    *(byte *)((int)puVar8 + 3) = bVar2;
    uVar6 = unaff_r6;
  } while( true );
}

