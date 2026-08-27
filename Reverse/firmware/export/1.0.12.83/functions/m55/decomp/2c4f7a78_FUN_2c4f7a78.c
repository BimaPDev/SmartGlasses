/* FUN_2c4f7a78 @ 0x2c4f7a78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f7a78(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iStack_38;
  undefined2 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4f7bf8;
  iVar2 = func_0x2c49372c(8,param_2,param_3,0);
  if ((iVar2 == 0) && (*_LAB_2c4f7bfc != '\0')) {
    if (*_LAB_2c4f7c00 != '\0') {
      FUN_2c674268(param_1,0,param_2);
    }
    iStack_38 = _LAB_2c4f7c0c;
    puStack_34 = _LAB_2c4f7c08;
    uStack_20 = (uint)((ulonglong)_LAB_2c4f7c04 * (ulonglong)param_2 >> 0x22);
    if (param_2 < 6) {
      uStack_20 = 0;
    }
    else {
      uVar6 = 0;
      puVar11 = _LAB_2c4f7c08;
      do {
        iVar2 = uVar6 * 4;
        *puVar11 = *param_1;
        *(undefined2 *)(iStack_38 + uVar6 * 4) = param_1[1];
        uVar6 = uVar6 + 1;
        *(undefined2 *)(iStack_38 + iVar2 + 2) = param_1[2];
        param_1 = param_1 + 3;
        puVar11 = puVar11 + 1;
      } while (uVar6 < uStack_20);
    }
    uStack_28 = _LAB_2c4f7c10;
    uStack_24 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x2c4fb048(0,&iStack_38);
    if (3 < *_LAB_2c4f7c14) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x314,uRam2c4f7c38,uRam2c4f7c34,uRam2c4f7c30,_LAB_2c4f7c2c,param_2);
    }
    iVar2 = FUN_2c490280();
    pbVar9 = (byte *)(iVar2 + *_DAT_2c4f7c1c);
    if (*_LAB_2c4f7c18 == '\x01') {
      (**(code **)(*_LAB_2c4f7c20 + 8))
                (pbVar9,(uint)((ulonglong)_LAB_2c4f7c04 * (ulonglong)param_2 >> 0x21),_LAB_2c4f7c10)
      ;
    }
    else {
      uVar6 = (uint)((ulonglong)_LAB_2c4f7c04 * (ulonglong)param_2 >> 0x20);
      uVar10 = uVar6 >> 3;
      (**(code **)(*_LAB_2c4f7c20 + 8))(pbVar9,uVar10,_LAB_2c4f7c10,uVar6 >> 1);
      uVar6 = (uint)((ulonglong)_LAB_2c4f7c24 * (ulonglong)uVar10 >> 0x25);
      if (uVar10 + uVar6 * -0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(uRam2c4f7c40,uRam2c4f7c3c,uVar10,
                     (int)((ulonglong)_LAB_2c4f7c24 * (ulonglong)uVar10));
      }
      if (0x2cf < param_2) {
        pbVar3 = pbVar9 + 0x3b;
        uVar4 = 0;
        pbVar5 = pbVar9;
        do {
          bVar1 = pbVar3[-0x3b];
          pbVar7 = pbVar5;
          do {
            pbVar8 = pbVar7 + 1;
            *pbVar7 = pbVar7[1];
            pbVar7 = pbVar8;
          } while (pbVar3 != pbVar8);
          uVar4 = uVar4 + 1;
          pbVar5[0x3b] = bVar1;
          pbVar3 = pbVar3 + 0x3c;
          pbVar5 = pbVar5 + 0x3c;
        } while (uVar4 < uVar6);
        *_LAB_2c4f7c28 = bVar1;
      }
      if (0xb < param_2) {
        pbVar5 = pbVar9 + uVar10;
        pbVar3 = pbVar9 + uVar10 * 2;
        do {
          pbVar5 = pbVar5 + -1;
          pbVar3 = pbVar3 + -2;
          *(ushort *)pbVar3 = (ushort)*pbVar5 << 8;
        } while (pbVar9 != pbVar5);
      }
    }
  }
  if (*_LAB_2c4f7bf8 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

