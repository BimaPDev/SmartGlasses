/* FUN_2c4807e0 @ 0x2c4807e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4807e0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 *apuStack_d4 [2];
  uint auStack_cc [8];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  uint auStack_6c [16];
  uint uStack_2c;
  uint *puVar8;
  
  iVar10 = 0x40;
  uStack_2c = *_LAB_2c48096c;
  do {
    iVar5 = *(short *)(param_3 + 2) + 0x1f;
    if (iVar5 < 0) {
      iVar5 = *(short *)(param_3 + 2) + 0x3e;
    }
    uVar12 = FUN_2c47f7f4(auStack_cc,param_3 + 0x24,(iVar5 << 0x13) >> 0x18);
    uVar3 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0) break;
    apuStack_d4[0] = auStack_ac;
    apuStack_d4[1] = auStack_8c;
    iVar5 = FUN_2c47f728(auStack_cc,auStack_ac,auStack_8c,param_3);
    FUN_2c48029c(auStack_6c,param_3 + 0x44,apuStack_d4[iVar5 == 0],0,
                 (int)(short)(*(short *)(param_3 + 2) + 1),param_3);
    uVar3 = extraout_r1;
    if ('\0' < (char)(*param_3 << 1)) {
      uVar6 = 0;
      puVar7 = auStack_6c;
      do {
        puVar8 = puVar7 + 1;
        uVar3 = *puVar7;
        uVar6 = uVar6 | uVar3;
        puVar7 = puVar8;
      } while (auStack_6c + ((byte)(*param_3 << 1) - 1 & 0xff) + 1 != puVar8);
      if (uVar6 != 0) {
        iVar5 = (int)*(short *)(param_3 + 2);
        iVar10 = iVar5 + 7;
        if (iVar10 < 0) {
          iVar10 = iVar5 + 0xe;
        }
        uVar3 = iVar10 >> 3;
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            uVar6 = (uVar3 - 1) - iVar10;
            *(char *)(param_2 + iVar10) =
                 (char)(*(uint *)((int)auStack_cc + (uVar6 & 0xfffffffc)) >> ((uVar6 & 3) << 3));
            iVar10 = (int)(char)((char)iVar10 + '\x01');
          } while (iVar10 < (int)uVar3);
        }
        iVar10 = (int)param_3[1];
        if (0 < iVar10) {
          bVar4 = 0;
          puVar11 = (undefined1 *)(param_1 + -1);
          uVar6 = 0;
          do {
            uVar3 = (iVar10 + -1) - uVar6;
            bVar4 = bVar4 + 1;
            uVar6 = (uint)bVar4;
            uVar3 = *(uint *)((int)auStack_6c + (uVar3 & 0xfffffffc)) >> ((uVar3 & 3) << 3);
            puVar11 = puVar11 + 1;
            *puVar11 = (char)uVar3;
          } while ((int)uVar6 < iVar10);
          iVar10 = (int)param_3[1];
          cVar1 = *param_3;
          if (0 < iVar10) {
            bVar4 = 0;
            uVar6 = 0;
            puVar11 = (undefined1 *)(param_1 + iVar10);
            do {
              uVar9 = (iVar10 + -1) - uVar6;
              bVar4 = bVar4 + 1;
              uVar6 = (uint)bVar4;
              uVar3 = (uVar9 & 3) << 3;
              *puVar11 = (char)(*(uint *)((int)auStack_6c + (uVar9 & 0xfffffffc) + cVar1 * 4) >>
                               uVar3);
              puVar11 = puVar11 + 1;
            } while ((int)uVar6 < iVar10);
          }
        }
        uVar2 = 1;
        goto LAB_2c480954;
      }
    }
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  uVar2 = 0;
LAB_2c480954:
  if ((*_LAB_2c48096c ^ uStack_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,uVar3,*_LAB_2c48096c ^ uStack_2c,0);
}

