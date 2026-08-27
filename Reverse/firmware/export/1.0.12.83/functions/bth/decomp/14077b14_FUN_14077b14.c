/* FUN_14077b14 @ 0x14077b14 */

/* WARNING: Removing unreachable block (ram,0x14077efa) */
/* WARNING: Removing unreachable block (ram,0x14077f0a) */
/* WARNING: Removing unreachable block (ram,0x14077f18) */
/* WARNING: Removing unreachable block (ram,0x1407817c) */
/* WARNING: Removing unreachable block (ram,0x14077f24) */
/* WARNING: Removing unreachable block (ram,0x14077f2a) */
/* WARNING: Removing unreachable block (ram,0x14077f38) */
/* WARNING: Removing unreachable block (ram,0x14077f48) */
/* WARNING: Removing unreachable block (ram,0x14077cc0) */
/* WARNING: Removing unreachable block (ram,0x140780b4) */
/* WARNING: Removing unreachable block (ram,0x140780ce) */
/* WARNING: Removing unreachable block (ram,0x140780d4) */
/* WARNING: Removing unreachable block (ram,0x140780f6) */
/* WARNING: Removing unreachable block (ram,0x140780de) */
/* WARNING: Removing unreachable block (ram,0x140780fc) */
/* WARNING: Removing unreachable block (ram,0x140780e0) */
/* WARNING: Removing unreachable block (ram,0x140780e8) */
/* WARNING: Removing unreachable block (ram,0x140780ec) */
/* WARNING: Removing unreachable block (ram,0x14077cd2) */
/* WARNING: Removing unreachable block (ram,0x14077cd6) */
/* WARNING: Removing unreachable block (ram,0x14077ce0) */
/* WARNING: Removing unreachable block (ram,0x1407809c) */
/* WARNING: Removing unreachable block (ram,0x14077cfa) */
/* WARNING: Removing unreachable block (ram,0x140780aa) */
/* WARNING: Removing unreachable block (ram,0x14077d02) */
/* WARNING: Removing unreachable block (ram,0x14077d16) */
/* WARNING: Removing unreachable block (ram,0x14077d30) */
/* WARNING: Removing unreachable block (ram,0x14077d36) */
/* WARNING: Removing unreachable block (ram,0x14077d46) */
/* WARNING: Removing unreachable block (ram,0x14077f58) */
/* WARNING: Removing unreachable block (ram,0x14077d50) */
/* WARNING: Removing unreachable block (ram,0x14077d5c) */
/* WARNING: Removing unreachable block (ram,0x14077d60) */
/* WARNING: Removing unreachable block (ram,0x14077d66) */
/* WARNING: Removing unreachable block (ram,0x14077d6e) */
/* WARNING: Removing unreachable block (ram,0x14077d74) */
/* WARNING: Removing unreachable block (ram,0x14077d8a) */
/* WARNING: Removing unreachable block (ram,0x14077d98) */
/* WARNING: Removing unreachable block (ram,0x14077d9e) */
/* WARNING: Removing unreachable block (ram,0x14077dae) */
/* WARNING: Removing unreachable block (ram,0x14077f78) */
/* WARNING: Removing unreachable block (ram,0x14077db8) */
/* WARNING: Removing unreachable block (ram,0x14077dc4) */
/* WARNING: Removing unreachable block (ram,0x14077dc8) */
/* WARNING: Removing unreachable block (ram,0x1407823a) */
/* WARNING: Removing unreachable block (ram,0x14077dd8) */
/* WARNING: Removing unreachable block (ram,0x14077de0) */
/* WARNING: Removing unreachable block (ram,0x1407822c) */
/* WARNING: Removing unreachable block (ram,0x14077de6) */
/* WARNING: Removing unreachable block (ram,0x14077de8) */
/* WARNING: Removing unreachable block (ram,0x14077e00) */
/* WARNING: Removing unreachable block (ram,0x14077e20) */
/* WARNING: Removing unreachable block (ram,0x14077e0c) */
/* WARNING: Removing unreachable block (ram,0x14077e32) */
/* WARNING: Removing unreachable block (ram,0x14077e40) */
/* WARNING: Removing unreachable block (ram,0x14077e0e) */
/* WARNING: Removing unreachable block (ram,0x14078120) */
/* WARNING: Removing unreachable block (ram,0x14077e1a) */
/* WARNING: Removing unreachable block (ram,0x14077f98) */
/* WARNING: Removing unreachable block (ram,0x14077fa0) */
/* WARNING: Removing unreachable block (ram,0x1407823e) */
/* WARNING: Removing unreachable block (ram,0x14077fbc) */
/* WARNING: Removing unreachable block (ram,0x140781a8) */
/* WARNING: Removing unreachable block (ram,0x14077fc4) */
/* WARNING: Removing unreachable block (ram,0x14078138) */
/* WARNING: Removing unreachable block (ram,0x1407824c) */
/* WARNING: Removing unreachable block (ram,0x14078256) */
/* WARNING: Removing unreachable block (ram,0x14078144) */
/* WARNING: Removing unreachable block (ram,0x1407814c) */
/* WARNING: Removing unreachable block (ram,0x1407815c) */
/* WARNING: Removing unreachable block (ram,0x1407816a) */
/* WARNING: Removing unreachable block (ram,0x14077fe4) */
/* WARNING: Removing unreachable block (ram,0x14077fec) */
/* WARNING: Removing unreachable block (ram,0x14077ff2) */
/* WARNING: Removing unreachable block (ram,0x14077ffe) */
/* WARNING: Removing unreachable block (ram,0x1407800e) */
/* WARNING: Removing unreachable block (ram,0x14078022) */
/* WARNING: Removing unreachable block (ram,0x14078030) */
/* WARNING: Removing unreachable block (ram,0x14078036) */
/* WARNING: Removing unreachable block (ram,0x1407803c) */
/* WARNING: Removing unreachable block (ram,0x1407803e) */
/* WARNING: Removing unreachable block (ram,0x14078048) */

