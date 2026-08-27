/* FUN_2c609aec @ 0x2c609aec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c609aec(undefined4 *param_1,short *param_2,short *param_3,int param_4,undefined1 param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  short *psVar12;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  short sStack_90;
  short sStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  int iStack_78;
  int iStack_74;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  int iStack_64;
  undefined1 uStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  undefined4 uStack_42;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined4 uStack_32;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c609dcc;
  puVar10 = (undefined2 *)param_1[2];
  uStack_98 = *puVar10;
  uStack_96 = puVar10[1];
  uStack_94 = puVar10[2];
  uStack_92 = puVar10[3];
  iVar5 = FUN_2c613fa8(&uStack_98);
  sVar3 = param_2[0x18];
  iVar6 = FUN_2c62a6b4(&sStack_90,param_3,param_1[2]);
  if (iVar6 != 0) {
    FUN_2c62a690(&sStack_90,(int)-*(short *)param_1[1],(int)-((short *)param_1[1])[1]);
    if ((param_4 != 0) && (iVar5 == 0)) {
      uVar8 = *param_1;
      sVar1 = ((short *)param_1[1])[2];
      sVar2 = *(short *)param_1[1];
      cVar4 = func_0x2c614f44(param_5);
      if (((char)sVar3 == '\0') && (cVar4 != '\x01')) {
        sStack_80 = (param_3[2] + 1) - *param_3;
        uVar7 = (uint)sStack_80;
        iVar5 = uVar7 << 2;
        sStack_84 = (sStack_90 - *param_3) + *(short *)param_1[1];
        sStack_82 = (sStack_8e - param_3[1]) + ((short *)param_1[1])[1];
        sVar3 = (param_3[3] + 1) - param_3[1];
        iStack_88 = param_4 + (uVar7 * (int)sStack_82 + (int)sStack_84) * 4;
        sStack_7c = sStack_80 - sStack_84;
        sStack_80 = sStack_80 + -1;
        uVar11 = (uint)sStack_7c;
        sStack_7a = sVar3 - sStack_82;
        sStack_7e = sVar3 + -1;
        uVar9 = (uint)sStack_7a;
        uStack_60 = *(undefined1 *)((int)param_2 + 0x31);
        iStack_78 = iVar5;
        iStack_74 = iStack_88;
        sStack_70 = sStack_84;
        sStack_6e = sStack_82;
        sStack_6c = sStack_80;
        sStack_6a = sStack_7e;
        sStack_68 = sStack_7c;
        sStack_66 = sStack_7a;
        iStack_64 = iVar5;
        if (((((int)uVar11 < 0) || ((int)uVar9 < 0)) || (uVar7 < uVar11)) ||
           ((uint)(int)sVar3 < uVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c609dd4,0x10b,_LAB_2c609dd8,_LAB_2c609dd0,uVar7,(int)sVar3,uVar11,
                       uVar9);
        }
        func_0x2c60a358(&iStack_88);
        sStack_7a = (param_3[3] + 1) - param_3[1];
        psVar12 = (short *)param_1[1];
        iStack_64 = (int)(short)((sVar1 + 1) - sVar2) << 2;
        sStack_7c = (param_3[2] + 1) - *param_3;
        sStack_84 = *psVar12 + (sStack_90 - *param_3);
        sStack_80 = sStack_7c + -1 + sStack_84;
        sStack_82 = psVar12[1] + (sStack_8e - param_3[1]);
        sStack_7e = sStack_7a + -1 + sStack_82;
        iStack_88 = param_4 + (uVar7 * (int)sStack_82 + (int)sStack_84) * 4;
        sStack_68 = (psVar12[2] + 1) - *psVar12;
        sStack_70 = sStack_90;
        sStack_66 = (psVar12[3] + 1) - psVar12[1];
        sStack_6e = sStack_8e;
        sStack_6c = uStack_8c;
        sStack_6a = uStack_8a;
        uStack_60 = *(undefined1 *)((int)param_2 + 0x31);
        iStack_5c = (int)*param_2;
        uStack_54 = *(undefined4 *)(param_2 + 2);
        uStack_58 = (uint)(ushort)param_2[1];
        uStack_50 = (undefined1)param_2[4];
        uStack_4e = *(undefined4 *)(param_2 + 5);
        uStack_4a = *(undefined4 *)(param_2 + 7);
        uStack_46 = *(undefined4 *)(param_2 + 9);
        uStack_42 = *(undefined4 *)(param_2 + 0xb);
        uStack_3e = *(undefined4 *)(param_2 + 0xd);
        uStack_3a = *(undefined4 *)(param_2 + 0xf);
        uStack_36 = *(undefined4 *)(param_2 + 0x11);
        uStack_32 = *(undefined4 *)(param_2 + 0x13);
        iStack_78 = iVar5;
        iStack_74 = uVar8;
        iVar5 = func_0x2c60a328(&iStack_88);
        if (iVar5 == 1) goto LAB_2c609b42;
      }
    }
    func_0x2c6116ac(param_1,param_2,param_3,param_4,param_5);
  }
LAB_2c609b42:
  if (*_LAB_2c609dcc == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

