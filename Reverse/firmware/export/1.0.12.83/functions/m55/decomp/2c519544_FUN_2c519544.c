/* FUN_2c519544 @ 0x2c519544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c519544(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ushort uVar12;
  short *psVar13;
  undefined1 uVar14;
  ushort uVar15;
  int iVar16;
  uint unaff_r4;
  char cVar17;
  undefined4 unaff_r5;
  int iVar18;
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
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [4];
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined1 uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5197e4;
  iVar9 = FUN_2c602408(param_2,param_2,param_3,0);
  if ((iVar9 == 0x15) || (iVar9 == 0x18)) {
    iVar10 = FUN_2c602400(param_2);
    if (iVar9 == 0x2a) goto LAB_2c519784;
    if ((iVar9 == 0x15) || (iVar9 == 0x18)) {
      iVar9 = FUN_2c602408(param_2);
      iVar10 = FUN_2c602400(param_2);
      FUN_2c6073ec();
      FUN_2c6073f8(iVar10);
      sVar2 = FUN_2c6033b4(iVar10,0,0x32);
      sVar3 = FUN_2c6033b4(iVar10,0,0x12);
      sVar4 = FUN_2c6033b4(iVar10,0,0x13);
      sVar5 = FUN_2c6033b4(iVar10,0,0x10);
      sVar6 = FUN_2c6033b4(iVar10,0,0x11);
      FUN_2c607338(iVar10,&sStack_88);
      iVar16 = FUN_2c602110(_LAB_2c5197e8,param_2);
      if (((iVar16 == 1) &&
          (((iVar9 == 0x15 && (*(short *)(iVar10 + 0x24) != 0)) && (*(short *)(iVar10 + 0x26) != 0))
          )) && (*(char *)(iVar10 + 0x2d) != '\0')) {
        iVar9 = FUN_2c602608(param_2);
        sStack_7e = sVar5 + sVar2 + sStack_86;
        sStack_80 = sStack_88 + sVar2 + sVar3;
        uVar11 = *(undefined4 *)(iVar9 + 8);
        sStack_7c = sStack_84 - (sVar4 + sVar2);
        sStack_7a = sStack_82 - (sVar6 + sVar2);
        iVar16 = FUN_2c62a6b4(&sStack_80,uVar11);
        if (iVar16 != 0) {
          *(short **)(iVar9 + 8) = &sStack_80;
          cVar17 = *(char *)(iVar10 + 0x2d);
          iVar16 = (int)(short)((sStack_84 + 1) - sStack_88) -
                   (int)(short)((short)cVar17 * *(short *)(iVar10 + 0x24) + (cVar17 + -1) * 3);
          if (iVar16 < 0) {
            iVar16 = iVar16 + 1;
          }
          sStack_78 = sVar2 + sVar3 + sStack_88 + (short)(iVar16 >> 1);
          sStack_74 = *(short *)(iVar10 + 0x24) + sStack_78;
          iVar16 = (int)(short)((sStack_82 + 1) - sStack_86) - (int)*(short *)(iVar10 + 0x26);
          if (iVar16 < 0) {
            iVar16 = iVar16 + 1;
          }
          sStack_76 = sStack_86 + (short)(iVar16 >> 1);
          sStack_72 = *(short *)(iVar10 + 0x26) + sStack_76;
          if ('\0' < cVar17) {
            psVar13 = &sStack_80;
            cVar17 = '\x01';
            while( true ) {
              iVar16 = FUN_2c62a6b4(auStack_70,&sStack_78,psVar13);
              if (iVar16 != 0) {
                bVar1 = *(byte *)(iVar10 + 0x2c);
                if ((bVar1 & 6) == 0) {
                  FUN_2c614a0c(auStack_68);
                  FUN_2c6008ac(iVar10,bVar1 & 6,auStack_68);
                  if (*(char *)(iVar10 + 0x2e) == cVar17) {
                    uVar14 = 0xff;
                  }
                  else {
                    uVar14 = 0x7f;
                  }
                  uStack_38._0_2_ = CONCAT11(uVar14,(undefined1)uStack_38);
                  iVar16 = (int)*(short *)(iVar10 + 0x24);
                  if (iVar16 < 0) {
                    iVar16 = iVar16 + 1;
                  }
                  uStack_64 = (undefined2)(iVar16 >> 1);
                  uStack_62 = uStack_64;
                  FUN_2c614a3c(iVar9,auStack_68,&sStack_78,*(undefined4 *)(iVar10 + 0x28));
                }
                else if ((bVar1 & 7) == 2) {
                  FUN_2c6129e4(auStack_68);
                  FUN_2c6007ec(iVar10,0,auStack_68);
                  if (*(char *)(iVar10 + 0x2e) == cVar17) {
                    uStack_48 = 0x7f;
                  }
                  FUN_2c612a20(iVar9,auStack_68,&sStack_78,*(undefined4 *)(iVar10 + 0x28),0);
                }
                else {
                  FUN_2c614a3c(iVar9,0,iVar10 + 0x14);
                }
              }
              cVar17 = cVar17 + '\x01';
              FUN_2c62a690(&sStack_78,(int)(short)(*(short *)(iVar10 + 0x24) + 3),0);
              if (*(char *)(iVar10 + 0x2d) < cVar17) break;
              psVar13 = *(short **)(iVar9 + 8);
            }
          }
          *(undefined4 *)(iVar9 + 8) = uVar11;
        }
      }
    }
  }
  else {
    iVar10 = FUN_2c602110(_LAB_2c5197e8,param_2);
    if ((iVar10 == 1) && (iVar10 = FUN_2c602400(param_2), iVar9 == 0x2a)) {
LAB_2c519784:
      if ((*(byte *)(iVar10 + 0x2c) & 7) == 2) {
        if (*_LAB_2c5197e4 == iStack_2c) {
          uVar11 = *(undefined4 *)(iVar10 + 0x28);
          iVar16 = *DAT_2c519540;
          FUN_2c607df0();
          iVar9 = FUN_2c614f58(uVar11);
          if (iVar9 == 3) {
            if ((*(byte *)(iVar10 + 0x2c) & 7) - 1 < 2) {
              FUN_2c62bea8(*(undefined4 *)(iVar10 + 0x28));
            }
            *(undefined4 *)(iVar10 + 0x28) = 0;
            *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xf8 | 3;
            goto LAB_2c51941e;
          }
          FUN_2c612838(uVar11,&stack0xffffffdc);
          uVar15 = (ushort)(unaff_r4 >> 0x10);
          if (iVar9 == 0) {
            if ((*(byte *)(iVar10 + 0x2c) & 7) - 1 < 2) {
              FUN_2c62bea8(*(undefined4 *)(iVar10 + 0x28));
            }
            uVar12 = (ushort)((unaff_r4 & 0x1fffff) >> 10);
            *(undefined4 *)(iVar10 + 0x28) = uVar11;
            uVar15 = uVar15 >> 5;
          }
          else {
            if ((iVar9 - 1U & 0xff) < 2) {
              if ((*(byte *)(iVar10 + 0x2c) & 7) - 1 < 2) {
                iVar7 = FUN_2c66c4ec(uVar11);
                iVar18 = *(int *)(iVar10 + 0x28);
                iVar7 = lv_mem_alloc(iVar7 + 1);
                if (iVar7 == 0) goto LAB_2c51941e;
                FUN_2c6435c4(iVar7,uVar11);
                *(int *)(iVar10 + 0x28) = iVar7;
                if (iVar18 != 0) {
                  FUN_2c62bea8(iVar18);
                }
              }
              else {
                iVar7 = FUN_2c66c4ec(uVar11);
                iVar7 = lv_mem_alloc(iVar7 + 1);
                if (iVar7 == 0) goto LAB_2c51941e;
                FUN_2c6435c4(iVar7,uVar11);
                *(int *)(iVar10 + 0x28) = iVar7;
              }
            }
            if (iVar9 == 2) {
              uVar8 = FUN_2c6033b4(iVar10,0,0x57);
              sVar2 = FUN_2c6033b4(iVar10,0,0x58);
              iStack_2c = (int)sVar2;
              sVar2 = FUN_2c6033b4(iVar10,0,0x59);
              iStack_40 = (int)sVar2;
              uStack_3c = 0x1fff;
              uStack_38 = 0;
              FUN_2c62b954(&stack0xffffffe0,uVar11,uVar8,iStack_2c);
              uVar12 = (ushort)unaff_r5 & 0x7ff;
              uVar15 = (ushort)((uint)unaff_r5 >> 0x10) & 0x7ff;
              unaff_r4 = unaff_r4 & 0x3ff;
            }
            else {
              uVar12 = (ushort)((unaff_r4 & 0x1fffff) >> 10);
              uVar15 = uVar15 >> 5;
            }
          }
          *(ushort *)(iVar10 + 0x26) = uVar15;
          *(ushort *)(iVar10 + 0x24) = uVar12;
          *(byte *)(iVar10 + 0x2c) = (byte)iVar9 & 7 | (byte)((unaff_r4 & 0x1f) << 3);
          FUN_2c607588(iVar10);
          FUN_2c607df0(iVar10);
LAB_2c51941e:
          if (*DAT_2c519540 != iVar16) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
        goto LAB_2c5197e0;
      }
    }
  }
  if (*_LAB_2c5197e4 == iStack_2c) {
    return;
  }
LAB_2c5197e0:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

