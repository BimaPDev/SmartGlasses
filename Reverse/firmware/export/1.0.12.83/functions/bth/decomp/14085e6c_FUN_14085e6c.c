/* FUN_14085e6c @ 0x14085e6c */

void FUN_14085e6c(uint param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 unaff_r4;
  int iVar16;
  char cVar17;
  code *pcVar18;
  uint local_28;
  uint3 local_24;
  undefined1 uStack_21;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  int *piVar15;
  
  local_1c = *DAT_14085f30;
  uVar9 = FUN_14085e30(param_1 & 0xfff,param_2,param_3,0);
  if (uVar9 == 0) {
    if (*DAT_14085f30 == local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14085f3c,param_1 & 0xfff,param_1);
    }
  }
  else if (*(char *)(uVar9 + 0x4b) == '\0') {
    if (*DAT_14085f30 == local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14085f34,0,0);
    }
  }
  else {
    uVar2 = *(ushort *)(param_2 + 8);
    *(undefined1 *)(uVar9 + 0x3d) = 5;
    if (*(char *)(uVar9 + 0x3c) == '\x01') {
      local_24 = (uint3)uVar2;
      local_20 = 0xffffffff;
      local_28 = uVar9;
      if (*(code **)(DAT_14085f38 + 0x5c) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14085f44,DAT_14085f40);
      }
      (**(code **)(DAT_14085f38 + 0x5c))(99,&local_28);
    }
    if (*DAT_14085f30 == local_1c) {
      uVar4 = *(undefined1 *)(uVar9 + 0x52);
      piVar14 = DAT_1408e3cc;
      while( true ) {
        piVar15 = piVar14 + 1;
        iVar16 = *piVar14;
        if ((iVar16 != 0) && (*(ushort *)(iVar16 + 0xe) == param_1)) break;
        piVar14 = piVar15;
        if (piVar15 == DAT_1408e3cc + 8) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_1408e3d0,uVar4,param_1);
        }
      }
      uStack_18 = unaff_r4;
      iVar13 = FUN_14075258(param_2);
      FUN_14075520(param_2,4);
      uVar2 = *(ushort *)(iVar13 + 2);
      switch(uVar2) {
      case 0:
      case 3:
      case 0x3f:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408e3d8,DAT_1408e3d4);
      case 1:
      case 5:
        iVar13 = FUN_14075258(param_2);
        uVar1 = *(undefined1 *)(iVar13 + 3);
        iVar13 = FUN_14075258(param_2);
        if ((*(ushort *)(param_2 + 8) < 4) ||
           ((uint)*(ushort *)(param_2 + 8) < CONCAT11(uVar1,*(undefined1 *)(iVar13 + 2)) + 4)) {
          puVar10 = (undefined1 *)FUN_14075258(param_2);
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_1408e3ec,uVar4,*puVar10);
        }
        if (*(short *)(param_2 + 8) == 0) {
          return;
        }
        _local_24 = uStack_18;
        puVar10 = (undefined1 *)FUN_14075258(param_2);
        puVar8 = DAT_1408df10;
        puVar7 = DAT_1408df0c;
        cVar17 = '\b';
        FUN_14075520(param_2,4);
        break;
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408e3e0,uVar4,*(undefined2 *)(param_2 + 8));
      case 4:
      case 6:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408e3dc,DAT_1408e3d4);
      case 7:
        iVar16 = FUN_14075258(param_2);
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_1408e3e4,uVar4,*(undefined1 *)(iVar16 + 3));
      default:
        if (uVar2 < 0x40) {
          local_28 = param_1;
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x43,DAT_1408e3f0,DAT_1408e3d4);
        }
        iVar16 = FUN_1408b254(iVar16,uVar2,5);
        if (iVar16 == 0) {
          local_28 = param_1;
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x43,DAT_1408e3f4,DAT_1408e3d4,*(undefined2 *)(iVar13 + 2));
        }
        uVar9 = (uint)*(byte *)(iVar16 + 0x96);
        if (uVar9 != 9) {
          if (*(char *)(iVar16 + 0xab) == '\0') {
            if (9 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x42,DAT_1408df84,uVar9,DAT_1408df88);
            }
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_1408df84,uVar9,*(undefined4 *)(DAT_1408df80 + uVar9 * 4));
          }
          *(undefined1 *)(iVar16 + 0x96) = 9;
        }
        iVar13 = FUN_140926cc();
        if ((iVar13 != 0) && (*(short *)(iVar16 + 0x16) == 0x1f)) {
          FUN_1407554c(param_2,4);
        }
        if (*(code **)(iVar16 + 0x9c) == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x1408df46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar16 + 0x9c))(uVar4,*(undefined4 *)(iVar16 + 0xc),param_2);
        return;
      }
      do {
        switch(*puVar10) {
        case 1:
          FUN_1408d010(uVar4,iVar16,puVar10[1],*(undefined2 *)(puVar10 + 2),param_2);
          break;
        case 2:
          FUN_1408d274(uVar4,iVar16,puVar10[1],param_2);
          break;
        case 3:
          FUN_1408d6a8(uVar4,iVar16,puVar10[1],param_2);
          break;
        case 4:
          FUN_1408d4f4(uVar4,iVar16,puVar10[1],*(undefined2 *)(puVar10 + 2),param_2);
          break;
        case 5:
          FUN_1408d858(uVar4,iVar16,puVar10[1],*(undefined2 *)(puVar10 + 2),param_2);
          break;
        case 6:
          FUN_1408db0c(uVar4,iVar16,puVar10[1],param_2);
          break;
        case 7:
          FUN_1408dba0(uVar4,iVar16,puVar10[1],param_2);
          break;
        case 8:
          pcVar18 = (code *)*puVar8;
          if (pcVar18 != (code *)0x0) {
            uVar6 = *(undefined2 *)(iVar16 + 0xe);
            uVar1 = puVar10[1];
            uVar5 = *(undefined2 *)(puVar10 + 2);
            uVar12 = FUN_14075258(param_2);
            (*pcVar18)(uVar4,uVar6,uVar1,uVar5,uVar12);
          }
          goto LAB_1408de1a;
        case 9:
          pcVar18 = (code *)*puVar7;
          if (pcVar18 != (code *)0x0) {
            uVar5 = *(undefined2 *)(iVar16 + 0xe);
            uVar12 = FUN_14075258(param_2);
            (*pcVar18)(uVar4,uVar5,uVar12,*(undefined2 *)(puVar10 + 2));
          }
          goto LAB_1408de1a;
        case 10:
          uVar5 = *(undefined2 *)(iVar16 + 0xe);
          uVar1 = puVar10[1];
          puVar11 = (undefined2 *)FUN_14075258(param_2);
          FUN_1408ce00(uVar4,uVar5,uVar1,*puVar11);
LAB_1408de1a:
          FUN_14075520(param_2,*(undefined2 *)(puVar10 + 2));
          sVar3 = *(short *)(param_2 + 8);
          goto joined_r0x1408de26;
        case 0xb:
          FUN_1408dc68(uVar4,*(undefined2 *)(puVar10 + 2),param_2);
          break;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_1408df08);
        }
        sVar3 = *(short *)(param_2 + 8);
joined_r0x1408de26:
        if (sVar3 == 0) {
          return;
        }
        puVar10 = (undefined1 *)FUN_14075258(param_2);
        cVar17 = cVar17 + -1;
        FUN_14075520(param_2,4);
        if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_1408df04);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

