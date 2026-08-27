/* FUN_2c4fe430 @ 0x2c4fe430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fe430(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  int iStack_34;
  
  iVar16 = *(int *)(param_3 + 8);
  iStack_34 = *_LAB_2c4fe73c;
  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c4fe744,0x328,_LAB_2c4fe754,_LAB_2c4fe748,_LAB_2c4fe750);
  }
  do {
    iVar7 = FUN_2c607440(param_1);
    if ((*(char *)(param_1 + 0x115) == '\0') || (iVar16 != *(int *)(param_1 + 0x38))) {
      iVar13 = *(int *)(param_1 + 0xc0);
      iVar9 = *(int *)(iVar16 + 0x1c);
      if (iVar13 <= *(int *)(iVar16 + 0x18)) {
        if (iVar7 + iVar13 < iVar9) goto LAB_2c4fe478;
        goto LAB_2c4fe480;
      }
      if (iVar13 < iVar9) goto LAB_2c4fe480;
LAB_2c4fe478:
      if ((*(int *)(iVar16 + 0x18) < iVar7 + iVar13) && (iVar7 + iVar13 < iVar9)) goto LAB_2c4fe480;
    }
    else {
LAB_2c4fe480:
      FUN_2c60747c(param_1,&sStack_3c);
      sVar4 = FUN_2c607404(param_1);
      sVar5 = FUN_2c6033b4(param_1,0,0x12);
      sVar6 = FUN_2c6033b4(param_1,0,0x13);
      sVar12 = sStack_3c;
      puVar8 = (undefined4 *)FUN_2c4fe3e8(param_1);
      sVar3 = (short)*(undefined4 *)(iVar16 + 0x18) + sStack_3a;
      iVar7 = *(int *)(param_1 + 0xc0);
      sStack_40 = sStack_3c;
      sStack_3e = sVar3 - (short)iVar7;
      if (iVar16 == param_1 + 0x74) {
        if (*(char *)(param_1 + 0x115) != '\0') {
          sStack_3e = sVar3;
        }
        *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_1 + 0x116);
        uVar15 = *(uint *)(param_1 + 0x2c);
        if (uVar15 != 0) {
          sVar4 = sVar4 - (sVar5 + sVar6);
          if (sVar4 < 0x150) {
            sVar12 = sVar12 + 0x150;
          }
          else {
            sVar12 = sVar12 + sVar4;
          }
          uVar10 = 1;
          do {
            iVar7 = *(int *)(*(int *)(param_1 + 0x24) + uVar10 * 4 + -4);
            if ((iVar7 != 10) && (iVar7 != 0xd)) {
              uVar11 = 0;
              if (uVar10 < uVar15) {
                uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar10 * 4);
              }
              sVar4 = FUN_2c6298c0(*puVar8,iVar7,uVar11);
              if ((int)sVar12 < (int)sVar4 + (int)sStack_40) break;
              func_0x2c613140(param_2,puVar8,&sStack_40,iVar7);
              uVar15 = *(uint *)(param_1 + 0x2c);
              sStack_40 = sVar4 + sStack_40 + *(short *)((int)puVar8 + 0x1a);
            }
            bVar1 = uVar10 < uVar15;
            uVar10 = uVar10 + 1;
          } while (bVar1);
        }
      }
      else {
        iVar14 = *(int *)(iVar16 + 8);
        iVar13 = *(int *)(param_1 + 0x48);
        iVar9 = *(int *)(param_1 + 0x4c);
        if (iVar14 == iVar13) {
          if (iVar14 != iVar9) goto LAB_2c4fe64c;
          bVar18 = *(byte *)(param_1 + 0x111);
LAB_2c4fe6ea:
          *(byte *)(puVar8 + 8) = bVar18;
        }
        else if (iVar14 == iVar9) {
LAB_2c4fe64c:
          bVar2 = *(byte *)(param_1 + 0x110);
          uVar10 = (uint)bVar2;
          bVar18 = *(byte *)(param_1 + 0x111);
          uVar15 = (uint)bVar18;
          if (uVar15 <= uVar10) goto LAB_2c4fe6ea;
          iVar17 = *(int *)(*(int *)(iVar9 + 0xc) + 0x18);
          iVar9 = *(int *)(*(int *)(iVar13 + 0xc) + 0x18);
          if (iVar17 < iVar9) {
            iVar9 = iVar9 - iVar17;
          }
          else {
            iVar9 = iVar17 - iVar9;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,_LAB_2c4fe744,0x364,_LAB_2c4fe74c,_LAB_2c4fe748,_LAB_2c4fe740);
            }
          }
          fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
          if (iVar17 < iVar7) {
            iVar7 = iVar7 - iVar17;
          }
          else {
            iVar7 = iVar17 - iVar7;
          }
          fVar20 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
          if (iVar14 == iVar13) {
            fVar21 = (float)VectorSignedToFloat(uVar15 - uVar10,(byte)(in_fpscr >> 0x16) & 3);
            uVar11 = VectorFloatToUnsigned(fVar21 * (fVar20 / fVar19),3);
            *(byte *)(puVar8 + 8) = bVar2 + (char)uVar11;
          }
          else {
            fVar21 = (float)VectorSignedToFloat(uVar15 - uVar10,(byte)(in_fpscr >> 0x16) & 3);
            uVar11 = VectorFloatToUnsigned(fVar21 * (1.0 - fVar20 / fVar19),3);
            *(byte *)(puVar8 + 8) = bVar2 + (char)uVar11;
          }
        }
        else {
          *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_1 + 0x110);
        }
        if (*(char *)(param_1 + 0x115) != '\0') {
          sStack_3e = sStack_3e + *(short *)(param_1 + 0x118) +
                      (short)*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
        }
        uVar15 = *(uint *)(iVar16 + 0xc);
        uVar10 = *(uint *)(iVar16 + 0x10);
        if (uVar15 <= uVar10) {
          do {
            uVar15 = uVar15 + 1;
            iVar7 = *(int *)(*(int *)(param_1 + 0x28) + uVar15 * 4 + -4);
            if ((iVar7 != 10) && (iVar7 != 0xd)) {
              uVar11 = 0;
              if (uVar15 <= uVar10) {
                uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar15 * 4);
              }
              sVar4 = FUN_2c6298c0(*puVar8,iVar7,uVar11);
              func_0x2c613140(param_2,puVar8,&sStack_40,iVar7);
              uVar10 = *(uint *)(iVar16 + 0x10);
              sStack_40 = sVar4 + sStack_40 + *(short *)((int)puVar8 + 0x1a);
            }
          } while (uVar15 <= uVar10);
        }
      }
    }
    if (*(int *)(param_3 + 0xc) == iVar16) {
      if (*_LAB_2c4fe73c == iStack_34) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    iVar16 = *(int *)(iVar16 + 4);
  } while( true );
}

