/* FUN_2c530264 @ 0x2c530264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c530264(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  
  piVar5 = _LAB_2c53066c;
  piVar11 = _LAB_2c5304a8;
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 != '\x12') {
    cVar2 = *(char *)(param_1 + 5);
    if (cVar2 == '\x13') {
      if (*_LAB_2c5304a8 == 0) {
        FUN_2c4723c4();
        *piVar11 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x10);
      uVar3 = *(undefined1 *)(param_1 + 5);
      *(undefined1 *)(puVar6 + 1) = 0x12;
      uVar7 = _DAT_2c5304ac;
      *(undefined1 *)((int)puVar6 + 5) = uVar3;
      *puVar6 = uVar7;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar7 = *(undefined4 *)(param_1 + 8);
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      piVar11 = (int *)puVar6[3];
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      if ((piVar11 != (int *)0x0) && (iVar9 = piVar11[1], piVar11[1] = iVar9 + -1, iVar9 + -1 == 0))
      {
        (**(code **)(*piVar11 + 8))(piVar11);
        iVar9 = piVar11[2];
        piVar11[2] = iVar9 + -1;
        if (iVar9 + -1 == 0) {
          (**(code **)(*piVar11 + 0xc))(piVar11);
        }
      }
      uVar7 = _DAT_2c5304b0;
      bVar4 = *(byte *)(param_1 + 4);
      *(byte *)(puVar6 + 1) = bVar4;
      *puVar6 = uVar7;
      uVar10 = bVar4 - 0x13 & 0xff;
      uVar7 = _LAB_2c5304c8;
      if (uVar10 < 0xd) {
        uVar7 = *(undefined4 *)(_DAT_2c530498 + uVar10 * 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5304bc,0xa7,_LAB_2c5304b8,_LAB_2c5304b4,uVar7);
    }
    if (cVar2 != '\x14') {
      uVar7 = _LAB_2c5304c8;
      if ((byte)(cVar2 - 0x13) < 0xd) {
        uVar7 = *(undefined4 *)(_DAT_2c530498 + (uint)(byte)(cVar2 - 0x13) * 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5304a4,0xeb,_LAB_2c5304a0,_LAB_2c53049c,uVar7);
    }
    if (cVar1 == '\x1f') {
      if ((*_LAB_2c530668 == 0) && (*_LAB_2c530698 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c530690,0x5e,_LAB_2c5306a0,_LAB_2c53069c);
      }
      if (*(int *)(*_LAB_2c530668 + 8) == 0) {
        if (*_LAB_2c53066c == 0) {
          FUN_2c4723c4();
          *piVar5 = 1;
        }
        puVar6 = (undefined4 *)FUN_2c47245c(0,0x10);
        uVar3 = *(undefined1 *)(param_1 + 5);
        *puVar6 = _DAT_2c530670;
        *(undefined1 *)((int)puVar6 + 5) = uVar3;
        *(undefined1 *)(puVar6 + 1) = 0x12;
        puVar6[2] = 0;
        puVar6[3] = 0;
        uVar7 = *(undefined4 *)(param_1 + 8);
        uVar8 = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        piVar11 = (int *)puVar6[3];
        puVar6[2] = uVar7;
        puVar6[3] = uVar8;
        if ((piVar11 != (int *)0x0) &&
           (iVar9 = piVar11[1], piVar11[1] = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*piVar11 + 8))(piVar11);
          iVar9 = piVar11[2];
          piVar11[2] = iVar9 + -1;
          if (iVar9 + -1 == 0) {
            (**(code **)(*piVar11 + 0xc))(piVar11);
          }
        }
        uVar7 = _DAT_2c5306a4;
        bVar4 = *(byte *)(param_1 + 4);
        *(byte *)(puVar6 + 1) = bVar4;
        *puVar6 = uVar7;
        uVar10 = bVar4 - 0x13 & 0xff;
        uVar7 = _LAB_2c5306ac;
        if (uVar10 < 0xd) {
          uVar7 = *(undefined4 *)(_DAT_2c530678 + uVar10 * 4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c530684,0x84,_LAB_2c5306a8,_LAB_2c53067c,uVar7);
      }
      if (*_LAB_2c53066c == 0) {
        FUN_2c4723c4();
        *piVar5 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x10);
      uVar3 = *(undefined1 *)(param_1 + 5);
      *(undefined1 *)(puVar6 + 1) = 0x12;
      uVar7 = _DAT_2c530670;
      *(undefined1 *)((int)puVar6 + 5) = uVar3;
      *puVar6 = uVar7;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar7 = *(undefined4 *)(param_1 + 8);
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      piVar11 = (int *)puVar6[3];
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      if ((piVar11 != (int *)0x0) && (iVar9 = piVar11[1], piVar11[1] = iVar9 + -1, iVar9 + -1 == 0))
      {
        (**(code **)(*piVar11 + 8))(piVar11);
        iVar9 = piVar11[2];
        piVar11[2] = iVar9 + -1;
        if (iVar9 + -1 == 0) {
          (**(code **)(*piVar11 + 0xc))(piVar11);
        }
      }
      uVar7 = _DAT_2c530674;
      bVar4 = *(byte *)(param_1 + 4);
      *(byte *)(puVar6 + 1) = bVar4;
      *puVar6 = uVar7;
      uVar10 = bVar4 - 0x13 & 0xff;
      uVar7 = _LAB_2c5306ac;
      if (uVar10 < 0xd) {
        uVar7 = *(undefined4 *)(_DAT_2c530678 + uVar10 * 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c530684,0x99,_LAB_2c530680,_LAB_2c53067c,uVar7);
    }
    if (cVar1 == '\x15') {
      if (*_LAB_2c5304a8 == 0) {
        FUN_2c4723c4();
        *piVar11 = 1;
      }
      puVar6 = (undefined4 *)FUN_2c47245c(0,0x10);
      uVar3 = *(undefined1 *)(param_1 + 5);
      *(undefined1 *)(puVar6 + 1) = 0x12;
      uVar7 = _DAT_2c5304ac;
      *(undefined1 *)((int)puVar6 + 5) = uVar3;
      *puVar6 = uVar7;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar7 = *(undefined4 *)(param_1 + 8);
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      piVar11 = (int *)puVar6[3];
      puVar6[2] = uVar7;
      puVar6[3] = uVar8;
      if ((piVar11 != (int *)0x0) && (iVar9 = piVar11[1], piVar11[1] = iVar9 + -1, iVar9 + -1 == 0))
      {
        (**(code **)(*piVar11 + 8))(piVar11);
        iVar9 = piVar11[2];
        piVar11[2] = iVar9 + -1;
        if (iVar9 + -1 == 0) {
          (**(code **)(*piVar11 + 0xc))(piVar11);
        }
      }
      uVar7 = _LAB_2c5304cc;
      bVar4 = *(byte *)(param_1 + 4);
      *(byte *)(puVar6 + 1) = bVar4;
      *puVar6 = uVar7;
      uVar10 = bVar4 - 0x13 & 0xff;
      uVar7 = _LAB_2c5306ac;
      if (uVar10 < 0xd) {
        uVar7 = *(undefined4 *)(_DAT_2c530498 + uVar10 * 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5304bc,0x99,_LAB_2c5304d0,_LAB_2c5304b4,uVar7);
    }
  }
  return 0;
}

