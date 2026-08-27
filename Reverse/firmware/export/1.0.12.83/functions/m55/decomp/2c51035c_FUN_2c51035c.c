/* FUN_2c51035c @ 0x2c51035c */

void FUN_2c51035c(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  char cVar9;
  int local_30;
  int local_2c;
  
  uVar1 = DAT_2c5105b0;
  iVar3 = (int)(char)param_3[0x24];
  local_2c = *DAT_2c5105a0;
  if (iVar3 == 0) {
    iVar3 = *param_1;
    if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5105a8,0x68a,DAT_2c5105b0,DAT_2c5105ac,DAT_2c5105a4);
    }
    if (*(int *)(param_2 + 0x1604) != 0) {
      iVar4 = FUN_2c50ff9c(param_3[0x16],&local_30);
      if (iVar4 == 0) {
        FUN_2c50f860(iVar3);
        iVar4 = FUN_2c50ff9c(param_3[0x16],&local_30);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5105a8,0x68f,DAT_2c5105b0,DAT_2c5105ac,DAT_2c5105bc);
        }
      }
      *(char *)(param_3 + 0x24) = (char)param_3[0x24] + '\x01';
      *param_3 = local_30;
      iVar4 = param_1[(uint)*(byte *)(param_2 + 0x1600) * 3 + 0xb0b];
      if (iVar4 == 0) {
        iVar4 = FUN_2c6033b4(*param_1,0,0x57);
      }
      *(short *)(iVar3 + 0x414) = *(short *)(iVar3 + 0x414) + *(short *)(iVar4 + 8);
      sVar2 = FUN_2c6033b4(iVar3,0,0x59);
      *(short *)(iVar3 + 0x414) = sVar2 + *(short *)(iVar3 + 0x414);
      FUN_2c51003c(param_1,param_2,param_3,0,0,0);
    }
  }
  else {
    if (0 < iVar3) {
      cVar9 = '\0';
      iVar4 = 0;
      do {
        while( true ) {
          puVar6 = (uint *)param_3[iVar4];
          if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,DAT_2c5105a8,0x69e,uVar1,DAT_2c5105ac,DAT_2c5105b4);
          }
          uVar5 = *(uint *)(param_2 + 0x160c);
          uVar7 = *puVar6;
          if (uVar5 < puVar6[1] + uVar7) break;
LAB_2c5103a2:
          cVar9 = cVar9 + '\x01';
          iVar3 = (int)(char)param_3[0x24];
          iVar4 = (int)cVar9;
          if (iVar3 <= iVar4) goto LAB_2c51040c;
        }
        if (uVar7 <= uVar5) {
          puVar6[1] = uVar5 - uVar7;
          *(undefined1 *)(puVar6 + 99) = 0;
          *(undefined2 *)(puVar6 + 0x62) =
               *(undefined2 *)((int)puVar6 + ((uVar5 - uVar7) + 0x84) * 2);
          goto LAB_2c5103a2;
        }
        cVar9 = cVar9 + '\x01';
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_2c62c3b0(puVar6 + 2,0x100);
        FUN_2c62c3b0(puVar6 + 0x42,0x82);
        *(undefined2 *)((int)puVar6 + 0x18a) = 0;
        *(undefined1 *)(puVar6 + 99) = 0;
        FUN_2c62a624((int)puVar6 + 0x18e,0,0,0,0);
        *puVar6 = uVar7;
        iVar4 = (int)cVar9;
        iVar3 = (int)(char)param_3[0x24];
      } while (iVar4 < iVar3);
LAB_2c51040c:
      if (0 < iVar3) {
        piVar8 = param_3 + -1;
        iVar4 = 0;
        do {
          piVar8 = piVar8 + 1;
          if (*(char *)(*piVar8 + 0x18c) == '\0') goto LAB_2c510430;
          iVar4 = iVar4 + 1;
        } while ((char)iVar4 < iVar3);
      }
    }
    iVar4 = iVar3 + -1;
LAB_2c510430:
    piVar8 = (int *)param_3[iVar4];
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5105a8,0x6bd,DAT_2c5105b0,DAT_2c5105ac,DAT_2c5105b8);
    }
    uVar7 = *(uint *)(param_2 + 0x1608);
    uVar5 = *piVar8 + piVar8[1];
    if (uVar5 < uVar7 + *(uint *)(param_2 + 0x1604)) {
      if (uVar5 < uVar7) {
        uVar5 = 0;
      }
      else {
        if (*(uint *)(param_2 + 0x1604) <= uVar5 - uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5105a8,0x6c5,DAT_2c5105b0,DAT_2c5105ac,DAT_2c5105c0);
        }
        uVar5 = uVar5 - uVar7 & 0xffff;
      }
      FUN_2c51003c(param_1,param_2,param_3,(int)(char)iVar4,uVar5,(int)(short)piVar8[0x62]);
    }
  }
  if (*DAT_2c5105a0 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

