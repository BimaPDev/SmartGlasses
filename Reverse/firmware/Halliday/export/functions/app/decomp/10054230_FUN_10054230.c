/* FUN_10054230 @ 0x10054230 */

void FUN_10054230(uint *param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  int extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *puVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  if (param_3 < 0x40000) {
    if (param_3 < 5) {
      FUN_10119dc2(DAT_1005438c,DAT_10054388,DAT_10054384,0x182,param_1,param_2);
      FUN_10119dc2(DAT_10054390);
      uVar10 = FUN_1011a1f0(DAT_10054384,0x182,param_3,param_4);
      param_4 = extraout_r3;
    }
    iVar3 = 4;
  }
  else {
    iVar3 = 8;
  }
  uVar6 = param_2 + 7U & 0xfffffff8;
  uVar7 = param_2 + (param_3 - iVar3) & 0xfffffff8;
  uVar9 = uVar7 - uVar6;
  uVar8 = uVar9 >> 3;
  if (uVar7 <= uVar6) {
    FUN_10119dc2(DAT_10054394,DAT_10054384,0x18a);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    uVar10 = CONCAT44(extraout_r1,&Reset);
    software_interrupt(2);
    iVar3 = extraout_r2;
    param_4 = extraout_r3_00;
  }
  if (uVar9 < 0x18) {
    FUN_10119dc2(DAT_1005438c,DAT_10054398,DAT_10054384,0x18b,uVar10);
    FUN_10119dc2(DAT_10054390);
    FUN_1011a1f0(DAT_10054384,0x18b,iVar3,param_4);
  }
  *param_1 = uVar6;
  *(undefined4 *)(uVar6 + 0xc) = 0;
  *(uint *)(uVar6 + 8) = uVar8;
  iVar3 = FUN_10119e92(uVar6,uVar8);
  uVar10 = FUN_10119e76(uVar6,1);
  uVar9 = iVar3 * 4 + 0x1bU >> 3;
  uVar7 = (int)uVar10 + uVar9;
  if (uVar8 < uVar7) {
    FUN_10119dc2(DAT_1005438c,DAT_1005439c,DAT_10054384,0x196,uVar7,(int)((ulonglong)uVar10 >> 0x20)
                );
    FUN_10119dc2(DAT_10054390);
    FUN_1011a1f0(DAT_10054384,0x196,extraout_r2_00,extraout_r3_01);
  }
  puVar4 = (undefined4 *)(uVar6 + 0x10);
  for (iVar5 = 0; iVar5 < iVar3 + 1; iVar5 = iVar5 + 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_10119e8a(uVar6,0,uVar9);
  FUN_10053ae8(uVar6,0,0);
  uVar2 = FUN_10119e46(uVar6,0,1);
  FUN_10119e8a(uVar2,uVar9,uVar8 - uVar9);
  FUN_10053ae8(uVar6,uVar9,0,uVar9);
  FUN_10119e8a(uVar6,uVar8,0);
  FUN_10053ae8(uVar6,uVar8,0,uVar8 - uVar9);
  uVar2 = FUN_10119e46(uVar6,uVar8,1);
  FUN_10053dd4(uVar2,uVar9);
  return;
}