void FUN_14077b14(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  ushort uVar10;
  
  iVar4 = DAT_14077e84;
  cVar1 = *param_1;
  cVar8 = '\0';
  if (param_1[1] != '\0') {
    cVar8 = param_1[2];
  }
  if (cVar1 == '\x03') {
    if (param_1[2] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14077e70,DAT_14077e54,param_1[0xb],param_1[2],
                   *(ushort *)(param_1 + 3) & 0xfff);
    }
    cVar1 = param_1[0xb];
    if (cVar1 == '\0') {
      uVar6 = 2;
      bVar7 = 0;
    }
    else {
      if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14077e5c,DAT_14077e54,*(ushort *)(param_1 + 3) & 0xfff,cVar1);
      }
      bVar7 = 0;
      uVar6 = 1;
    }
  }
  else {
    if (cVar1 != ',') {
      if (cVar1 == '\x05') {
        uVar10 = *(ushort *)(param_1 + 3) & 0xfff;
        pbVar5 = (byte *)FUN_1407667c(0,uVar10);
        iVar4 = DAT_14078200;
        if (((pbVar5 != (byte *)0x0) && ((int)((uint)pbVar5[1] << 0x1f) < 0)) &&
           ((*pbVar5 & 0x1e) == 8)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,DAT_14077e74,uVar10);
        }
        iVar9 = 0;
        FUN_140e5148(*(undefined4 *)(DAT_14078200 + 4),0xffffffff);
        pbVar5 = (byte *)(iVar4 + 0x20);
        while ((-1 < (int)((uint)*pbVar5 << 0x1f) || (uVar10 != *(ushort *)(pbVar5 + 8)))) {
          iVar9 = iVar9 + 1;
          pbVar5 = pbVar5 + 0x14;
          if (iVar9 == 0x19) {
            FUN_140e52d8(*(undefined4 *)(iVar4 + 4),DAT_140781b8);
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x43,DAT_1407825c,DAT_14078258,0,uVar10);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x44,DAT_140781b8,DAT_140781fc,iVar9,(*pbVar5 & 0xf) >> 1,uVar10);
      }
      if (cVar1 != '>') {
        return;
      }
      if (cVar8 != '\x01') {
        if (cVar8 != '\n') {
          return;
        }
        uVar10 = *(ushort *)(param_1 + 4) & 0xfff;
        if (param_1[3] == '\0') {
          FUN_14076d24(3,param_1[7],param_1 + 8,uVar10);
          iVar3 = DAT_14077e64;
          cVar1 = param_1[6];
          FUN_140e5148(*(undefined4 *)(iVar4 + 4),0xffffffff);
          iVar9 = 0;
          do {
            if (*(short *)(iVar3 + iVar9 * 0xd) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x45,DAT_14077e6c,DAT_14077e68,iVar9,3,uVar10,cVar1);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0x19);
          FUN_140e52d8(*(undefined4 *)(iVar4 + 4));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14078264,DAT_14078260,uVar10,param_1[3]);
      }
      if (param_1[3] != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_140781ec,DAT_140781e8,*(ushort *)(param_1 + 4) & 0xfff,param_1[3]);
      }
      uVar6 = 3;
      bVar7 = param_1[7];
      param_1 = param_1 + 8;
      goto LAB_14077b98;
    }
    if (param_1[2] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14077e60,DAT_14077e54,param_1[0xb],param_1[2],
                   *(ushort *)(param_1 + 3) & 0xfff);
    }
    bVar2 = param_1[0xb];
    bVar7 = bVar2 & 0xfd;
    if ((bVar2 & 0xfd) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14077e58,DAT_14077e54,*(ushort *)(param_1 + 3) & 0xfff,bVar2);
    }
    uVar6 = 2;
  }
  param_1 = param_1 + 5;
LAB_14077b98:
  FUN_14076d24(uVar6,bVar7,param_1);
  return;
}

