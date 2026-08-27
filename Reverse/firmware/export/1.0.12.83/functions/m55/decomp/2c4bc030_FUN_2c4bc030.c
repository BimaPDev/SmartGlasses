/* FUN_2c4bc030 @ 0x2c4bc030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4bc030(uint param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  puVar3 = _LAB_2c4bc178;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    *_LAB_2c4bc178 = 0x2c4bc056;
    puVar3[1] = unaff_lr;
  }
  iVar4 = _LAB_2c4bc17c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  iVar8 = _LAB_2c4bc17c + param_1 * 0x70;
  bVar6 = *(byte *)(iVar8 + 0xf);
  if (bVar6 < 2) {
    bVar1 = *(byte *)(iVar8 + 0xd);
    uVar7 = (uint)bVar1;
    if (1 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bc188,_LAB_2c4bc184,param_1,uVar7);
    }
    if (((*(char *)(_LAB_2c4bc17c + param_1 * 0x70) != '\0') || ((*(byte *)(iVar8 + 1) & 1) == 0))
       || (*(char *)(_LAB_2c4bc17c + param_1 * 0x70 + (uVar7 + 1) * 0x30) == '\0')) {
      iVar8 = param_1 * 0x70;
      iVar9 = iVar8 + (uVar7 + 1) * 0x30;
      iVar11 = iVar8 + _LAB_2c4bc17c;
      iVar8 = iVar8 + uVar7 * 0x30 + _LAB_2c4bc17c;
      *(undefined4 *)(iVar8 + 0x14) = param_4;
      *(undefined4 *)(iVar8 + 0x10) = param_2;
      *(undefined2 *)(iVar8 + 0x1c) = param_6;
      *(undefined2 *)(iVar8 + 0x18) = param_3;
      *(undefined4 *)(iVar8 + 0x2c) = param_8;
      *(undefined1 *)(iVar8 + 0x24) = 1;
      *(undefined4 *)(iVar8 + 0x3c) = param_10;
      *(undefined1 *)(iVar8 + 0x25) = 1;
      param_2 = 2;
      *(undefined4 *)(iVar8 + 0x28) = 0;
      *(undefined1 *)(iVar4 + iVar9) = 2;
      *(undefined4 *)(iVar8 + 0x20) = 0;
      *(undefined2 *)(iVar8 + 0x1e) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined2 *)(iVar8 + 0x1a) = param_5;
      *(undefined2 *)(iVar8 + 0x26) = param_7;
      *(byte *)(iVar11 + 0xd) = bVar1 + 1 & 1;
      *(byte *)(iVar11 + 0xf) = bVar6 + 1;
      *(undefined4 *)(iVar9 + iVar4 + 4) = param_9;
      goto LAB_2c4bc0f0;
    }
  }
  uVar7 = 0xffffffff;
LAB_2c4bc0f0:
  if (iVar10 == 0) {
    *_LAB_2c4bc178 = 0xffffffff;
  }
  puVar3 = _LAB_2c4bc178;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  if (uVar7 != 0xffffffff) {
    iVar10 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *_LAB_2c4bc178 = 0x2c4bc112;
      puVar3[1] = unaff_lr;
    }
    pbVar5 = _LAB_2c4bc180;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    bVar6 = *_LAB_2c4bc180;
    if (bVar6 == 0) {
      FUN_2c4be700(2,param_2,0,0x40);
      bVar6 = *pbVar5;
    }
    *pbVar5 = (byte)(1 << (param_1 & 0xff)) | bVar6;
    if (iVar10 == 0) {
      *_LAB_2c4bc178 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar10);
    }
  }
  return uVar7;
}

