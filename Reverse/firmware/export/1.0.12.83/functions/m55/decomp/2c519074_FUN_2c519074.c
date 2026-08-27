/* FUN_2c519074 @ 0x2c519074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c519074(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  undefined1 *puVar13;
  ushort uVar14;
  ushort uVar15;
  int iVar16;
  uint unaff_r4;
  undefined4 unaff_r5;
  int iVar17;
  undefined4 uVar18;
  short sStack_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  undefined1 auStack_70 [4];
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  iStack_34 = *_LAB_2c519330;
  uVar8 = FUN_2c602408(param_2,param_2,param_3,0);
  if (((uVar8 == 0x15) || (uVar8 == 0x18)) ||
     (iVar9 = FUN_2c602110(_LAB_2c519334,param_2), iVar9 == 1)) {
    iVar9 = FUN_2c602400(param_2);
    if (uVar8 == 0x2a) {
      if ((*(byte *)(iVar9 + 0x5c) & 7) == 2) {
        if (*_LAB_2c519330 == iStack_34) {
          uVar18 = *(undefined4 *)(iVar9 + 0x58);
          iVar11 = *_LAB_2c519070;
          FUN_2c607df0();
          iVar10 = FUN_2c614f58(uVar18);
          if (iVar10 == 3) {
            if ((*(byte *)(iVar9 + 0x5c) & 7) - 1 < 2) {
              FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x58));
            }
            *(undefined4 *)(iVar9 + 0x58) = 0;
            *(byte *)(iVar9 + 0x5c) = *(byte *)(iVar9 + 0x5c) & 0xf8 | 3;
            goto LAB_2c518f4e;
          }
          FUN_2c612838(uVar18,&stack0xffffffdc);
          uVar15 = (ushort)(unaff_r4 >> 0x10);
          if (iVar10 == 0) {
            if ((*(byte *)(iVar9 + 0x5c) & 7) - 1 < 2) {
              FUN_2c62bea8(*(undefined4 *)(iVar9 + 0x58));
            }
            uVar14 = (ushort)((unaff_r4 & 0x1fffff) >> 10);
            *(undefined4 *)(iVar9 + 0x58) = uVar18;
            uVar15 = uVar15 >> 5;
          }
          else {
            if ((iVar10 - 1U & 0xff) < 2) {
              if ((*(byte *)(iVar9 + 0x5c) & 7) - 1 < 2) {
                iVar16 = FUN_2c66c4ec(uVar18);
                iVar17 = *(int *)(iVar9 + 0x58);
                iVar16 = lv_mem_alloc(iVar16 + 1);
                if (iVar16 == 0) goto LAB_2c518f4e;
                FUN_2c6435c4(iVar16,uVar18);
                *(int *)(iVar9 + 0x58) = iVar16;
                if (iVar17 != 0) {
                  FUN_2c62bea8(iVar17);
                }
              }
              else {
                iVar16 = FUN_2c66c4ec(uVar18);
                iVar16 = lv_mem_alloc(iVar16 + 1);
                if (iVar16 == 0) goto LAB_2c518f4e;
                FUN_2c6435c4(iVar16,uVar18);
                *(int *)(iVar9 + 0x58) = iVar16;
              }
            }
            if (iVar10 == 2) {
              uVar7 = FUN_2c6033b4(iVar9,0,0x57);
              sVar2 = FUN_2c6033b4(iVar9,0,0x58);
              sVar3 = FUN_2c6033b4(iVar9,0,0x59);
              iStack_40 = (int)sVar3;
              uStack_3c = 0x1fff;
              uStack_38 = 0;
              FUN_2c62b954(&stack0xffffffe0,uVar18,uVar7,(int)sVar2);
              uVar14 = (ushort)unaff_r5 & 0x7ff;
              uVar15 = (ushort)((uint)unaff_r5 >> 0x10) & 0x7ff;
              unaff_r4 = unaff_r4 & 0x3ff;
            }
            else {
              uVar14 = (ushort)((unaff_r4 & 0x1fffff) >> 10);
              uVar15 = uVar15 >> 5;
            }
          }
          *(ushort *)(iVar9 + 0x56) = uVar15;
          *(ushort *)(iVar9 + 0x54) = uVar14;
          *(byte *)(iVar9 + 0x5c) = (byte)iVar10 & 7 | (byte)((unaff_r4 & 0x1f) << 3);
          FUN_2c607588(iVar9);
          FUN_2c607df0(iVar9);
LAB_2c518f4e:
          if (*_LAB_2c519070 == iVar11) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        goto LAB_2c51932a;
      }
    }
    else if (uVar8 == 0x2c) {
      psVar12 = (short *)FUN_2c602410(param_2);
      *psVar12 = *(short *)(iVar9 + 0x5e) * 3 + 7;
      psVar12[1] = *(short *)(iVar9 + 0x60) + 5;
    }
    else if (uVar8 < 0x19) {
      if ((int)((0x1240000U >> (uVar8 & 0xff)) << 0x1f) < 0) {
        iVar9 = FUN_2c602408(param_2);
        iVar10 = FUN_2c602400(param_2);
        if (iVar9 == 0x12) {
          puVar13 = (undefined1 *)FUN_2c602410(param_2);
          *puVar13 = 1;
        }
        else if ((iVar9 == 0x15) || (iVar9 == 0x18)) {
          FUN_2c6073ec(iVar10);
          FUN_2c6073f8(iVar10);
          sVar2 = FUN_2c6033b4(iVar10,0,0x32);
          sVar3 = FUN_2c6033b4(iVar10,0,0x12);
          sVar4 = FUN_2c6033b4(iVar10,0,0x13);
          sVar5 = FUN_2c6033b4(iVar10,0,0x10);
          sVar6 = FUN_2c6033b4(iVar10,0,0x11);
          FUN_2c607338(iVar10,&sStack_88);
          iVar11 = FUN_2c602110(_LAB_2c519334,param_2);
          if (((iVar11 == 1) && ((iVar9 == 0x15 && (*(short *)(iVar10 + 0x54) != 0)))) &&
             (*(short *)(iVar10 + 0x56) != 0)) {
            iVar9 = FUN_2c602608(param_2);
            sStack_7e = sVar5 + sVar2 + sStack_86;
            sStack_80 = sStack_88 + sVar2 + sVar3;
            sStack_7c = sStack_84 - (sVar4 + sVar2);
            sStack_7a = sStack_82 - (sVar2 + sVar6);
            uVar18 = *(undefined4 *)(iVar9 + 8);
            iVar11 = FUN_2c62a6b4(&sStack_80,uVar18);
            if (iVar11 != 0) {
              *(short **)(iVar9 + 8) = &sStack_80;
              sVar4 = sStack_82 - (sVar2 + sVar6);
              sStack_74 = *(short *)(iVar10 + 0x54);
              sVar2 = sVar2 + sVar3 + sStack_88;
              sStack_76 = *(short *)(iVar10 + 0x56);
              iVar11 = iVar10 + 0x34;
              *(short *)(iVar10 + 0x5e) = sStack_74;
              *(short *)(iVar10 + 0x60) = sStack_76;
              while( true ) {
                sStack_76 = sVar4 - sStack_76;
                sStack_74 = sVar2 + sStack_74;
                sStack_78 = sVar2;
                sStack_72 = sVar4;
                FUN_2c62a690(&sStack_78,0,(int)*(short *)(iVar11 + -0x10));
                sVar2 = sVar2 + *(short *)(iVar10 + 0x5e) + 3;
                bVar1 = *(byte *)(iVar10 + 0x5c);
                if ((bVar1 & 6) == 0) {
                  FUN_2c614a0c(auStack_70);
                  FUN_2c6008ac(iVar10,bVar1 & 6,auStack_70);
                  iVar16 = (int)*(short *)(iVar10 + 0x5e);
                  if (iVar16 < 0) {
                    iVar16 = iVar16 + 1;
                  }
                  uStack_6c = (undefined2)(iVar16 >> 1);
                  iVar16 = (int)*(short *)(iVar10 + 0x60);
                  if (iVar16 < 0) {
                    iVar16 = iVar16 + 1;
                  }
                  uStack_6a = (undefined2)(iVar16 >> 1);
                  FUN_2c614a3c(iVar9,auStack_70,&sStack_78,*(undefined4 *)(iVar10 + 0x58));
                }
                else if ((bVar1 & 7) == 2) {
                  FUN_2c6129e4(auStack_70);
                  FUN_2c6007ec(iVar10,0,auStack_70);
                  FUN_2c612a20(iVar9,auStack_70,&sStack_78,*(undefined4 *)(iVar10 + 0x58),0);
                }
                else {
                  FUN_2c614a3c(iVar9,0,iVar10 + 0x14);
                }
                iVar11 = iVar11 + 0x10;
                if (iVar11 == iVar10 + 100) break;
                sStack_76 = *(short *)(iVar10 + 0x60);
                sStack_74 = *(short *)(iVar10 + 0x5e);
              }
              *(undefined4 *)(iVar9 + 8) = uVar18;
            }
          }
        }
      }
    }
  }
  if (*_LAB_2c519330 == iStack_34) {
    return;
  }
LAB_2c51932a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

