/* FUN_2c5fcc3c @ 0x2c5fcc3c */

/* WARNING: Removing unreachable block (ram,0x2c5fcf9a) */
/* WARNING: Removing unreachable block (ram,0x2c5fcdd4) */
/* WARNING: Removing unreachable block (ram,0x2c5fcdd8) */
/* WARNING: Removing unreachable block (ram,0x2c5fcdc4) */
/* WARNING: Removing unreachable block (ram,0x2c5fcdc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fcc3c(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  undefined4 uVar12;
  int iStack_78;
  char *pcStack_74;
  int iStack_70;
  int aiStack_6c [16];
  uint uStack_2c;
  
  puVar5 = _LAB_2c5fcf20;
  uStack_2c = *DAT_2c5fceec;
  FUN_2c644044(*DAT_2c5fcef0,0xffffffff);
  uVar6 = _LAB_2c5fcef8;
  uVar12 = _LAB_2c5fcef4;
  puVar4 = DAT_2c5fcef0;
  cVar2 = *(char *)((int)puVar5 + 0x4d);
  if (*(char *)((int)puVar5 + 0x4e) != cVar2) {
    *(char *)((int)puVar5 + 0x4e) = cVar2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x10b,_LAB_2c5fcf00,_LAB_2c5fcefc,uVar12,uVar6,cVar2);
  }
  FUN_2c644080(*DAT_2c5fcef0);
  FUN_2c644044(*puVar4,0xffffffff);
  cVar2 = *(char *)((int)puVar5 + 0x4f);
  if (*(char *)(puVar5 + 0x14) != cVar2) {
    *(char *)(puVar5 + 0x14) = cVar2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x115,_LAB_2c5fcf00,_LAB_2c5fcefc,_LAB_2c5fcf04,_LAB_2c5fcef8,cVar2);
  }
  FUN_2c644080(*DAT_2c5fcef0);
  func_0x2c644248(&iStack_78,*puVar5,0);
  if (iStack_78 == 0x10) {
    if (*_LAB_2c5fcfdc != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x11e,_LAB_2c5fcfd0,_LAB_2c5fcfd4,_LAB_2c5fcfd8,_LAB_2c5fcfc8);
    }
    if (pcStack_74 != (char *)0x0) {
      piVar10 = &iStack_70;
      piVar1 = aiStack_6c + 0xf;
      FUN_2c644044(*DAT_2c5fcef0,0xffffffff);
      aiStack_6c[0] = *_LAB_2c5fcf24;
      aiStack_6c[1] = _LAB_2c5fcf24[1];
      aiStack_6c[2] = _LAB_2c5fcf24[2];
      aiStack_6c[3] = _LAB_2c5fcf24[3];
      aiStack_6c[4] = _LAB_2c5fcf24[4];
      aiStack_6c[5] = _LAB_2c5fcf24[5];
      aiStack_6c[6] = _LAB_2c5fcf24[6];
      aiStack_6c[7] = _LAB_2c5fcf24[7];
      aiStack_6c[8] = _LAB_2c5fcf24[8];
      aiStack_6c[9] = _LAB_2c5fcf24[9];
      aiStack_6c[10] = _LAB_2c5fcf24[10];
      aiStack_6c[0xb] = _LAB_2c5fcf24[0xb];
      aiStack_6c[0xc] = _LAB_2c5fcf24[0xc];
      aiStack_6c[0xd] = _LAB_2c5fcf24[0xd];
      aiStack_6c[0xe] = _LAB_2c5fcf24[0xe];
      aiStack_6c[0xf] = _LAB_2c5fcf24[0xf];
      piVar8 = piVar10;
      do {
        piVar8 = piVar8 + 1;
        if (*piVar8 != 0) {
          *(undefined1 *)(*piVar8 + 0x13) = 1;
          FUN_2c5fc87c();
        }
      } while (piVar1 != piVar8);
      FUN_2c644080(*DAT_2c5fcef0);
      if (((pcStack_74 != (char *)0x0) &&
          (iVar7 = FUN_2c66b624(*(undefined4 *)(pcStack_74 + 0x28),_LAB_2c5fcf0c), iVar7 != 0)) &&
         (iVar7 = FUN_2c4969c8(), iVar7 != 0)) {
        FUN_2c4967a0(1);
      }
      bVar3 = 0;
      piVar8 = piVar10;
      do {
        piVar8 = piVar8 + 1;
        piVar9 = (int *)*piVar8;
        if (((piVar9 != (int *)0x0) && ((char)piVar9[5] != '\0')) &&
           ((bool)(pcStack_74 != (char *)0x0 & (bVar3 ^ 1)))) {
          if (*pcStack_74 == '\0') {
            uVar12 = *(undefined4 *)(pcStack_74 + 0x28);
            iVar7 = FUN_2c66b624(piVar9[7],uVar12);
            if (iVar7 == 0) {
              if (*_LAB_2c5fcf08 != '\0') {
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x15a,_LAB_2c5fcfd0,_LAB_2c5fcfd4,_LAB_2c5fcfcc,_LAB_2c5fcfc8,uVar12);
              }
              if (((code *)*piVar9 != (code *)0x0) &&
                 ((*(code *)*piVar9)(piVar9[3],*(undefined4 *)(pcStack_74 + 4),
                                     *(undefined4 *)(pcStack_74 + 8),
                                     *(undefined4 *)(pcStack_74 + 0xc),
                                     *(undefined4 *)(pcStack_74 + 0x10)), *_LAB_2c5fcf08 != '\0')) {
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x160,_LAB_2c5fcf00,_LAB_2c5fcefc,_LAB_2c5fcf1c,_LAB_2c5fcef8,
                      *(undefined4 *)(pcStack_74 + 0x28));
              }
              bVar3 = 1;
              goto LAB_2c5fce36;
            }
            iVar7 = FUN_2c66b624(uVar12,_LAB_2c5fcf18);
            if (iVar7 == 0) {
              pcVar11 = (code *)*piVar9;
              if (pcVar11 != (code *)0x0) {
                iVar7 = piVar9[3];
LAB_2c5fceaa:
                bVar3 = 0;
                (*pcVar11)(iVar7,*(undefined4 *)(pcStack_74 + 4),*(undefined4 *)(pcStack_74 + 8),
                           *(undefined4 *)(pcStack_74 + 0xc),*(undefined4 *)(pcStack_74 + 0x10));
                goto LAB_2c5fce36;
              }
            }
            else {
              iVar7 = FUN_2c66b624(uVar12,_LAB_2c5fcf14);
              if ((iVar7 == 0) && (*(char *)((int)piVar9 + 0x12) != '\0')) {
                pcVar11 = (code *)*piVar9;
                *(undefined1 *)((int)piVar9 + 0x12) = 0;
                if (pcVar11 != (code *)0x0) {
                  iVar7 = piVar9[3];
                  goto LAB_2c5fceaa;
                }
              }
            }
          }
          bVar3 = 0;
        }
LAB_2c5fce36:
      } while (piVar1 != piVar8);
      FUN_2c644044(*DAT_2c5fcef0,0xffffffff);
      do {
        while( true ) {
          piVar10 = piVar10 + 1;
          if ((*piVar10 == 0) || (*(char *)(*piVar10 + 0x13) == '\0')) break;
          FUN_2c5fc7c4();
          if (piVar10 == piVar1) goto LAB_2c5fce64;
        }
      } while (piVar10 != piVar1);
LAB_2c5fce64:
      if ((*_LAB_2c5fcf10 != 0) && (pcStack_74 != (char *)0x0)) {
        FUN_2c5fbddc(pcStack_74);
      }
      FUN_2c644080(*DAT_2c5fcef0);
      uVar6 = 1;
      uVar12 = extraout_r1_00;
      goto LAB_2c5fccb0;
    }
  }
  uVar6 = 0;
  uVar12 = extraout_r1;
LAB_2c5fccb0:
  if ((*DAT_2c5fceec ^ uStack_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar6,uVar12,*DAT_2c5fceec ^ uStack_2c,0);
}

