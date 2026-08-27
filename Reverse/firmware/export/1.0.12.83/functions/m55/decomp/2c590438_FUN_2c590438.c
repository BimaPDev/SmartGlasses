/* FUN_2c590438 @ 0x2c590438 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c59092a) */
/* WARNING: Removing unreachable block (ram,0x2c590876) */
/* WARNING: Removing unreachable block (ram,0x2c5907ac) */
/* WARNING: Removing unreachable block (ram,0x2c590614) */
/* WARNING: Removing unreachable block (ram,0x2c59056a) */
/* WARNING: Removing unreachable block (ram,0x2c59049a) */
/* WARNING: Removing unreachable block (ram,0x2c590512) */
/* WARNING: Removing unreachable block (ram,0x2c5905c2) */
/* WARNING: Removing unreachable block (ram,0x2c5906ca) */
/* WARNING: Removing unreachable block (ram,0x2c59080e) */
/* WARNING: Removing unreachable block (ram,0x2c5908d2) */
/* WARNING: Removing unreachable block (ram,0x2c590988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c590438(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  uVar3 = uStack_30;
  piVar2 = _LAB_2c590724;
  *param_1 = _LAB_2c590720;
  iVar8 = *piVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (iVar8 == 0) {
    FUN_2c4723c4(0);
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
  uStack_34 = uStack_34 & 0xffffff00;
  uVar5 = *_LAB_2c590730;
  uVar7 = _LAB_2c590730[1];
  *puVar4 = *(undefined4 *)(_LAB_2c59072c + 4);
  *(undefined1 *)(puVar4 + 1) = 0;
  puVar4[2] = param_1;
  puVar4[3] = puVar4 + 5;
  puVar4[5] = uVar5;
  puVar4[6] = uVar7;
  puVar4[7] = uStack_34;
  puVar4[8] = uStack_30;
  puVar4[4] = 8;
  *puVar4 = _LAB_2c590734;
  iVar8 = *piVar2;
  param_1[5] = puVar4;
  if (iVar8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  uVar5 = FUN_2c47245c(0,0x38);
  func_0x2c590078(uVar5,param_1);
  iVar8 = *piVar2;
  param_1[6] = uVar5;
  if (iVar8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
  uVar5 = *_LAB_2c59073c;
  uVar7 = _LAB_2c59073c[1];
  uVar9 = _LAB_2c59073c[2];
  uStack_30._0_2_ = (ushort)(byte)_LAB_2c59073c[3];
  *puVar4 = *(undefined4 *)(_LAB_2c590738 + 4);
  *(undefined1 *)(puVar4 + 1) = 0;
  puVar4[2] = param_1;
  puVar4[3] = puVar4 + 5;
  puVar4[5] = uVar5;
  puVar4[6] = uVar7;
  puVar4[7] = uVar9;
  puVar4[8] = uStack_30;
  puVar4[4] = 0xd;
  *puVar4 = _LAB_2c590740;
  iVar8 = *piVar2;
  param_1[7] = puVar4;
  if (iVar8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
  uStack_34 = uVar9 & 0xffffff00;
  uVar5 = *_LAB_2c590748;
  uVar7 = _LAB_2c590748[1];
  *puVar4 = *(undefined4 *)(_LAB_2c590744 + 4);
  *(undefined1 *)(puVar4 + 1) = 0;
  puVar4[2] = param_1;
  puVar4[3] = puVar4 + 5;
  puVar4[5] = uVar5;
  puVar4[6] = uVar7;
  puVar4[7] = uStack_34;
  puVar4[8] = uStack_30;
  puVar4[4] = 8;
  *puVar4 = _LAB_2c59074c;
  iVar8 = *piVar2;
  param_1[8] = puVar4;
  if (iVar8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
  uVar5 = *_LAB_2c590750;
  uStack_38 = _LAB_2c590750[1] & 0xffffff;
  *puVar4 = *(undefined4 *)(_LAB_2c590754 + 4);
  *(undefined1 *)(puVar4 + 1) = 0;
  puVar4[2] = param_1;
  puVar4[3] = puVar4 + 5;
  puVar4[5] = uVar5;
  puVar4[6] = uStack_38;
  puVar4[7] = uStack_34;
  puVar4[8] = uStack_30;
  puVar4[4] = 7;
  *puVar4 = _LAB_2c590758;
  iVar8 = *piVar2;
  param_1[10] = puVar4;
  if (iVar8 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0x34);
  iVar8 = *_LAB_2c59075c;
  uStack_38._0_2_ = (ushort)(byte)_LAB_2c59075c[1];
  *piVar6 = *(int *)(_LAB_2c590760 + 4);
  *(undefined1 *)(piVar6 + 1) = 0;
  piVar6[2] = (int)param_1;
  piVar6[3] = (int)(piVar6 + 5);
  piVar6[5] = iVar8;
  piVar6[6] = uStack_38;
  piVar6[7] = uStack_34;
  piVar6[8] = uStack_30;
  piVar6[4] = 5;
  iVar8 = _LAB_2c590764;
  *piVar6 = _LAB_2c590764;
  piVar6[9] = iVar8 + 0x60;
  *(undefined1 *)(piVar6 + 10) = 0;
  piVar6[0xb] = 0;
  piVar6[0xc] = 0;
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0xc);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar11 = (undefined4 *)piVar6[0xc];
  piVar6[0xc] = (int)puVar4;
  if (puVar11 == (undefined4 *)0x0) {
    iVar8 = *piVar2;
    param_1[0xb] = piVar6;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x2c);
    uVar5 = *_LAB_2c59076c;
    uVar7 = _LAB_2c59076c[1];
    uStack_34._0_3_ = (uint3)(ushort)_LAB_2c59076c[2];
    *puVar4 = *(undefined4 *)(_LAB_2c590768 + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uVar7;
    puVar4[7] = uStack_34;
    puVar4[8] = uStack_30;
    puVar4[4] = 10;
    *puVar4 = _LAB_2c590770;
    puVar4[9] = 0;
    puVar4[10] = 0;
    iVar8 = *piVar2;
    param_1[0xc] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    uVar5 = FUN_2c47245c(0,0x44);
    FUN_2c58dab8(uVar5,param_1);
    iVar8 = *piVar2;
    param_1[0xd] = uVar5;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x28);
    uVar5 = *_LAB_2c590774;
    uVar7 = _LAB_2c590774[1];
    uStack_34 = _LAB_2c590774[2] & 0xffffff;
    *puVar4 = *(undefined4 *)(_LAB_2c590778 + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uVar7;
    puVar4[7] = uStack_34;
    puVar4[8] = uStack_30;
    puVar4[4] = 0xb;
    *puVar4 = _LAB_2c590a8c;
    puVar4[9] = 0;
    iVar8 = *piVar2;
    param_1[0xe] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
    uVar5 = *_LAB_2c590a94;
    uVar7 = _LAB_2c590a94[1];
    uVar10 = _LAB_2c590a94[2];
    uStack_30._3_1_ = SUB41(uVar3,3);
    uStack_30._0_3_ = (uint3)(ushort)_LAB_2c590a94[3];
    *puVar4 = *(undefined4 *)(_LAB_2c590a90 + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uVar7;
    puVar4[7] = uVar10;
    puVar4[8] = uStack_30;
    puVar4[4] = 0xe;
    *puVar4 = _LAB_2c590a98;
    iVar8 = *piVar2;
    param_1[0xf] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
    uVar5 = *_LAB_2c590aa0;
    uVar7 = _LAB_2c590aa0[1];
    uVar10 = _LAB_2c590aa0[2];
    uStack_30._0_3_ = (uint3)(ushort)_LAB_2c590aa0[3];
    *puVar4 = *(undefined4 *)(_LAB_2c590a9c + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uVar7;
    puVar4[7] = uVar10;
    puVar4[8] = uStack_30;
    puVar4[4] = 0xe;
    *puVar4 = _LAB_2c590aa4;
    iVar8 = *piVar2;
    param_1[0x10] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
    uStack_30 = uStack_30 & 0xffffff00;
    uVar5 = *_LAB_2c590aa8;
    uVar7 = _LAB_2c590aa8[1];
    uVar10 = _LAB_2c590aa8[2];
    *puVar4 = *(undefined4 *)(_LAB_2c590aac + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uVar7;
    puVar4[7] = uVar10;
    puVar4[8] = uStack_30;
    puVar4[4] = 0xc;
    *puVar4 = _LAB_2c590ab0;
    iVar8 = *piVar2;
    param_1[0x11] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x34);
    uVar5 = *_LAB_2c590ab4;
    uStack_38 = _LAB_2c590ab4[1] & 0xffffff;
    *puVar4 = *(undefined4 *)(_LAB_2c590ab8 + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = uStack_38;
    puVar4[7] = uVar10;
    puVar4[8] = uStack_30;
    puVar4[4] = 7;
    *puVar4 = _LAB_2c590abc;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 5000;
    iVar8 = *piVar2;
    param_1[0x12] = puVar4;
    if (iVar8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x2c);
    uVar5 = *_LAB_2c590ac0;
    uVar1 = *(ushort *)(_LAB_2c590ac0 + 1);
    *puVar4 = *(undefined4 *)(_LAB_2c590ac4 + 4);
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = param_1;
    puVar4[3] = puVar4 + 5;
    puVar4[5] = uVar5;
    puVar4[6] = (uint)uVar1;
    puVar4[7] = uVar10;
    puVar4[8] = uStack_30;
    puVar4[4] = 6;
    *puVar4 = _LAB_2c590ac8;
    puVar4[9] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (undefined4 *)*puVar11;
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar11);
  }
  (**(code **)*puVar4)(puVar4);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar4);
}

