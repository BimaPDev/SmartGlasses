/* FUN_140092b8 @ 0x140092b8 */

void FUN_140092b8(uint param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 unaff_lr;
  
  uVar9 = uRam1400937c;
  puVar4 = puRam14009378;
  pbVar3 = pbRam14009374;
  uVar8 = param_1 >> 4;
  if (uVar8 == 0) {
    uVar7 = param_1 & 0xf;
    if (-1 < (int)(param_1 << 0x1c)) {
      iVar10 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar10 = getBasePriority();
      }
      if (iVar10 != 0x40) {
        bVar1 = *pbRam14009374;
        *puRam14009378 = 0x140092d4;
        puVar4[1] = unaff_lr;
        uVar8 = bVar1 + 1;
        *pbVar3 = (char)uVar8 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar8 >> 0x23) * -10;
        *(undefined4 *)(iRam14009380 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      iVar5 = uVar7 * 0x20;
      uVar8 = *(uint *)(iVar5 + 0x4013010c);
      uVar12 = *(undefined4 *)(iVar5 + 0x40130100);
      uVar9 = *(uint *)(iVar5 + 0x4013010c);
      uVar11 = *(undefined4 *)(iVar5 + 0x40130100);
      if (iVar10 == 0) {
        *puRam14009378 = 0xffffffff;
      }
      pbVar3 = pbRam14009384;
      uVar7 = uRam1400937c;
      bVar1 = *pbRam14009384;
      *(undefined4 *)(iRam14009390 + (uint)bVar1 * 4) = unaff_lr;
      uVar6 = bVar1 + 1;
      *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar10);
      }
      uVar8 = uVar8 & 0xfff;
      uVar9 = uVar9 & 0xfff;
      if (uVar8 == uVar9) {
        *param_2 = uVar8;
        *param_3 = uVar12;
      }
      else {
        *param_2 = uVar9;
        *param_3 = uVar11;
      }
      return;
    }
    FUN_1400a3b0(uRam14009388,0,uVar7,uVar7,param_4);
  }
  FUN_1400a3b0(uRam1400938c,uVar8);
  do {
    *(uint *)(*(int *)(uVar8 + 0x20) + 0x7c) = uVar8 + 0x24;
    *(uint *)(uVar8 + 0xaf) = uVar8 + 0x33;
    uVar8 = uVar8 + 0x42;
  } while( true );
}

