/* FUN_1404a6d8 @ 0x1404a6d8 */

void FUN_1404a6d8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 extraout_r1;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar18;
  undefined8 uVar19;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined4 uStack_4e;
  uint local_2c;
  undefined4 *puVar17;
  
  local_2c = *DAT_1404a840;
  local_58 = 0;
  uStack_54 = 0;
  local_5c = 0;
  local_50 = 0;
  uVar5 = 0;
  if ((param_2 == 0) ||
     (uVar19 = FUN_14095050(param_2,param_2,0), uVar5 = (undefined4)((ulonglong)uVar19 >> 0x20),
     (int)uVar19 == 0)) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined1 *)FUN_140959a4(param_2);
    uVar5 = FUN_140955b4(param_2);
    if (param_1 == 0) {
      param_1 = DAT_1404a844;
    }
    uVar6 = FUN_14095328(param_2);
    uVar15 = (uint)(byte)puVar4[3];
    uVar14 = (uint)(byte)puVar4[4];
    uVar13 = (uint)(byte)puVar4[5];
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar18 = (uint)(byte)puVar4[2];
    uVar7 = FUN_140959c4(param_2);
    uVar8 = FUN_140955c0(param_2);
    uVar9 = FUN_140959cc(param_2);
    uVar10 = FUN_14094d18((int)uVar19);
    uVar3 = uVar5;
    FUN_1402a6e8(4,0x68f,DAT_1404a850,DAT_1404a84c,DAT_1404a848,param_1,uVar6,uVar1,uVar2,uVar18,
                 uVar15,uVar14,uVar13,uVar5,uVar7,uVar8,uVar9,uVar10);
    iVar11 = FUN_14033980(uVar5,&local_5c);
    if (iVar11 != 0) {
      iVar11 = (int)(char)local_5c;
      uVar1 = local_5c._1_1_;
      uVar6 = FUN_14032b20(uVar5);
      FUN_1402a6e8(4,0x69d,DAT_1404a850,DAT_1404a84c,DAT_1404a858,param_1,iVar11,uVar1,uVar6,uVar18,
                   uVar15,uVar14,uVar13,uVar3,uVar7,uVar8,uVar9,uVar10);
    }
    uVar19 = FUN_140337e0(uVar5,&local_58,10);
    uVar3 = DAT_1404a85c;
    uVar5 = (undefined4)((ulonglong)uVar19 >> 0x20);
    if ((int)uVar19 == 0) {
      iVar11 = 0;
      puVar17 = &local_58;
      do {
        puVar16 = (undefined4 *)((int)puVar17 + 1);
        iVar12 = FUN_1402a350((int)&uStack_4e + 2 + iVar11,0x20 - iVar11,uVar3,
                              *(undefined1 *)puVar17);
        iVar11 = iVar11 + iVar12;
        puVar17 = puVar16;
      } while (puVar16 != &uStack_4e);
      FUN_1402a6e8(4,0x6ac,DAT_1404a850,DAT_1404a84c,DAT_1404a854,param_1,(int)&uStack_4e + 2);
      uVar3 = 1;
      uVar5 = extraout_r1;
    }
    else {
      uVar3 = 1;
    }
  }
  if ((*DAT_1404a840 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar3,uVar5,*DAT_1404a840 ^ local_2c,0);
}

