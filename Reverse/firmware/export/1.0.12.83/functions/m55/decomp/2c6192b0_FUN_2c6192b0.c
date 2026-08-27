/* FUN_2c6192b0 @ 0x2c6192b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c6192b0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_a0;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_44;
  short sStack_40;
  short sStack_3a;
  int iStack_34;
  
  iStack_34 = *_LAB_2c61931c;
  iVar1 = FUN_2c602408(param_2,param_2,param_3,0);
  if ((iVar1 - 0x15U & 0xff) < 2) {
    iVar2 = FUN_2c602400(param_2);
    if (iVar1 == 0x15) {
      FUN_2c61314c(auStack_8c);
      FUN_2c6004cc(iVar2,0,auStack_8c);
      uVar6 = (uint)*(byte *)(iVar2 + 0x26);
      uVar4 = (uint)*(byte *)(iVar2 + 0x24);
      uVar11 = (uint)*(byte *)(iVar2 + 0x25);
      uVar8 = ((uStack_44 & 0xffffff) >> 0x10) * 3 + ((uStack_44 & 0xffff) >> 8) * 4 +
              (uStack_44 & 0xff) >> 3;
      uVar5 = ((uStack_58 & 0xffffff) >> 0x10) * 3 + ((uStack_58 & 0xffff) >> 8) * 4 +
              (uStack_58 & 0xff) >> 3;
      uVar9 = ((uStack_50 & 0xffffff) >> 0x10) * 3 + ((uStack_50 & 0xffff) >> 8) * 4 +
              (uStack_50 & 0xff) >> 3;
      uVar7 = ((uStack_88 & 0xffffff) >> 0x10) * 3 + ((uStack_88 & 0xffff) >> 8) * 4 +
              (uStack_88 & 0xff) >> 3;
      uVar12 = ((uStack_84 & 0xffffff) >> 0x10) * 3 + ((uStack_84 & 0xffff) >> 8) * 4 +
               (uStack_84 & 0xff) >> 3;
      uVar10 = (uint)*(byte *)(iVar2 + 0x28);
      uStack_88 = CONCAT13(0xff,CONCAT12((char)(uVar10 * (uVar6 * uVar7 * 0x8081 >> 0x17) * 0x8081
                                               >> 0x17),
                                         CONCAT11((char)(uVar10 * (uVar11 * uVar7 * 0x8081 >> 0x17)
                                                         * 0x8081 >> 0x17),
                                                  (char)(uVar10 * (uVar4 * uVar7 * 0x8081 >> 0x17) *
                                                         0x8081 >> 0x17))));
      uStack_58._0_3_ =
           CONCAT12((char)(uVar10 * (uVar5 * *(byte *)(iVar2 + 0x26) * 0x8081 >> 0x17) * 0x8081 >>
                          0x17),
                    CONCAT11((char)(uVar10 * (uVar5 * *(byte *)(iVar2 + 0x25) * 0x8081 >> 0x17) *
                                    0x8081 >> 0x17),
                             (char)(uVar10 * (*(byte *)(iVar2 + 0x24) * uVar5 * 0x8081 >> 0x17) *
                                    0x8081 >> 0x17)));
      uStack_58 = CONCAT13(0xff,(undefined3)uStack_58);
      uVar5 = (uint)*(byte *)(iVar2 + 0x28);
      uStack_44._0_3_ =
           CONCAT12((char)((uVar6 * uVar8 * 0x8081 >> 0x17) * uVar5 * 0x8081 >> 0x17),
                    CONCAT11((char)(uVar5 * (uVar11 * uVar8 * 0x8081 >> 0x17) * 0x8081 >> 0x17),
                             (char)(uVar5 * (uVar4 * uVar8 * 0x8081 >> 0x17) * 0x8081 >> 0x17)));
      uStack_44 = CONCAT13(0xff,(undefined3)uStack_44);
      uVar5 = (uint)*(byte *)(iVar2 + 0x28);
      uVar7 = ((uStack_7c & 0xffffff) >> 0x10) * 3 + ((uStack_7c & 0xffff) >> 8) * 4 +
              (uStack_7c & 0xff) >> 3;
      uStack_50 = CONCAT13(0xff,CONCAT12((char)(uVar5 * (uVar9 * *(byte *)(iVar2 + 0x26) * 0x8081 >>
                                                        0x17) * 0x8081 >> 0x17),
                                         CONCAT11((char)(uVar5 * (uVar9 * *(byte *)(iVar2 + 0x25) *
                                                                  0x8081 >> 0x17) * 0x8081 >> 0x17),
                                                  (char)(uVar5 * (uVar9 * *(byte *)(iVar2 + 0x24) *
                                                                  0x8081 >> 0x17) * 0x8081 >> 0x17))
                                        ));
      iVar1 = (int)sStack_40 * (*(byte *)(iVar2 + 0x28) - 0x50);
      sStack_40 = (short)(int)((longlong)_LAB_2c619788 * (longlong)iVar1 >> 0x26) -
                  (short)(iVar1 >> 0x1f);
      iVar1 = (int)sStack_3a * (*(byte *)(iVar2 + 0x28) - 0x50);
      sStack_3a = (short)(int)((longlong)_LAB_2c619788 * (longlong)iVar1 >> 0x26) -
                  (short)(iVar1 >> 0x1f);
      uStack_84 = CONCAT13(0xff,CONCAT12((char)(uVar10 * (uVar6 * uVar12 * 0x8081 >> 0x17) * 0x8081
                                               >> 0x17),
                                         CONCAT11((char)(uVar10 * (uVar11 * uVar12 * 0x8081 >> 0x17)
                                                         * 0x8081 >> 0x17),
                                                  (char)(uVar10 * (uVar4 * uVar12 * 0x8081 >> 0x17)
                                                         * 0x8081 >> 0x17))));
      uStack_7c = CONCAT13(0xff,CONCAT12((char)((uVar6 * uVar7 * 0x8081 >> 0x17) * uVar10 * 0x8081
                                               >> 0x17),
                                         CONCAT11((char)(uVar10 * (uVar11 * uVar7 * 0x8081 >> 0x17)
                                                         * 0x8081 >> 0x17),
                                                  (char)(uVar10 * (uVar4 * uVar7 * 0x8081 >> 0x17) *
                                                         0x8081 >> 0x17))));
      uVar3 = FUN_2c602608(param_2);
      FUN_2c600b9c(auStack_d4,uVar3);
      uStack_cc = 0;
      uStack_a0 = 0;
      uStack_d0 = _LAB_2c619784;
      iStack_c8 = iVar2 + 0x14;
      puStack_c4 = auStack_8c;
      FUN_2c602340(iVar2,0x1a,auStack_d4);
      FUN_2c61319c(uVar3,auStack_8c,iVar2 + 0x14);
      iVar2 = FUN_2c602340(iVar2,0x1b,auStack_d4);
    }
  }
  else {
    iVar2 = FUN_2c602110(_LAB_2c619320,param_2);
    if (iVar2 == 1) {
      if (*_LAB_2c61931c == iStack_34) {
        return *param_2;
      }
      goto LAB_2c61977e;
    }
  }
  if (*_LAB_2c61931c == iStack_34) {
    return iVar2;
  }
LAB_2c61977e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

